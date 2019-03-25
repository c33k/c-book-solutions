CFLAGS=-Wall
CC=gcc
OUTDIR=./compiled

all: 1-wc 1-12-word-per-line 1-8-count-tab-blank-nl 1-9-replace-blanks \
1-ex-linecounting 1-longestline 1-19-reverse

%: %.c
	$(CC) -o $(OUTDIR)/$@ $^

clean:
	rm -f *o
