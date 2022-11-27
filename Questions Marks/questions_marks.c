#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

int ft_intlen(char *str)
{
  int i = 0;
  int count = 0;
  while(str[i])
  {
    if(str[i] >= '0' && str[i] <= '9')
      count++;
    i++;
  }
  return(count);
}

int isTotal_EqualToTen(int *number, int len){
  int i = 0, result = 0;
  while(i < len)
  {
    result += number[i];
    i++;
  }
  if(result == 10)
    return 1;
  return -1;
}

void QuestionsMarks(char * str) {
  int i = 0, j = 0, questionmark = 0, intlen = 0, tmp, checkpoint = 0;
  int *numbers = malloc(sizeof(int) * ft_intlen(str));
  while(str[i])
  {
      if(str[i] >= '0' && str[i] <= '9')
      {
        tmp = str[i] - '0';
        numbers[j] = tmp;
        intlen++;
        j++;
      }
      else if(str[i] == '?')
        questionmark++;
      if(isTotal_EqualToTen(numbers, intlen) == 1 && questionmark >= 3 && intlen != 0)
      {
        printf("true");
        checkpoint = -1;
        break;
      }
    i++;
  }
  if(checkpoint == 0)
    printf("false");
}



int main(void) { 
   
  // keep this function call here
  QuestionsMarks(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}