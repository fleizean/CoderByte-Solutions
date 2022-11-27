#include <stdio.h> 
#include <string.h>

void FirstReverse(char * str) {
  int i = strlen(str) - 1;
  while(i >= 0)
  {
    printf("%c",str[i]);
    i--;
  }
}

int main(void) { 
   
  // keep this function call here
  FirstReverse(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}