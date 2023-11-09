#include <stdio.h>
#include<math.h>
int main() {
    int years;
    scanf("%d", &years);
    double growth_rate = 100.0 * (pow(2.0, 1.0 / years) - 1.0);
    printf("%.2f%%\n", growth_rate);
    return 0;
}
