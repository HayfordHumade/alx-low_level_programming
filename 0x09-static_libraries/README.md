0x09. C - Static libraries

Format of static library: archive

Creating a static library: use "ar"
Convert all your *.c files into object (*.o) files.

Eg: ar rc libutils.a apple.o orange.o kiwi.o

ABOUT STATIC LIBRARIES/ARCHIVES
-------------------------------
They are only linked during the linking phase in the c
compilation process.


SCRIPT FILE
-----------
create_static_lib.sh:	Compiles all *.c files into *.o files
			Creates a static library called liball.a
