# Define the compiler and target executable
CXX = g++
TARGET = euler1
SOURCE = euler1.cpp

# Default rule to compile the program
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SOURCE)
	$(CXX) -o $(TARGET) $(SOURCE)

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)

# Rule to clean up generated files
clean:
	rm -f $(TARGET)
