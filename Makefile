# Makefile, part of XGrabControl.
# (c) 2011, en passant development.
#
# XGrabControl is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# XGrabControl is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with XGrabControl.  If not, see <http://www.gnu.org/licenses/>.


SRCFILES=grab-replacement.c
SOFILE=libXGrabControl.so

all: $(SOFILE)

$(SOFILE): $(SRCFILES) Makefile
	gcc -Wall -Wextra -shared -Os -o $(SOFILE) $(SRCFILES)

clean:
	rm -f $(SOFILE)
