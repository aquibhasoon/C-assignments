#include <stdio.h>

int main()
{
    char str[200];
    int i;
    printf("Enter a sentence: ");
    for (i = 0; i < 199; i++)
    {
        scanf("%c", &str[i]);

        if (str[i] == '\n')
        {
            break;
        }
    }
    str[i] = '\0';
    int len = i;
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    printf("The given sentence in lowercase is: %s\n", str);
    return 0;
}