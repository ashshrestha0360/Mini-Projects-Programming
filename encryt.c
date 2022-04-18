#include <stdio.h>
void encrypt(char[]);
void main()
{
    char txt[100];
    printf("Enter the text\n");
    gets(txt);
    encrypt(txt);
    printf("Text Encrypted : %s", txt);
}
void encrypt(char txt[])
{
    int i;
    while (txt[i] != '\0')
    {
        if (txt[i] >= 'a' && txt[i] <= 'z')
            txt[i] = (txt[i] - 97 + 4) % 26 + 97;
        else
            txt[i] = (txt[i] - 65 + 4) % 26 + 65;
        i++;
        //      if(a[i]>='a' && a[i]<='v')
        //        a[i] = a[i] + 4;
        //    else if(a[i]>='w' && a[i]<='z')
        //        a[i] = a[i] + 4 - 26;
    }
}