CFLAGS=-Wall
CC=gcc
OUTDIR=./compiled

all: wc 1-12 1-8 1-9 linecount longestline

wc: 1-wc.o
	$(CC) -o $(OUTDIR)/wc 1-wc.o

1-12: 1-12-word-per-line.o
	$(CC) -o $(OUTDIR)/1-12 1-12-word-per-line.o

1-8: 1-8-count-tab-blank-nl.o
	$(CC) -o $(OUTDIR)/1-8 1-8-count-tab-blank-nl.o

1-9: 1-9-replace-blanks.o
	$(CC) -o $(OUTDIR)/1-9 1-9-replace-blanks.o

linecount: 1-ex-linecounting.o
	$(CC) -o $(OUTDIR)/linecount 1-ex-linecounting.o

longestline: 1-longestline.o
	$(CC) -o $(OUTDIR)/longestline 1-longestline.o

clean:
	rm -f *o
