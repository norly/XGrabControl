/*
  grab-replacement.c, part of XGrabControl.
  (c) 2011, en passant development.

  XGrabControl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  XGrabControl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with XGrabControl.  If not, see <http://www.gnu.org/licenses/>.
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
