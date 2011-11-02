# Makefile, part of XGrabControl.
# (c) 2011, en passant development.

SRCFILES=grab-replacement.c
SOFILE=libXGrabControl.so

all: $(SOFILE)

$(SOFILE): $(SRCFILES) Makefile
	gcc -Wall -Wextra -shared -Os -o $(SOFILE) $(SRCFILES)

clean:
	rm -f $(SOFILE)
