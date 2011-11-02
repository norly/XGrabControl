/*
  grab-replacement.c, part of XGrabControl.
  (c) 2011, en passant development.
*/

#include <sys/types.h>
#include <X11/Xlib.h>


int XGrabKeyboard(Display *display, Window grab_window,
                  Bool owner_events, int pointer_mode,
                  int keyboard_mode, Time time)
{
  (void) display;
  (void) grab_window;
  (void) owner_events;
  (void) pointer_mode;
  (void) keyboard_mode;
  (void) time;

  return GrabSuccess;
}

/*
int XGrabPointer(Display *display, Window grab_window,
                Bool owner_events, unsigned int event_mask,
                int pointer_mode, int keyboard_mode,
                Window confine_to, Cursor cursor, Time time)
{
  (void) display;
  (void) grab_window;
  (void) owner_events;
  (void) event_mask;
  (void) pointer_mode;
  (void) keyboard_mode;
  (void) confine_to;
  (void) cursor;
  (void) time;

  return GrabSuccess;
}

int XChangeActivePointerGrab(Display *display, unsigned int event_mask,
                            Cursor cursor, Time time)
{
  (void) display;
  (void) event_mask;
  (void) cursor;
  (void) time;

  return GrabSuccess;
}
*/
