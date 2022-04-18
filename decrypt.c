#include <stdio.h>
void decrypt(char[]);
void main()
{
    char txt[100];
    printf("Enter the message\n");
    gets(txt);
    decrypt(txt);
    printf("Decrypted Text: %s", txt);
}
void decrypt(char txt[])
{
    int i;
    while (txt[i] != '\0')
    {
        if (txt[i] >= 'a' && txt[i] <= 'z')
            txt[i] = (txt[i] - 97 - 4 + 26) % 26 + 97;
        else
            txt[i] = (txt[i] - 65 - 4 + 26) % 26 + 65;
        i++;
    }
}