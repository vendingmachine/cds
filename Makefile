
CC=gcc
CFLAGS=-g

OBJ = cdsll_unit.o cdsll.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

cdsll_unit: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o 
