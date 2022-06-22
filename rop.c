#include <stdio.h>
#include <stdlib.h>

void say_hello() { 
  system("echo hello"); 
}

int main() {
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  char buf[0x20];

  printf("Hint! buf_addr:%p\n", buf);

  printf("input your name: ");
  gets(buf);

  puts("thanks!");
  return 0;
}
