#include <stdio.h>

void intchar(int r)
{
    switch (r)
    {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        
        
    }
    
    
}

int conv(int x,int y)
{
    int n[50]={0},i=0;
    while (x>=y)
    {
        n[i]=x%y;
        i++;
        x=x/y;
        
    }
    printf("%d",x);
    
    for (int j=i-1;j>=0;j--)
    {
        if (n[j]<10)
        {
            printf("%d",n[j]);
        }
        else if(n[j]>=10)
        {
            intchar(n[j]);
        }
    }
}





int main()
{
    int num,target;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter target base (between 2 and 16): ");
    scanf("%d",&target);
    conv(num,target);
    
    return 0;
}