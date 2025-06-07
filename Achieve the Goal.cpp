#include<stdio.h>

int main()
{
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);

    int sum = 0;

    for (int i = 1; i < n; i++) {
        int number;
        scanf("%d", &number);

        sum += number;
    }

    int x;

    x = (n * m) - sum;

    if (x < 0) x = 0;

    if (x <= k) printf("%d\n",x);
    else printf("-1\n");

    return 0;
}
