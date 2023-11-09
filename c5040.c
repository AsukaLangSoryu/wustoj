#include <stdio.h>
#include<math.h>
int sushu(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    int p, q;
    for (p = 2; p <= n / 2; p++)
    {
        q = n - p;

        if (sushu(p) == 1 && sushu(q) == 1)
        {
            printf("%d = %d + %d", n, p, q);
            break;
        }
    }
    return 0;
}
int sushu(int n)
{
    int i;
    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
