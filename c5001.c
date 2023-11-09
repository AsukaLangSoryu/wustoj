#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int num, max;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);

        
        if (i == 0 || num > max) {
            max = num;
        }
    }

    printf("%d\n", max);

    return 0;
}
