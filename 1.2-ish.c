#include <stdio.h>

int main() {
    int a, b, c;

    printf("Son kiriting: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Eng kotta son: %d", a);
    }
    else if (b >= a && b >= c) {
        printf("Eng kotta son: %d", b);
    }
    else {
        printf("Eng kotta son: %d", c);
    }

    return 0;
}