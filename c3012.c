#include <stdio.h>
#include<math.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
  int k;
  k=a/b;
    double r = a - k * b;
    printf("%.4lf\n", r);
    return 0;
}
