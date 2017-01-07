/* Form definition file generated by fdesign on Sat Sep 17 15:20:30 2016 */

#include <stdlib.h>
#include "ui_theforms.h"


/***************************************
 ***************************************/

FD_control *
create_form_control( void )
{
    FL_OBJECT *obj;
    FD_control *fdui = ( FD_control * ) fl_malloc( sizeof *fdui );

    int old_bw = fl_get_border_width( );
    fl_set_border_width( -1 );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->control = fl_bgn_form( FL_NO_BOX, 495, 320 );

    obj = fl_add_box( FL_FLAT_BOX, 0, 0, 495, 320, "" );

    obj = fl_add_frame( FL_UP_FRAME, 2, 2, 495, 28, "" );
    fl_set_object_color( obj, FL_COL1, FL_COL1 );

    obj = fl_add_box( FL_UP_BOX, 370, 35, 121, 255, "" );

    fdui->title = obj = fl_add_text( FL_NORMAL_TEXT, 353, 0, 126, 23, "Form Designer" );
    fl_set_object_boxtype( obj, FL_NO_BOX );
    fl_set_object_lcolor( obj, FL_BLUE );
    fl_set_object_lsize( obj, FL_MEDIUM_SIZE );
    fl_set_object_lalign( obj, FL_ALIGN_CENTER );

    fdui->seltype = obj = fl_add_text( FL_NORMAL_TEXT, 5, 295, 135, 20, "" );
    fl_set_object_boxtype( obj, FL_DOWN_BOX );
    fl_set_object_color( obj, FL_COL1, FL_COL1 );
    fl_set_object_lsize( obj, FL_TINY_SIZE );
    fl_set_object_lalign( obj, FL_ALIGN_LEFT_TOP | FL_ALIGN_INSIDE );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );

    fdui->oristatus = obj = fl_add_text( FL_NORMAL_TEXT, 385, 295, 50, 20, "" );
    fl_set_object_boxtype( obj, FL_DOWN_BOX );
    fl_set_object_color( obj, FL_COL1, FL_COL1 );
    fl_set_object_lsize( obj, FL_TINY_SIZE );
    fl_set_object_lalign( obj, FL_ALIGN_CENTER );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );

    obj = fl_add_frame( FL_ENGRAVED_FRAME, 5, 65, 360, 225, "" );

    fdui->fkey_group = fl_bgn_group( );

    obj = fl_add_button( FL_NORMAL_BUTTON, 375, 40, 55, 40, "F1\nattribs" );
    fl_set_object_callback( obj, func_cb, 1 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 430, 40, 56, 40, "F2\nlower" );
    fl_set_object_callback( obj, func_cb, 2 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 375, 80, 55, 40, "F3\nraise" );
    fl_set_object_callback( obj, func_cb, 3 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 430, 80, 56, 40, "F4\nall" );
    fl_set_object_callback( obj, func_cb, 4 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 375, 120, 55, 40, "F5\nshow" );
    fl_set_object_callback( obj, func_cb, 5 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 430, 120, 56, 40, "F6\nhide" );
    fl_set_object_callback( obj, func_cb, 6 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 375, 160, 55, 40, "F7\ngroup" );
    fl_set_object_callback( obj, func_cb, 7 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 430, 160, 56, 40, "F8\nungroup" );
    fl_set_object_callback( obj, func_cb, 8 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 375, 200, 55, 40, "F9\ncopy" );
    fl_set_object_callback( obj, func_cb, 9 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 430, 200, 56, 40, "F10\npaste" );
    fl_set_object_callback( obj, func_cb, 10 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 375, 240, 55, 45, "F11\nselect" );
    fl_set_object_callback( obj, func_cb, 11 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 430, 240, 56, 45, "F12\ncut" );
    fl_set_object_callback( obj, func_cb, 12 );

    fl_end_group( );

    fdui->formbrowser = obj = fl_add_browser( FL_HOLD_BROWSER, 15, 90, 185, 100, "Forms" );
    fl_set_object_color( obj, FL_WHITE, FL_CYAN );
    fl_set_object_lalign( obj, FL_ALIGN_TOP );
    fl_set_object_callback( obj, form_cb, 0 );

    fdui->groupbrowser = obj = fl_add_browser( FL_MULTI_BROWSER, 15, 210, 185, 75, "Groups" );
    fl_set_object_color( obj, FL_WHITE, FL_CYAN );
    fl_set_object_lalign( obj, FL_ALIGN_TOP );
    fl_set_object_callback( obj, group_cb, 0 );

    fdui->sizestatus = obj = fl_add_text( FL_NORMAL_TEXT, 440, 295, 50, 20, "" );
    fl_set_object_boxtype( obj, FL_DOWN_BOX );
    fl_set_object_color( obj, FL_COL1, FL_COL1 );
    fl_set_object_lsize( obj, FL_TINY_SIZE );
    fl_set_object_lalign( obj, FL_ALIGN_CENTER );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );

    obj = fl_add_text( FL_NORMAL_TEXT, 346, 16, 149, 16, "(c) T.C. Zhao & Mark Overmars" );
    fl_set_object_boxtype( obj, FL_NO_BOX );
    fl_set_object_lsize( obj, FL_TINY_SIZE );
    fl_set_object_lalign( obj, FL_ALIGN_CENTER );

    fdui->objectbrowser = obj = fl_add_browser( FL_DESELECTABLE_HOLD_BROWSER, 210, 90, 145, 195, "Object classes" );
    fl_set_object_color( obj, FL_WHITE, FL_CYAN );
    fl_set_object_lalign( obj, FL_ALIGN_TOP );
    fl_set_object_callback( obj, object_cb, 0 );

    fdui->shortcut_group = fl_bgn_group( );

    obj = fl_add_button( FL_NORMAL_BUTTON, 5, 35, 50, 25, "Align" );
    fl_set_button_shortcut( obj, "^A", 1 );
    fl_set_object_callback( obj, align_cb, 0 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 65, 35, 50, 25, "Test" );
    fl_set_button_shortcut( obj, "^T", 1 );
    fl_set_object_callback( obj, test_cb, 0 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 315, 35, 50, 25, "Help" );
    fl_set_button_shortcut( obj, "^H", 1 );
    fl_set_object_callback( obj, help_cb, 0 );

    fl_end_group( );

    fdui->menubar_group = fl_bgn_group( );

    fdui->optionmenu = obj = fl_add_menu( FL_PULLDOWN_MENU, 255, 5, 60, 20, "Options" );
    fl_set_object_shortcut( obj, "^P", 1 );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_callback( obj, optionmenu_callback, 0 );

    fdui->filemenu = obj = fl_add_menu( FL_PULLDOWN_MENU, 7, 4, 35, 20, "File" );
    fl_set_object_shortcut( obj, "^F", 1 );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_callback( obj, filemenu_callback, 0 );

    fdui->formmenu = obj = fl_add_menu( FL_PULLDOWN_MENU, 58, 4, 40, 20, "Form" );
    fl_set_object_shortcut( obj, "^M", 1 );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_callback( obj, formmenu_callback, 0 );

    fdui->objectmenu = obj = fl_add_menu( FL_PULLDOWN_MENU, 180, 4, 53, 20, "Object" );
    fl_set_object_shortcut( obj, "^O", 1 );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_callback( obj, objectmenu_callback, 0 );

    fdui->groupmenu = obj = fl_add_menu( FL_PULLDOWN_MENU, 115, 4, 48, 20, "Group" );
    fl_set_object_shortcut( obj, "^G", 1 );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_callback( obj, groupmenu_callback, 0 );

    fl_end_group( );

    fdui->selname = obj = fl_add_text( FL_NORMAL_TEXT, 145, 295, 105, 20, "" );
    fl_set_object_boxtype( obj, FL_DOWN_BOX );
    fl_set_object_color( obj, FL_COL1, FL_COL1 );
    fl_set_object_lsize( obj, FL_TINY_SIZE );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );

    fdui->selcb = obj = fl_add_text( FL_NORMAL_TEXT, 255, 295, 125, 20, "" );
    fl_set_object_boxtype( obj, FL_DOWN_BOX );
    fl_set_object_color( obj, FL_COL1, FL_COL1 );
    fl_set_object_lsize( obj, FL_TINY_SIZE );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );

    fl_end_form( );

    fdui->control->fdui = fdui;
    fl_set_border_width( old_bw );

    return fdui;
}

