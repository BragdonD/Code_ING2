DEBUG=yes
CXX=g++
ifeq ($(DEBUG),yes)
	CXXFLAGS=-Iinclude -IC:\SFML-2.5.1\include -W -Wall -ansi -pedantic -g -std=c++11 
	LDFLAGS = -LC:\SFML-2.5.1\lib -lstdc++ -lm -lsfml-graphics -lsfml-window -lsfml-system 
else
	CXXFLAGS=-Iinclude -IC:\SFML-2.5.1\include -W -Wall -ansi -pedantic -std=c++11
	LDFLAGS = -LC:\SFML-2.5.1\lib -lstdc++ -lm -lsfml-graphics -lsfml-window -lsfml-system
endif
OBJDIR:=obj
EXECDIR:=bin
INCDIR:=include
DIRPATH:=$(CURDIR)
DIRNAME:=$(notdir $(DIRPATH))
SRCDIR:=src 
EXEC:=$(DIRNAME)
SRC:=$(wildcard src/*.cpp)
OBJECTS:=main.o chessboard.o
OBJ:=$(addprefix $(OBJDIR)/,$(OBJECTS))

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

$(OBJDIR)/main.o: $(INCDIR)/chessboard.h

$(OBJDIR)/chessboard.o: $(INCDIR)/chessboard.h

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(LDFLAGS)

$(OBJDIR):
	mkdir $(OBJDIR)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)


