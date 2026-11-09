#include <stdio.h>
int main() 
{
    char str[50],rev[50],i=0,temp=0;
    printf("Enter a string: ");
    while (1)
    {
        scanf("%c", &str[i]);
        if (str[i] == '\n') 
        {
            str[i] = '\0'; 
            break;
        }
        i++;
    }
    for (int j=0; j<i; j++) 
    {
        rev[j] = str[i-1-j];
    }
    rev[i] = '\0';
    for (int j=0;j<i;j++)
    {
        if (str[j]!=rev[j])
        {
            temp=1;
            break;
        }
    } 
    if (temp==1)
    {
        printf("Not Palindrome");
    }
    else if(temp==0)
    {
        printf("Palindrome");
    }
    return 0;
}