/***************************************
 ***************************************/

FD_align *
create_form_align( void )
{
    FL_OBJECT *obj;
    FD_align *fdui = ( FD_align * ) fl_malloc( sizeof *fdui );

    int old_bw = fl_get_border_width( );
    fl_set_border_width( -1 );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->align = fl_bgn_form( FL_NO_BOX, 286, 126 );

    obj = fl_add_box( FL_UP_BOX, 0, 0, 286, 126, "" );

    obj = fl_add_frame( FL_ENGRAVED_FRAME, 10, 10, 265, 75, "" );

    fdui->left = obj = fl_add_button( FL_NORMAL_BUTTON, 15, 15, 36, 30, "@#<-" );
    fl_set_object_lcolor( obj, FL_BLUE );
    fl_set_object_callback( obj, doalign_cb, FD_LEFT );

    fdui->hcenter = obj = fl_add_button( FL_NORMAL_BUTTON, 53, 15, 36, 30, "@#<->" );
    fl_set_object_lcolor( obj, FL_BLUE );
    fl_set_object_callback( obj, doalign_cb, FD_HCENTER );

    fdui->right = obj = fl_add_button( FL_NORMAL_BUTTON, 91, 15, 36, 30, "@#->" );
    fl_set_object_lcolor( obj, FL_BLUE );
    fl_set_object_callback( obj, doalign_cb, FD_RIGHT );

    fdui->hequal = obj = fl_add_button( FL_NORMAL_BUTTON, 130, 15, 35, 30, "H. E" );
    fl_set_object_callback( obj, doalign_cb, FD_HEQUAL );

    fdui->snapobj = obj = fl_add_counter( FL_NORMAL_COUNTER, 15, 93, 130, 25, "" );
    fl_set_object_lalign( obj, FL_ALIGN_CENTER );
    fl_set_object_callback( obj, snap_cb, 0 );

    fdui->bottom = obj = fl_add_button( FL_NORMAL_BUTTON, 15, 50, 36, 30, "@#2->" );
    fl_set_object_lcolor( obj, FL_BLUE );
    fl_set_object_callback( obj, doalign_cb, FD_BOTTOM );

    fdui->vcenter = obj = fl_add_button( FL_NORMAL_BUTTON, 53, 50, 36, 30, "@#8<->" );
    fl_set_object_lcolor( obj, FL_BLUE );
    fl_set_object_callback( obj, doalign_cb, FD_VCENTER );

    fdui->top = obj = fl_add_button( FL_NORMAL_BUTTON, 91, 50, 36, 30, "@#8->" );
    fl_set_object_lcolor( obj, FL_BLUE );
    fl_set_object_callback( obj, doalign_cb, FD_TOP );

    fdui->vequal = obj = fl_add_button( FL_NORMAL_BUTTON, 130, 50, 35, 30, "V.E" );
    fl_set_object_callback( obj, doalign_cb, FD_VEQUAL );

    fdui->undo = obj = fl_add_button( FL_NORMAL_BUTTON, 190, 35, 70, 25, "Undo" );
    fl_set_button_shortcut( obj, "Uu^U", 1 );
    fl_set_object_callback( obj, undoalign_cb, 0 );

    fdui->dismiss = obj = fl_add_button( FL_NORMAL_BUTTON, 195, 95, 70, 25, "Dismiss" );
    fl_set_button_shortcut( obj, "Dd^D", 1 );
    fl_set_object_callback( obj, exitalign_cb, 0 );

    fl_end_form( );

    fdui->align->fdui = fdui;
    fl_set_border_width( old_bw );

    return fdui;
}

