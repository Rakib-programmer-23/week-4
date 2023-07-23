#include <stdio.h>
#include <string.h>

void _palindrome(char s[], int size)
{
    int is_palindrome = 1;
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
        if (s[i] != s[size - i - 1])
        {
            is_palindrome = 0;
        }
    }
    if (is_palindrome)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }
}

int main()
{
    char s[10];
    scanf("%s", s);
    int size = strlen(s);
    _palindrome(s, size);
    return 0;
}
