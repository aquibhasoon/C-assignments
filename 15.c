
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    while(1)
    {
        scanf("%c", &str[i]);

        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }

        i++;
    }
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' && j > 0 && str[j-1] == ' ')
        {
            i++;
            continue;
        }
        str[j] = str[i];
        i++;
        j++;
    }
    str[j] = '\0';
    printf("Cleaned string: %s", str);

    return 0;
}
