#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number;
    
    printf("정수 하나를 입력하시오: ");
    scanf("%d", &number); 
    
    if(number<0)
    {
        printf("절대값은 %i 입니다.\n", number*(-1));
    }

    else
    {
         printf("절대값은 %i 입니다.\n", number);
    } 
  
  system("PAUSE");	
  return 0;
}
