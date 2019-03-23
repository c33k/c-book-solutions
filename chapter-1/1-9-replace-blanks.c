#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() 
{
  int c;
  short int inBlank = FALSE;

  while((c = getchar()) != EOF) {
    if(c == ' ') {
      if(!inBlank) {
        putchar(c);
        inBlank = TRUE;
      }
    } else {
      putchar(c);
      inBlank = FALSE;
    }
  }

  return 0;
}
