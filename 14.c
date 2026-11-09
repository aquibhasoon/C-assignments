#include <stdio.h>
int main() 
{
    char str[200],alphabet[27]={0};
    int i,temp=0;
    printf("Enter a sentance: ");
    for (i=0; i<200; i++)
    {
        scanf("%c", &str[i]);
        if (str[i] == '\n') 
        {
            str[i] = '\0'; 
            break;
        }
    }
    int len=i;
    for (i=0; i<=len; i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            alphabet[str[i]-65]++;
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            alphabet[str[i]-97]++;
        }
    }
    i=0;
    while (i<26)
    {
        if (alphabet[i]==0)
        {
            temp=0;
            break;
        }
        else
        {
            temp=1;
        }
        i++;  
    }
    if (temp==0)
    {
        printf("The given sentance is not a pangram");
    }
    else if (temp==1)
    {
        printf("The given sentance is a pangram");
    }
    return 0;

}



