#include<stdio.h>

const int mx = 1e5 + 123;
char s[mx];

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    scanf("%s", &s);

    int len = 0;

    while (s[len] != 0) len++;

    for (int i = l-1, j = r-1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("%s\n", s);

    return 0;
}

