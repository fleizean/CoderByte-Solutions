#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str) // a rearranged strlen for in this ascii range > 33-47 | 123-126 
{
  int i = 0, count = 0;
  while(str[i])
  {
    if((str[i] >= 33 && str[i] <= 47) || (str[i] >= 123 && str[i] <= 126))
      i++;
    else
      count++;
    i++;
  }
  return(count);
}

char    **ft_split(char *str)
{
    int i;
    int k;
    int j;
    char **split;

    i = 0;
    k = 0;
    if(!(split = (char **)malloc(sizeof(char) * 256)))
        return(NULL);
    while(str[i] <= 32)
        i++;
    while(str[i])
    {
        j = 0;
        if(!(split[k] = (char *)malloc(sizeof(char) * 4096)))
            return(NULL);
        while(str[i] > 32 && str[i])
            split[k][j++] = str[i++];
        while(str[i] <= 32 && str[i])
            i++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return(split);
}

void LongestWord(char *sen) {
  int i = 0, target, tmp = 0;
  char **split = ft_split(sen);
  int max = ft_strlen(split[0]);
  max = 0;
  target = 0;
  while(split[i])
  {
    tmp = ft_strlen(split[i]);
    if(tmp > max)
    {
      max = tmp;
      target = i;
    }
    i++;
  }
  printf("%s",split[target]);
}

int main(void) { 
   
  // keep this function call here
  LongestWord(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}