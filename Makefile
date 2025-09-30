TARGET=bin/HardenLinux
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

run: clean default
	./$(TARGET)

default: $(TARGET)

clean:
	rm -f obj/*.o 
	rm -f bin/* 
	rm -f *.db

$(TARGET): $(OBJ)
	gcc -o $@ %?

obj/%.o: src/%.c 
	gcc -o $< -o $@ -Iinclude
