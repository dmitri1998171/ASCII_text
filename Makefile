BIN := ASCII_Words

SRC := main.c
CC := gcc
CFLAGS := -Wall
LDFLAGS := 

.PHONY: all clean

all: $(BIN)

$(BIN):
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) -o $(BIN)

clean:
	rm -rf $(BIN) 
