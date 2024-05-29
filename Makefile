
CC = gcc

# Target to compile the program
all: main

# Object files
OBJECTS = queue.o main.o

# Rule to compile a C source file into an object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into the executable
main: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to clean up object files
clean:
	rm -f $(OBJECTS) main

.PHONY: all clean