/***************************************
 ***************************************/

FD_test *
create_form_test( void )
{
    FL_OBJECT *obj;
    FD_test *fdui = ( FD_test * ) fl_malloc( sizeof *fdui );

    int old_bw = fl_get_border_width( );
    fl_set_border_width( -1 );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->test = fl_bgn_form( FL_NO_BOX, 272, 291 );

    obj = fl_add_box( FL_FLAT_BOX, 0, 0, 272, 291, "" );
    fl_set_object_color( obj, FL_INDIANRED, FL_COL1 );

    fdui->browser = obj = fl_add_browser( FL_NORMAL_BROWSER, 6, 22, 259, 224, "Object Returned" );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_lalign( obj, FL_ALIGN_TOP );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );
    fl_set_object_gravity( obj, FL_NorthWest, FL_SouthEast );

    fdui->stoptesting = obj = fl_add_button( FL_NORMAL_BUTTON, 134, 254, 80, 26, "Stop Testing" );
    fl_set_button_shortcut( obj, "Ss^S", 1 );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );
    fl_set_object_resize( obj, FL_RESIZE_NONE );
    fl_set_object_gravity( obj, FL_SouthEast, FL_SouthEast );
    fl_set_object_callback( obj, stoptest_cb, 0 );

    obj = fl_add_button( FL_NORMAL_BUTTON, 45, 254, 80, 26, "Clear Log" );
    fl_set_button_shortcut( obj, "Cc^C", 1 );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );
    fl_set_object_resize( obj, FL_RESIZE_NONE );
    fl_set_object_gravity( obj, FL_SouthEast, FL_SouthEast );
    fl_set_object_callback( obj, clearlog_cb, 0 );

    fl_end_form( );

    fdui->test->fdui = fdui;
    fl_set_border_width( old_bw );

    return fdui;
}

/***************************************
 ***************************************/

