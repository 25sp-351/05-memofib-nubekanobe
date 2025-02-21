# Makefile

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -g

# Executable name
TARGET = fib 

# Object files
OBJS = fibonacci.o fib_cache.o

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Compile source files to object files
fibonacci.o: fibonacci.c fib_cache.h
	$(CC) $(CFLAGS) -c fibonacci.c -o fibonacci.o

fib_cache.o: fib_cache.c fib_cache.h
	$(CC) $(CFLAGS) -c fib_cache.c -o fib_cache.o

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

