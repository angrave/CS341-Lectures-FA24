#include <stdio.h>

int contains_at(char*);


int main(int argc, char** argv) {
  int result = contains_at(NULL);
  if(result) printf("Contains an @");
  else printf("No @ found");
  return 0;
}

int contains_at(char* ptr) {
  while(*ptr) { // simpler than *ptr != '\0'
    if( *ptr == '@') return 1;
    ptr += 1;
  }
  return 0;
}
