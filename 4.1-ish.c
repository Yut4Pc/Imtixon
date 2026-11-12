#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Son kiriting: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("Yigindisi - %d", sum);

    return 0;
}