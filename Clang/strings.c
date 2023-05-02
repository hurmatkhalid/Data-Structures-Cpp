#include <stdio.h>
#include <string.h>
#include <ctype.h>

// reverse a string:
void rev(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
}

int main()
{
    // char str[100] = "Hurmat";
    // // printf("%s", str);

    // // string concatenate
    // char str2[] = " is my world";
    // strcat(str, str2);
    // printf("%s", str);

    // length of string
    // char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // printf("%d", strlen(alpha));

    // copy string
    // char str1[20] = "Hurmat";
    // char str2[20];
    // strcpy(str2, str1);
    // printf("%s", str2);

    // comparing two strings
    // char str1[] = "Hello";
    // char str2[] = "Hello";
    // char str3[] = "Hoori";
    // printf("%d\n", strcmp(str1, str2));
    // printf("%d\n", strcmp(str1, str3));

    // // getchar()
    // int character;
    // character = getchar();
    // printf("%c", character);

    // reverse a string with strrev()
    // char a[] = "Hurmat";
    // rev(a, strlen(a));
    // printf("%s", a);

    char str[] = "Helloman";
    char ch;
    int j = 0;
    while (str[j])
    {
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
    return 0;
}
