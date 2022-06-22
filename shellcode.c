#include <stdio.h>

int main() {
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  char buf[0x200];

  printf("Hint! buf_addr:%p\n", buf);

  printf("input your name: ");
  gets(buf);

  puts("thanks!");
  return 0;
}