FD_helpform *
create_form_helpform( void )
{
    FL_OBJECT *obj;
    FD_helpform *fdui = ( FD_helpform * ) fl_malloc( sizeof *fdui );

    int old_bw = fl_get_border_width( );
    fl_set_border_width( -1 );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->helpform = fl_bgn_form( FL_NO_BOX, 536, 321 );

    obj = fl_add_box( FL_UP_BOX, 0, 0, 536, 321, "" );
    fl_set_object_color( obj, FL_SLATEBLUE, FL_COL1 );

    fdui->browser = obj = fl_add_browser( FL_NORMAL_BROWSER, 14, 16, 505, 260, "" );

    fdui->vbutt = obj = fl_add_button( FL_RADIO_BUTTON, 14, 286, 61, 26, "Version" );
    fl_set_button_shortcut( obj, "Vv^V", 1 );
    fl_set_object_callback( obj, showhelp_cb, HELP_VERSION );

    obj = fl_add_button( FL_RADIO_BUTTON, 75, 286, 61, 26, "General" );
    fl_set_button_shortcut( obj, "Gg^G", 1 );
    fl_set_object_callback( obj, showhelp_cb, HELP_GENERAL );

    obj = fl_add_button( FL_RADIO_BUTTON, 136, 286, 61, 26, "Mouse" );
    fl_set_button_shortcut( obj, "Mm^M", 1 );
    fl_set_object_callback( obj, showhelp_cb, HELP_MOUSE );

    obj = fl_add_button( FL_RADIO_BUTTON, 197, 286, 61, 26, "Keyboard" );
    fl_set_button_shortcut( obj, "Kk^K", 1 );
    fl_set_object_callback( obj, showhelp_cb, HELP_KEYBOARD );

    obj = fl_add_button( FL_RADIO_BUTTON, 258, 286, 61, 26, "Group" );
    fl_set_button_shortcut( obj, "pP^P", 1 );
    fl_set_object_callback( obj, showhelp_cb, HELP_GROUP );

    obj = fl_add_button( FL_RADIO_BUTTON, 319, 286, 61, 26, "Testing" );
    fl_set_button_shortcut( obj, "Tt^T", 1 );
    fl_set_object_callback( obj, showhelp_cb, HELP_TEST );

    obj = fl_add_button( FL_RADIO_BUTTON, 380, 286, 61, 26, "Saving" );
    fl_set_button_shortcut( obj, "Ss^S", 1 );
    fl_set_object_callback( obj, showhelp_cb, HELP_SAVE );

    obj = fl_add_button( FL_NORMAL_BUTTON, 471, 286, 50, 26, "Close" );
    fl_set_button_shortcut( obj, "Cc^C", 1 );
    fl_set_object_callback( obj, exithelp_cb, 0 );

    fl_end_form( );

    fdui->helpform->fdui = fdui;
    fl_set_border_width( old_bw );

    return fdui;
}

/***************************************
 ***************************************/

FD_resize *
create_form_resize( void )
{
    FL_OBJECT *obj;
    FD_resize *fdui = ( FD_resize * ) fl_malloc( sizeof *fdui );

    int old_bw = fl_get_border_width( );
    fl_set_border_width( -1 );

    fdui->vdata = fdui->cdata = NULL;
    fdui->ldata = 0;

    fdui->resize = fl_bgn_form( FL_NO_BOX, 250, 180 );

    obj = fl_add_box( FL_UP_BOX, 0, 0, 250, 180, "" );

    obj = fl_add_frame( FL_ENGRAVED_FRAME, 20, 40, 210, 85, "" );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );

    obj = fl_add_text( FL_NORMAL_TEXT, 35, 10, 170, 20, "Size of current form:" );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_lstyle( obj, FL_BOLD_STYLE );

    fdui->width = obj = fl_add_spinner( FL_INT_SPINNER, 105, 55, 90, 24, "Width: " );
    fl_set_object_return( obj, FL_RETURN_END_CHANGED );

    fdui->height = obj = fl_add_spinner( FL_INT_SPINNER, 105, 90, 90, 24, "Height: " );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );
    fl_set_object_return( obj, FL_RETURN_END_CHANGED );
    fl_set_object_lsize( fl_get_spinner_input( obj ), FL_NORMAL_SIZE );

    fdui->quit = obj = fl_add_button( FL_NORMAL_BUTTON, 20, 140, 80, 25, "Dismiss" );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );

    fdui->set_size = obj = fl_add_button( FL_NORMAL_BUTTON, 120, 140, 110, 25, "Set new size" );
    fl_set_object_lsize( obj, FL_NORMAL_SIZE );

    fl_end_form( );

    fdui->resize->fdui = fdui;
    fl_set_border_width( old_bw );

    return fdui;
}
