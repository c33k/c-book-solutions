#include <stdio.h>
#define IN_BLANK 0
#define OUT_BLANK 1

int main()
{
  int c, state = IN_BLANK;

  while((c = getchar()) != EOF) {
    if(c == '\n' || c == ' ' || c == '\t') {
      if(state == OUT_BLANK) {
        state = IN_BLANK;
        putchar('\n');
      }
    } else {
      state = OUT_BLANK;
      putchar(c);
    }
  }

  return 0;
}
