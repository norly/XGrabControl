XGrabControl
============

An LD_PRELOAD override for the XGrab* family of functions.

Many applications such as full-screen games capture the X11 keyboard
and/or pointer using one of the XGrab functions. This module
overrides this while faking a successful grab operation and allows
e.g. global hotkeys for volume setting to work even when using these
applications.


License
-------

See the file LICENSE.txt for details.
