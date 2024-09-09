#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
   char* line = NULL;
   size_t size = 0;
   ssize_t bytesread = getline(&line, &size, stdin);
   line[bytesread-1] = 0;
   printf("Running %s ...", line);
   execlp(line, line,(char*) NULL);
   puts("Failed!!");
   return 0;
}
