#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number;
    
    printf("���� �ϳ��� �Է��Ͻÿ�: ");
    scanf("%d", &number); 
    
    if(number>0)
    {
        printf("����Դϴ�.\n");
    }
    else if(number<0)
    {
         printf("�����Դϴ�.\n");
    }
    else
    {
         printf("0 �Դϴ�.\n");
    } 
  
  system("PAUSE");	
  return 0;
}
