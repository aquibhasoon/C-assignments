#include <stdio.h>
int main() 
{
    int num,i=0;
    char str[10]={0};
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num>=0)
    {
        while (num!=0)
        {
            str[i]=num%10+'0';
            num/=10;
            i++;        
        }
        for (int j=i-1;j>=0;j--)
        {
            printf("%c",str[j]);
        }
    }
      if (num<0)
    {
        num=-num;
        while (num!=0)
        {
            str[i]=num%10+'0';
            num/=10;
            i++;        
        }
        printf("-");
        for (int j=i-1;j>=0;j--)
        {
            printf("%c",str[j]);
        }
    }
    return 0;
}