#include <stdio.h>
#define MAX_LINE 1000

void reverse(char *string);
void swap(char *a, char *b);
short int getLine(char *s, const int lim);

int main() 
{
  char line[MAX_LINE];
  int length = 0;
  
  while((length = getLine(line, MAX_LINE))) {
    reverse(line);
    printf("%s\n", line);
  }

  return 0;
}

//O(n)
void reverse(char *string) 
{
  int n;
  for(n=0; string[n] != '\0'; ++n);

  for(int i=0; i < n/2; ++i) {
    swap(&string[i], &string[n - i - 1]);
  }
}

short int getLine(char *s, const int lim)
{
  int c;
  int length = 0;

  while((c = getchar()) != '\n' && c != EOF && length < lim - 1) {
    //printf("got char: %c - length: %d\n", c, length);
    s[length++] = c;

    if(length == lim - 2)
      s[length++] = '\n';
  }
  
  s[length] = '\0';
  return length;
}

void swap(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}
