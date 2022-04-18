#include <stdio.h>
void caps(char[]);
void main()
{
    char txt[20];
    printf("Enter the text\n");
    scanf("%s", txt);
    caps(txt);
    printf("%s", txt);
}
void caps(char txt[])
{
    int i;
    while (txt[i] != '\0')
    {
        if (txt[i] >= 'a' && txt[i] <= 'z')
            txt[i] = txt[i] - 32;
        else
            txt[i] = txt[i] + 32;
        i++;
    }
    // for(i = 0; txt[i] != '\0'; i++)
    // {
    //     if(txt[i] >= 'a' && txt[i] <= 'z')
    //     {
    //         txt[i] = txt[i] - 32;
    //     }
    // }
}