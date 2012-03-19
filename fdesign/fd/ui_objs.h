/* Header file generated by fdesign on Mon Mar 19 08:31:31 2012 */

#ifndef FD_buttonform_h_
#define FD_buttonform_h_

#include <forms.h>

/* Callbacks, globals and object handlers */





/* Forms and Objects */

typedef struct {
    FL_FORM   * buttonform;
    void      * vdata;
    char      * cdata;
    long        ldata;
} FD_buttonform;

extern FD_buttonform * create_form_buttonform( void );
typedef struct {
    FL_FORM   * valuatorform;
    void      * vdata;
    char      * cdata;
    long        ldata;
} FD_valuatorform;

extern FD_valuatorform * create_form_valuatorform( void );
typedef struct {
    FL_FORM   * staticform;
    void      * vdata;
    char      * cdata;
    long        ldata;
} FD_staticform;

extern FD_staticform * create_form_staticform( void );

#endif /* FD_buttonform_h_ */
