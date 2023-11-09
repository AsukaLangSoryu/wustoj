#include<stdio.h>
#define STAGE_1 100000
#define STAGE_2 200000
#define STAGE_3 400000
#define STAGE_4 600000
#define STAGE_5 1000000
#define PRICE_1 10000
#define PRICE_2 17500
#define PRICE_3 27500
#define PRICE_4 33500
#define PRICE_5 39500
int main(void)
{
    double money,price;
    scanf("%lf",&money);
    if(money<10)
    price=money*0.1;
    else if(money>=100000&&money<200000)
    price=(money-STAGE_1)*0.075+PRICE_1;
    else if(money>=200000&&money<400000)
    price=(money-STAGE_2)*0.05+PRICE_2;
    else if(money>=400000&&money<600000)
    price=(money-STAGE_3)*0.03+PRICE_3;
    else if(money>=600000&&money<1000000)
    price=(money-STAGE_4)*0.015+PRICE_4;
    else if(money>=1000000)
    price=(money-STAGE_5)*0.01+PRICE_5;
    printf("%.2lf",price);
    return 0;
}
#include <stdio.h>

int main() {
    double profit, bonus;
    scanf("%lf", &profit);
    if (profit <= 100000) {
        bonus = profit * 0.1;
    } else if (profit <= 200000) {
        bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
    } else if (profit <= 400000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
    } else if (profit <= 600000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
    } else if (profit <= 1000000) {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
    } else {
        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
    }


    printf("%.2lf\n", bonus);

    return 0;
}
