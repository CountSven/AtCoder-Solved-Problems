#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n); /// n = 123

    int c = n % 10; /// 3
    n = n / 10; /// 12

    int b = n % 10; /// 2
    n = n / 10; /// 1

    int a = n % 10; /// 1

    int abc = 0;

    abc = abc + a; /// 1
    abc = abc * 10; /// 10

    abc = abc + b; /// 12
    abc = abc * 10; /// 120

    abc = abc + c; /// 123

     int bca = 0;

    bca = bca + b; /// 2
    bca = bca * 10; /// 20

    bca = bca + c; /// 23
    bca = bca * 10; /// 230

    bca = bca + a; /// 231

     int cab = 0;

    cab = cab + c; /// 3
    cab = cab * 10; /// 30

    cab = cab + a; /// 31
    cab = cab * 10; /// 310

    cab = cab + b; ///312

    printf("%d\n",abc + bca + cab);

    return 0;
}
