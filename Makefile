# Makefile

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -g

# Executable name
TARGET = fib 

# Object files
OBJS = fibonacci.o cache.o

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Compile source files to object files
fibonacci.o: fibonacci.c cache.h
	$(CC) $(CFLAGS) -c fibonacci.c -o fibonacci.o

cache.o: cache.c cache.h
	$(CC) $(CFLAGS) -c cache.c -o cache.o

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

