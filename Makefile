bf: bf.c
	$(CC) -O3 -Wall -Wextra -std=c89 -Wpedantic -o $@ $<

clean:
	rm -f bf
