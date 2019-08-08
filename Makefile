CC=cc
CFLAGS=-Wall

HelloWorld:    HelloWorld.c
	$(CC) $(CFLAGS) HelloWorld.c -o HelloWorld 

clean:
	rm -f *.o core HelloWorld

