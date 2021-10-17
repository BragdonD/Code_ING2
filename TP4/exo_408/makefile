DEBUG=yes
CXX=g++
ifeq ($(DEBUG),yes)
	CXXFLAGS = -Iinclude -IC:\MINGW\mingw64\SFML_lib\SFML-2.5.1\include -W -Wall -ansi -pedantic -g -std=c++11
	LDFLAGS = -LC:\MINGW\mingw64\SFML_lib\SFML-2.5.1\lib -lstdc++ -lm -lsfml-graphics -lsfml-window -lsfml-system
else
	CXXFLAGS = -W -Wall -ansi -pedantic -std=c++11
	LDFLAGS = -L/usr/lib -lstdc++ -lm -lsfml-graphics -lsfml-window -lsfml-system 
endif
OBJDIR:=obj
INCDIR:=include
SRCDIR:=src
EXECDIR:=bin
DIRPATH:=$(CURDIR)
DIRNAME:=$(notdir $(DIRPATH))
VPATH:=src 
EXEC:=$(DIRNAME)
SRC:=$(wildcard src/*.cpp)
OBJECTS= main.o apple.o snake.o game.o
OBJ= $(addprefix $(OBJDIR)/,$(OBJECTS))

all : $(EXECDIR)/$(EXEC)
ifeq ($(DEBUG),yes)
	@echo "Generation en mode debug"
	@echo "the exe has been created in the bin sub directory"
	@echo "to run it, run the .\bin\$(DIRNAME) command"
else
	@echo "Generation en mode release"
endif

$(EXECDIR)/$(EXEC): $(OBJ) | $(EXECDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

$(EXECDIR):
	mkdir $(EXECDIR)

$(OBJDIR)/main.o: $(INCDIR)/game.h

$(OBJDIR)/game.o: $(INCDIR)/game.h

$(OBJDIR)/snake.o: $(INCDIR)/snake.h $(INCDIR)/coordinates.h

$(OBJDIR)/apple.o: $(INCDIR)/apple.h $(INCDIR)/coordinates.h

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(LDFLAGS)

$(OBJDIR):
	mkdir $(OBJDIR)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)


