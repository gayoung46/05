#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number;
    
    printf("���� �ϳ��� �Է��Ͻÿ�: ");
    scanf("%d", &number); 
    
    if(number<0)
    {
        printf("���밪�� %i �Դϴ�.\n", number*(-1));
    }

    else
    {
         printf("���밪�� %i �Դϴ�.\n", number);
    } 
  
  system("PAUSE");	
  return 0;
}
