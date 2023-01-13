#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  char *p;
  int count = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  printf("Enter a character to find its frequency: ");
  char ch = getchar();

  p = str;
  while (*p != '\0') {
    if (*p == ch) {
      ++count;
    }
    ++p;
  }

  printf("Frequency of '%c' = %d\n", ch, count);

  return 0;
}