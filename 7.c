#include <stdio.h>


void freq_of_number(int *ptr,int j)
{
    int n[10]={0};
    for (int k=0; k<j;k++)
    {
        
        if (*ptr==0)
        {
            n[0]=n[0]+1;
        }
        
        else if (*ptr==1)
        {
            n[1]=n[1]+1;
        }
        else if (*ptr==2)
        {
            n[2]=n[2]+1;
        }
        else if (*ptr==3)
        {
            n[3]=n[3]+1;
        }
        else if (*ptr==4)
        {
            n[4]=n[4]+1;
        }
        else if (*ptr==5)
        {
            n[5]=n[5]+1;
        }
        else if (*ptr==6)
        {
            n[6]=n[6]+1;
        }
        else if (*ptr==7)
        {
            n[7]=n[7]+1;
        }
        else if (*ptr==8)
        {
            n[8]=n[8]+1;
        }
        else if (*ptr==9)
        {
            n[9]=n[9]+1;
        }
        *(ptr++);
    }
    for (int k=0;k<10;k++)
    {
        printf("freq of number %d is - %d \n",k,n[k]);
    }
}


void number(int x)
{
    int arr[50],i=0,r;
    printf("elements in the array:\n");
    while (x!=0)
    {
        arr[i]=x%10;
        printf("%d\n",arr[i]);
        i++;
        x=x/10;
    }
    freq_of_number(arr,i);
   
}





int main()
{
    int num;
    printf("Enetr a number");
    scanf("%d",&num);
    number(num);
    return 0;
}