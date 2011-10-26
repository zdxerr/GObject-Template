/*
 * Custom GObject <prefix_capitalized>-Header
 */

/* inclusion guard */
#ifndef __<prefix_upper_case>_<typename_upper_case>_H__
#define __<prefix_upper_case>_<typename_upper_case>_H__

/*
 * Type macros.
 */
#define <prefix_upper_case>_TYPE_<typename_upper_case> \
  (<prefix_lower_case>_<typename_lower_case>_get_type())
#define <prefix_upper_case>_<typename_upper_case>(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), <prefix_upper_case>_TYPE_<typename_upper_case>, <prefix_capitalized><typename_capitalized>))
#define <prefix_upper_case>_IS_<typename_upper_case>(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), <prefix_upper_case>_TYPE_<typename_upper_case>))
#define <prefix_upper_case>_<typename_upper_case>_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass), <prefix_upper_case>_TYPE_<typename_upper_case>, \
                           <prefix_capitalized><typename_capitalized>Class))
#define <prefix_upper_case>_IS_<typename_upper_case>_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass), <prefix_upper_case>_TYPE_<typename_upper_case>))
#define <prefix_upper_case>_<typename_upper_case>_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS((obj), <prefix_upper_case>_TYPE_<typename_upper_case>, \
                             <prefix_capitalized><typename_capitalized>Class))

typedef struct _<prefix_capitalized><typename_capitalized> <prefix_capitalized><typename_capitalized>;
typedef struct _<prefix_capitalized><typename_capitalized>Private <prefix_capitalized><typename_capitalized>Private;
typedef struct _<prefix_capitalized><typename_capitalized>Class <prefix_capitalized><typename_capitalized>Class;

struct _<prefix_capitalized><typename_capitalized>
{
  GObject parent_instance;

  /* instance members */
    
  /*< private >*/
  <prefix_capitalized><typename_capitalized>Private *priv;
};

struct _<prefix_capitalized><typename_capitalized>Class
{
  GObjectClass parent_class;

  /* class members */
};

GType <prefix_lower_case>_<typename_lower_case>_get_type (void);

/*
 * Method definitions.
 */

<prefix_capitalized><typename_capitalized> *<prefix_lower_case>_<typename_lower_case>_new (void);
void <prefix_lower_case>_<typename_lower_case>_do_action (<prefix_capitalized><typename_capitalized> *);

#endif /* __<prefix_upper_case>_<typename_upper_case>_H__ */
