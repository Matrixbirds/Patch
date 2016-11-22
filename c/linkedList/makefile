CFLAGS+= -g -Wall
LIBS=-lpthread

test: linked_list.o test.o
	cc $(CFLAGS) -o $@.bin $^ $(LIBS)
%.o: %.c
	cc $(CFLAGS) -c -o $@ $^

clean:
	rm *.o test
