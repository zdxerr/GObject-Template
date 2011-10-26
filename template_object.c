/*
 * Custom GObject <prefix_capitalized>-Header
 */

#include <glib-object.h>

#include "<prefix_lower_case>_<typename_lower_case>.h"
#include "<prefix_lower_case>_<typename_lower_case>_private.h"

#define <prefix_upper_case>_<typename_upper_case>_GET_PRIVATE(obj) \
  (G_TYPE_INSTANCE_GET_PRIVATE ((obj), <prefix_upper_case>_TYPE_<typename_upper_case>, \
                                <prefix_capitalized><typename_capitalized>Private)) 

static void <prefix_lower_case>_<typename_lower_case>_class_init (<prefix_capitalized><typename_capitalized>Class *);
static void <prefix_lower_case>_<typename_lower_case>_init (<prefix_capitalized><typename_capitalized> *);
static void <prefix_lower_case>_<typename_lower_case>_constructed (GObject *);
static void <prefix_lower_case>_<typename_lower_case>_dispose (GObject *);
static void <prefix_lower_case>_<typename_lower_case>_finalize (GObject *);

G_DEFINE_TYPE (<prefix_capitalized><typename_capitalized>, <prefix_lower_case>_<typename_lower_case>, G_TYPE_OBJECT)

static void
<prefix_lower_case>_<typename_lower_case>_class_init (<prefix_capitalized><typename_capitalized>Class *klass)
{
  GObjectClass *gobject_class = G_OBJECT_CLASS(klass);

  gobject_class->constructed = <prefix_lower_case>_<typename_lower_case>_constructed;
  gobject_class->dispose = <prefix_lower_case>_<typename_lower_case>_dispose;
  gobject_class->finalize = <prefix_lower_case>_<typename_lower_case>_finalize;

  g_type_class_add_private (klass, sizeof(<prefix_capitalized><typename_capitalized>Private));
}

static void
<prefix_lower_case>_<typename_lower_case>_init (<prefix_capitalized><typename_capitalized> *self)
{
  <prefix_capitalized><typename_capitalized>Private *priv;

  self->priv = priv = <prefix_upper_case>_<typename_upper_case>_GET_PRIVATE (self);

  /* initialize all public and private members to reasonable default values. */
}

static void
<prefix_lower_case>_<typename_lower_case>_constructed (GObject *gobject)
{
  <prefix_capitalized><typename_capitalized> *self = <prefix_upper_case>_<typename_upper_case>(gobject);
}

static void
<prefix_lower_case>_<typename_lower_case>_dispose (GObject *gobject)
{
  <prefix_capitalized><typename_capitalized> *self = <prefix_upper_case>_<typename_upper_case>(gobject);

  /* 
   * In dispose, you are supposed to free all types referenced from this
   * object which might themselves hold a reference to self. Generally,
   * the most simple solution is to unref all members on which you own a 
   * reference.
   */

  /* dispose might be called multiple times, so we must guard against
   * calling g_object_unref() on an invalid GObject.
   */

  /* Chain up to the parent class */
  G_OBJECT_CLASS(<prefix_lower_case>_<typename_lower_case>_parent_class)->dispose(gobject);
}

static void
<prefix_lower_case>_<typename_lower_case>_finalize (GObject *gobject)
{
  <prefix_capitalized><typename_capitalized> *self = <prefix_upper_case>_<typename_upper_case>(gobject);

  /* Chain up to the parent class */
  G_OBJECT_CLASS(<prefix_lower_case>_<typename_lower_case>_parent_class)->finalize(gobject);
}

<prefix_capitalized><typename_capitalized> *
<prefix_lower_case>_<typename_lower_case>_new (void)
{
  return g_object_new(<prefix_upper_case>_TYPE_<typename_upper_case>, NULL);
}

void
<prefix_lower_case>_<typename_lower_case>_do_action (<prefix_capitalized><typename_capitalized> *self)
{
  g_return_if_fail (<prefix_upper_case>_IS_<typename_upper_case>(self));

  /* do stuff here. */
}

