
# Example Makefile
#
# Compilation of source files
funcs.o : funcs.cpp funcs.h
	g++ -c funcs.cpp
lab01.o : lab01.cpp funcs.h
	g++ -c lab01.cpp
# Linking of object files
lab01 : lab01.o funcs.o
	g++ lab01.o funcs.o -o lab01
# Clean all object files and executables
clean :
	rm -f *.o lab01
