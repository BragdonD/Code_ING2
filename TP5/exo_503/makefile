DEBUG=yes
CXX=g++
ifeq ($(DEBUG),yes)
	CXXFLAGS=-Iinclude -W -Wall -ansi -pedantic -g -std=c++11
	LDFLAGS=
else
	CXXFLAGS=-Iinclude -W -Wall -ansi -pedantic -std=c++11
	LDFLAGS=
endif
OBJDIR:=obj
EXECDIR:=bin
INCDIR:=include
DIRPATH:=$(CURDIR)
DIRNAME:=$(notdir $(DIRPATH))
SRCDIR:=src 
EXEC:=$(DIRNAME)
SRC:=$(wildcard src/*.cpp)
OBJECTS:=main.o character.o elf.o enemy.o wizard.o warior.o
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

$(OBJDIR)/main.o: $(INCDIR)/elf.h $(INCDIR)/enemy.h $(INCDIR)/warior.h $(INCDIR)/wizard.h

$(OBJDIR)/elf.o: $(INCDIR)/elf.h

$(OBJDIR)/enemy.o: $(INCDIR)/enemy.h

$(OBJDIR)/character.o: $(INCDIR)/character.h

$(OBJDIR)/wizard.o: $(INCDIR)/wizard.h

$(OBJDIR)/warior.o: $(INCDIR)/warior.h

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(LDFLAGS)

$(OBJDIR):
	mkdir $(OBJDIR)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)


