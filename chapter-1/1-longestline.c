#include <stdio.h>
#define MAX_LINE 1000

void copy(char *source, char *destiny);
short int getLine(char *s, const int lim);

int main() 
{
  int longestLength, lineLength;
  char line[1000];
  char longest[1000];

  longestLength = lineLength = 0;

  while((lineLength = getLine(line, MAX_LINE)) > 0) {
    if(lineLength > longestLength) {
      longestLength = lineLength;
      copy(line, longest);
    } 
  }

  for(int i=0; i < longestLength; ++i)
    putchar(longest[i]);

  return 0;
}

void copy(char *source, char *destiny)
{
  int i=0;

  while((destiny[i] = source[i]) != '\0')
    ++i;
}

short int getLine(char *s, const int lim)
{
  int c;
  unsigned short int length = 0;

  for(; (c = getchar()) != '\n'  && c != EOF && length < lim - 1; ++length) {
    s[length++] = c;

    if(length == lim - 2)
      s[length++] = '\n';
  }
  
  s[length] = '\0';
  return length;
}
