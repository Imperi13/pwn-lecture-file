#include <stdio.h>

void win() {
  puts("flag{d0_y0u_kn0w_BOF}");
}

int main() {
  setvbuf(stdin,NULL,_IONBF,0);
  setvbuf(stdout,NULL,_IONBF,0);
  setvbuf(stderr,NULL,_IONBF,0);

  char buf[0x20];

  printf("input your name: ");
  gets(buf);

  puts("thanks!");
  return 0;
}
