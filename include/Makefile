exec_modeldir =  /usr/local/lib/rtxi

LIBTOOL    =  /usr/local/lib/rtxi/libtool
CXX        =  g++
CXXLD      =  g++
CXXCOMPILE = $(LIBTOOL) --mode=compile $(CXX)
CXXLINK    = $(LIBTOOL) --mode=link $(CXXLD)
MOC        =  /usr/bin/moc

CXXFLAGS += -I. -I/usr/local/include/rtxi -pipe \
            $(shell pkg-config --cflags \
                Qt5Core Qt5Gui Qt5OpenGL Qt5PrintSupport Qt5Xml Qt5Widgets \
                Qt5Svg Qt5Network Qt5Concurrent libgit2) \
            -I/usr/local/lib/qwt/include -I/usr/X11R6/include \
            -I/usr/include/qwt -I/usr/local/qwt-6.1.2 \
            -I/usr/local/qwt-6.1.2/include -w -O3 \
            -I/usr/local/lib/rtxi_includes -std=c++11 -fPIC -shared
LDFLAGS  += $(shell pkg-config --libs \
                Qt5Core Qt5Gui Qt5OpenGL Qt5PrintSupport Qt5Xml Qt5Widgets \
                Qt5Svg Qt5Network Qt5Concurrent libgit2) \
            -lGL -lpthread -lqwt -lgsl -lgslcblas -lm -ldl -lnative \
            -L/usr/xenomai/lib -lxenomai -lrt -module -avoid-version
ifdef DEBUG
CXXFLAGS += -DDEBUG
endif

CXXFLAGS += $(shell pkg-config --cflags aravis-0.4 libavformat libavutil libswscale)
LDFLAGS  += $(shell pkg-config --libs aravis-0.4 libavformat libavutil libswscale) -L/librecorders.so -L/libdecoders.so


SO_NAME = libqarv

HEADERS = $(shell echo decoders/*.h) \
          $(shell echo decoders/bayer/*.h) \
          $(shell echo decoders/mono/*.h) \
          $(shell echo recorders/*.h) \
          $(shell echo recorders/rawrecorders/*.h) \

SOURCES = $(shell echo decoders/*.cpp) \
          $(shell echo decoders/bayer/*.cpp) \
          $(shell echo decoders/mono/*.cpp) \
          $(shell echo recorders/*.cpp) \
          $(shell echo recorders/rawrecorders/*.cpp | sed -n "s/\(.*\)/moc_\1/p") \
          $(shell echo decoders/bayer/*.cpp | sed -n "s/\(.*\)/moc_\1/p") \
          $(shell echo decoders/mono/moc_*.cpp | sed -n "s/\(.*\)/moc_\1/p") \
          $(shell echo recorders/rawrecorders/moc_*.cpp | sed -n "s/\(.*\)/moc_\1/p") \

OBJECTS   = $(shell echo $(SOURCES) | sed "s/\.cpp[ \t\n]*/\.lo /g")
MOOBJECTS = $(shell echo $(HEADERS) | sed "s/\.h[ \t\n]*/\.lo /g")

all: $(SO_NAME).so

%.lo: %.cpp
	$(CXXCOMPILE) $(CXXFLAGS) -c $< -o $@

$(SO_NAME).so: $(OBJECTS) $(SOURCES) $(HEADERS)
	$(CXXLINK) $(CXXFLAGS) $(LIBS) $(LDFLAGS) -o $(SO_NAME).so $(OBJECTS)

moc_%.cpp: %.h
	$(MOC) $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -f $(MOOBJECTS)
	rm -f moc_*
	rm -f $(shell echo **/*.o)
	rm -f $(SO_NAME).la
	rm -f $(SO_NAME).o
	rm -rf **/.libs

