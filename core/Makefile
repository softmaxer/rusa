CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -O2 -std=c99
LDFLAGS = 
SRCS = rusa.c
OBJ = $(SRCS:.c=.o)
BIN = rusa

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(BIN)
