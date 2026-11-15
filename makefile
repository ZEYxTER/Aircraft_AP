# Compiler 
CXX = g++
# Compiler Flags
CXXFLAGS = -std=c++23 -Wall -Iinclude
# Target executable (Name of your final executable)
TARGET = aircraft_AP
# Source files
SRCS = src/main.cpp
# Object files (Automatically generate object file names from the sources)
OBJS = $(SRCS:.cpp=.o)
# Default rule to build and run the executable
all: $(TARGET) 
# Rule to link object files into the target executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
# Rule to compile .cpp into .o files 
src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
# Rule to run the executable (run the program)
run: all
	./$(TARGET)
# Clean rule to remove generated files 
clean: 
	rm -f $(TARGET) $(OBJS)