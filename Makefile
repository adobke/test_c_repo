all:
	$(CC) -o main.out main.c -DMAKE_PASS=$(MAKE_PASS)

test:
	./main.out
