#include <stdio.h>

int main()
{                     
  int c, tabs, blanks, newlines;
  tabs = blanks = newlines = 0;

  while((c = getchar()) != EOF) {
    if(c == '\t') ++tabs;
    else if(c == ' ') ++blanks;
    else if(c == '\n') ++newlines;
  }

  printf("%d %d %d", tabs, blanks, newlines);
  return 0;
}
