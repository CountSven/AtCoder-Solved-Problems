#include<stdio.h>

int main()
{
    long long T, A, K;

    scanf("%lld %lld %lld",&T,&A,&K);

    if (K <= T) {
        printf("%lld %lld\n", T-K, A);
    }
    else if ((T + A) > K)  {
        printf("0 %lld\n", T+A-K);
    }
    else if (K >= (T + A) ) {
        printf("0 0\n");
    }

    return 0;
}

