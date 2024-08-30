#include <stdio.h>
int main(int argc, char**argv) {
  
  char **  item = argv;
  while(*item) {
    printf("%s (%p)", *item, *item);
    item ++;
  }
  return 0;
}