#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[50], word[50];
    int i = 0, j = 0, max = 0;

    printf("Enter sentence: ");
    gets(str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';

            if(strlen(word) > max)
            {
                max = strlen(word);
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }
        i++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}