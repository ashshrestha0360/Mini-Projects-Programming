#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
char uname[20];
int count = 0;
int die = 0;
void username();
void play();
void even();
void odd();
void palindrome();
void armstrong();
void vowel();
void spchr();
void natnum();
void main()
{
    int op;
    do
    {
        system("cls");
        printf("----------------------------\n");
        printf("Enter 1 to Create Username\nEnter 2 to Play\nEnter 3 to Exit\n");
        printf("----------------------------\n");
        printf("Enter the option\n");
        printf("-> ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            username();
            break;
        case 2:
            play();
            break;
        default:
            break;
        }
        printf("enter to continue..\n");
        getch();
        system("cls");

    } while (op != 3);
}

void username()
{
    system("cls");
    printf("Enter the username\n");
    printf("-> ");
    scanf("%s", uname);
}
void play()
{
    int num;
    do
    {
        printf("Choose a number from 1 to 7\n");
        printf("-> ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            even();
            break;
        case 2:
            odd();
            break;
        case 3:
            palindrome();
            break;
        case 4:
            armstrong();
        case 5:
            vowel();
            break;
        case 6:
            spchr();
            break;
        case 7:
            natnum();
            break;
        default:
            break;
        }
        printf("enter to continue..\n");
        getch();
    } while (die != 1);
    printf("********%s scored %d********\n", uname, count);
}

void even()
{
    int num;
    printf("Enter an even number\n");
    printf("-> ");
    scanf("%d", &num);
    if (num % 2 == 0)
        count++;
    else
        die = 1;
}

void odd()
{
    int num;
    printf("Enter a odd number\n");
    printf("-> ");
    scanf("%d", &num);
    if (num % 2 != 0)
        count++;
    else
        die = 1;
}

void palindrome()
{
    int num;
    printf("Enter a palindromic number\n");
    printf("-> ");
    scanf("%d", &num);
    int r, sum = 0, fix;
    fix = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }
    num = fix;
    if (num == sum)
        count++;
    else
        die = 1;
}

void armstrong()
{
    int num;
    printf("Enter a armstong number\n");
    printf("-> ");
    scanf("%d", &num);
    int r, sum = 0, fix;
    fix = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + pow(r, 3);
        num = num / 10;
    }
    num = fix;
    if (num == sum)
        count++;
    else
        die = 1;
}

void vowel()
{
    char vow;
    printf("Enter a vowel\n");
    printf("-> ");
    scanf("\t%c", &vow);
    if (vow == 'A' || vow == 'a' || vow == 'E' || vow == 'e' || vow == 'I' || vow == 'i' || vow == 'O' || vow == 'o' || vow == 'U' || vow == 'u')
        count++;
    else
        die = 1;
}

void spchr()
{
    char sy;
    printf("Enter a special character\n");
    printf("-> ");
    scanf("\t%c", &sy);
    if (sy >= 33 && sy <= 47 || sy >= 58 && sy <= 64 || sy >= 91 && sy <= 96 || sy >= 123 && sy <= 126)
        count++;
    else
        die = 1;
}

void natnum()
{
    int num;
    printf("Enter a natural number\n");
    printf("-> ");
    scanf("%d", &num);
    if (num > 0)
        count++;
    else
        die = 1;
}