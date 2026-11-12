#include <stdio.h>

int main() {

    int kun;
    printf("Kunni kiriting: ");
    scanf("%d", &kun);

    switch (kun) {
        case 1:
            printf("Dushanba");
            break;
        case 2:
            printf("Seshanba");
            break;
        case 3:
            printf("Chorshanba");
            break;
        case 4:
            printf("Payshanba");
        case 5:
            printf("Juma");
        case 6:
            printf("Shanba");
        case 7:
            printf("Yakshanba");
        default:
            printf("Noto'g'ri Kun");
    }
    return 0;
}
