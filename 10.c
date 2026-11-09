#include <stdio.h>
int main()
{
    char str[10]={0123};
    int num=0;
    printf("enter a string of digits: \n");
    scanf("%s",str);
    for (int i=0;str[i]!='\0';i++)
    {
        num=(num*10)+(str[i]-'0');
    }
    printf("The actual number is :%d\n",num);
    return 0;
}
