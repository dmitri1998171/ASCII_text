BIN := ASCII_text

SRC := main.c
CC := gcc
CFLAGS := -Wincompatible-pointer-types
LDFLAGS := 

.PHONY: all clean

all: $(BIN)

$(BIN):
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) -o $(BIN)

clean:
	rm -rf $(BIN) 
