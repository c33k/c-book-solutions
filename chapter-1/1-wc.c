#include <stdio.h>
#define OUT_WORD 0
#define IN_WORD 1
int main() 
{
  int c, lines, words, chars;
  int state = OUT_WORD;
  lines = words = chars = 0;

  while((c = getchar()) != EOF) {
    ++chars;

    if(c != '\t' && c != ' ' && c != '\n') {
      if(state == OUT_WORD) ++words;
      state = IN_WORD;
    } else {
      state = OUT_WORD;
      if(c == '\n') ++lines;
    }
  }

  printf("%d %d %d", lines, words, chars);
  return 0;
}
