# Macros ========================================

CC=g++
CFLAGS=-c -g -Wall -Wextra -Werror -ansi -pedantic -O -Wconversion
OUTDIR=gnu/
ERASE=rm
OBJECTS=$(OUTDIR)main.o $(OUTDIR)Grade.o $(OUTDIR)Logger.o $(OUTDIR)Student.o
EXE=$(OUTDIR)main.exe

# Targets ========================================

$(EXE) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXE)

$(OUTDIR)main.o : main.cpp Grade.cpp Logger.cpp Student.cpp
	$(CC) $(CFLAGS) main.cpp -o $(OUTDIR)main.o

$(OUTDIR)Grade.o : Grade.cpp Grade.h
	$(CC) $(CFLAGS) Grade.cpp -o $(OUTDIR)Grade.o

$(OUTDIR)Logger.o : Logger.cpp Logger.h
	$(CC) $(CFLAGS) Logger.cpp -o $(OUTDIR)Logger.o

$(OUTDIR)Student.o : Student.cpp Student.h
	$(CC) $(CFLAGS) Student.cpp -o $(OUTDIR)Student.o
	
clean :
	$(ERASE) $(EXE) $(OBJECTS)

all :
	-$(MAKE) clean
	-$(MAKE)
	tablen main.cpp
	tablen Huffman_LongestLength.cpp
	tablen Huffman_LongestLength.h
	#doxygen Doxyfile
	( cat Doxyfile ; echo "EXTRACT_ALL=YES" ) | doxygen -
	( cat Doxyfile ; echo "EXTRACT_ALL=NO" ) | doxygen -