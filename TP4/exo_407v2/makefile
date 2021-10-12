DEBUG=yes
CXX=g++
ifeq ($(DEBUG),yes)
	CXXFLAGS=-W -Wall -ansi -pedantic -g -std=c++11
	LDFLAGS=
else
	CXXFLAGS=-W -Wall -ansi -pedantic
	LDFLAGS=
endif
OBJDIR:= obj
EXECDIR:= bin
VPATH=src 
EXEC=prog
SRC= $(wildcard src/*.cpp)
OBJECTS= main.o
OBJ= $(addprefix $(OBJDIR)/,$(OBJECTS))

all : $(EXECDIR)/$(EXEC)
ifeq ($(DEBUG),yes)
	@echo "Generation en mode debug"
else
	@echo "Generation en mode release"
endif

$(EXECDIR)/$(EXEC): $(OBJ) | $(EXECDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(EXECDIR):
	mkdir $(EXECDIR)

$(OBJDIR)/main.o: src/hashtable.h

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	@$(CXX) -o $@ -c $< $(CXXFLAGS)

$(OBJDIR):
	mkdir $(OBJDIR)



.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)


