/*
 * musl-gcc main.c -o RobinKool -no-pie -fno-stack-protector -static -O0
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STR_SIZE 0x80

void porche911(char **garage) {
  int windex;
  
  printf("Index: ");
  if (scanf("%d%*c", &windex) != 1)
    exit(1);
  if (!(garage[windex]=(char*)calloc(sizeof(char), STR_SIZE)))
    exit(1);
  
  printf("Data: ");
  if (!fgets(garage[windex], STR_SIZE, stdin))
    exit(1);
}

void fplcheater() {
  char *garage[4];
  for (int i = 0; i < 4; i++) {
    porche911(garage);
  }
}

void disable_buffering() {
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
}

int main() {
  alarm(180);
  disable_buffering();
  fplcheater();
  return 0;
}
