################################ CONFIGURATION ################################
EXECUTABLE = run
H_FILES    = header.h
SOURCES    = main.c functions.c
LIBRARIES  =
FLAGS      = -Wall -std=c99

# RULES
## this makefile runs from inside src dir
## all .c files in ./
## all .o files in ./obj
## all .h files in ../include dir
## all local library files in ../lib

# HINTS
## eg to use the math library, set LIBRARIES = -lm
## (stackoverflow.com/questions/4606301)

############################### MAKE INSTRUCTIONS ##############################
# COMPILER
CC = gcc

# DIRECTORY VARIABLES
IDIR = ../include
ODIR = obj
LDIR = ../lib

# COMPILER FLAGS
ALL_FLAGS = -I$(IDIR) $(FLAGS)

# CREATE FULL PATHS FOR FILES
PATH_H_FILES = $(patsubst %,$(IDIR)/%,$(H_FILES))
_OBJ_FILES = $(SOURCES:.c=.o)
OBJ_FILES = $(patsubst %,$(ODIR)/%,$(_OBJ_FILES))

# COMPILATION INSTRUCTIONS
$(ODIR)/%.o: %.c $(PATH_H_FILES)
	$(CC) -c -o $@ $< $(ALL_FLAGS)

$(EXECUTABLE): $(OBJ_FILES)
	$(CC) -o $@ $^ $(ALL_FLAGS) $(LIBRARIES)

# CLEAN RULE
# .PHONY rule keeps make from doing something with a file named clean.
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

