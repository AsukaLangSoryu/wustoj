#include <stdio.h>

int main() {
    double length, width, area;
    scanf("%lf", &length);
    scanf("%lf", &width);
    area = length * width;
    printf("the area of the room:%f\n", area);

    return 0;
}
