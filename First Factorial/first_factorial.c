#include <stdio.h> 
#include <string.h>

void FirstFactorial(int num) {
  
  int sum = 1;
  int result = 1;
  while(sum != num + 1)
  {
    result *= sum;
    sum++;
  } 
  printf("%d", result);

}

int main(void) { 
   
  // keep this function call here
  FirstFactorial(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}