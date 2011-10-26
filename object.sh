#!/bin/bash

PREFIX=$1
TYPENAME=$2

PREFIX_LOWER_CASE="$(tr [A-Z] [a-z] <<< "$PREFIX")"
PREFIX_UPPER_CASE="$(tr [a-z] [A-Z] <<< "$PREFIX")"

TYPENAME_LOWER_CASE="$(tr [A-Z] [a-z] <<< "$TYPENAME")"
TYPENAME_UPPER_CASE="$(tr [a-z] [A-Z] <<< "$TYPENAME")"

REPLACEMENTS="s/<prefix_capitalized>/$PREFIX/g
s/<prefix_upper_case>/$PREFIX_UPPER_CASE/g
s/<prefix_lower_case>/$PREFIX_LOWER_CASE/g
s/<typename_capitalized>/$TYPENAME/g
s/<typename_upper_case>/$TYPENAME_UPPER_CASE/g
s/<typename_lower_case>/$TYPENAME_LOWER_CASE/g"

REPLACEMENTS="$(tr -s '\n' ';' <<< "$REPLACEMENTS")"

FOLDER="${PREFIX_LOWER_CASE}_${TYPENAME_LOWER_CASE}"
C_FILE="${FOLDER}/${PREFIX_LOWER_CASE}_${TYPENAME_LOWER_CASE}.c"
H_FILE="${FOLDER}/${PREFIX_LOWER_CASE}_${TYPENAME_LOWER_CASE}.h"
P_FILE="${FOLDER}/${PREFIX_LOWER_CASE}_${TYPENAME_LOWER_CASE}_private.h"

mkdir $FOLDER

sed -e $REPLACEMENTS template_object.c > $C_FILE
sed -e $REPLACEMENTS template_object.h > $H_FILE
sed -e $REPLACEMENTS template_object_private.h > $P_FILE
sed -e $REPLACEMENTS template_makefile > "${FOLDER}/Makefile"

echo "OBJECT FILES GENERATED!"
echo "Trying to compile them (some warnings are expected):"

cd $FOLDER

make 2>&1

if [ $? != 0 ]; then
  {
    echo "COMPILATION ERROR!"
    exit 1
  } 
else
  {
    echo "Test successfull. Cleaning up..."
  } fi

make clean
cd ..

echo "Done."

