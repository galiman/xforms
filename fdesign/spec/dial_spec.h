/* Header file generated by fdesign on Thu Aug 15 17:24:46 2013 */

#ifndef FD_dialattrib_h_
#define FD_dialattrib_h_

#include <forms.h>

/* Callbacks, globals and object handlers */

extern void dial_returnsetting_change( FL_OBJECT *, long );
extern void dial_minmax_change( FL_OBJECT *, long );
extern void dial_initialvalue_change( FL_OBJECT *, long );
extern void dial_stepchange_cb( FL_OBJECT *, long );
extern void dial_thetachange_cb( FL_OBJECT *, long );
extern void dir_cb( FL_OBJECT *, long );


/* Forms and Objects */

typedef struct {
    FL_FORM   * dialattrib;
    void      * vdata;
    char      * cdata;
    long        ldata;
    FL_OBJECT * background;
    FL_OBJECT * returnsetting;
    FL_OBJECT * minval;
    FL_OBJECT * maxval;
    FL_OBJECT * initialval;
    FL_OBJECT * step;
    FL_OBJECT * thetai;
    FL_OBJECT * thetaf;
    FL_OBJECT * dir;
} FD_dialattrib;

extern FD_dialattrib * create_form_dialattrib( void );

#endif /* FD_dialattrib_h_ */
