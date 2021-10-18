DEBUG=yes
CXX=g++
ifeq ($(DEBUG),yes)
	CXXFLAGS = -Iinclude -W -Wall -ansi -pedantic -g -std=c++11
	LDFLAGS = 
else
	CXXFLAGS = -W -Wall -ansi -pedantic -std=c++11
	LDFLAGS =
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
OBJECTS= main.o
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

$(OBJDIR)/main.o: $(INCDIR)/losange.h $(INCDIR)/rectangle.h

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(LDFLAGS)

$(OBJDIR):
	mkdir $(OBJDIR)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)


