CXX=clang++

ifeq ($(CXX), clang++)
	CFLAGS = -Wall -Wextra -Wformat -O2 -std=c++11 -stdlib=libc++
else
	CFLAGS = -Wall -Wextra -O2 -std=c++11
endif

WARN_FLAG= -Wall -Wextra -Wno-long-long -Wno-variadic-macros -Wno-ignored-qualifiers
INCLUDE = -I./
OBJDIR  = ./obj
SOURCES = $(wildcard *.cpp)
OBJECTS = $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))

$(OBJDIR)/%.o: %.cpp
	@[ -d $(OBJDIR) ] || mkdir -p $(OBJDIR)
	$(CXX) $(CFLAGS) $(WARN_FLAG) $(INCLUDE) -o $@ -c $<

main: $(OBJECTS)
	$(CXX) $(CFLAGS) $(WARN_FLAG) $(INCLUDE) -o $@.out $(OBJECTS) main/main.cpp

.PHONY: clean
clean:
	-rm -rf obj/*.o *.o


