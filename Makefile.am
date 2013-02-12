INCLUDE_CFLAGS = $(HELLO_DEBUG_CFLAGS)

SUBDIRS = icons

bin_PROGRAMS = hello
hello_SOURCES = main.cc helloworld.cc helloworld.h

hello_CPPFLAGS = $(DEPS_CFLAGS)
hello_CPPFLAGS += $(INCLUDE_CFLAGS)
hello_LDADD = $(DEPS_LIBS)

# The desktop files
desktopdir = $(datadir)/applications
desktop_DATA = hello.desktop

EXTRA_DIST = \
	$(desktop_DATA)
	
