# Makefile, part of XGrabControl.
# (c) 2011, en passant development.

SRCFILES = grab-replacement.c
SOFILE = libXGrabControl.so

DESTDIR := /usr/local


all: $(SOFILE)

$(SOFILE): $(SRCFILES) Makefile
	gcc -Wall -Wextra -shared -Os -o $(SOFILE) $(SRCFILES)

install: all
	cp $(SOFILE) $(DESTDIR)/lib/
	cp XGrabControl $(DESTDIR)/bin/
	ln -sf XGrabControl $(DESTDIR)/bin/noxg

clean:
	rm -f $(SOFILE)
