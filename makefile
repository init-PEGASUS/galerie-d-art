CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

SRCS = main.cpp Oeuvre.cpp Peinture.cpp Sculpture.cpp Hall.cpp Exposition.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = exposition

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

re: clean all
