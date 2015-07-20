CC=clang
CXX=clang++

## default
#COMPILE.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c

CXXFLAGS += -g -Wall -Werror
CXXFLAGS += -std=c++14
CXXFLAGS += $(shell pkg-config --cflags gtkmm-3.0)
LIBS += $(shell pkg-config --libs gtkmm-3.0)

LINK_TARGET = example.exe

VPATH += src

OBJS = \
main.o \
examplewindow.o \
keywordhighlighter.o

REBUILDABLES = $(OBJS) $(LINK_TARGET)

clean :
	@rm -f $(REBUILDABLES)
	@echo Clean done

all : $(LINK_TARGET)
	@echo All done

$(LINK_TARGET) : $(OBJS)
	$(CXX) -g -o $@ $(LIBS) $^
	@echo Linked: $@
