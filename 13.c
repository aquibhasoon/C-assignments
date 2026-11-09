#include <stdio.h>

int main() {
    char str[50],temp;
    int i=0;
    printf("Enter a string: ");
    while(1)
     {
        scanf("%c", &str[i]);
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    int len=i-1;
    i=0;
    while (i<len)
    {
        temp=str[i];
        str[i]=str[len];
        str[len]=temp;
        i++;
        len--;
    }
        
    printf("The reversed string using swap is: %s", str);
    


    return 0;
}