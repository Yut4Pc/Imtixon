#include <stdio.h>

int main()
{
    int son;
    
    printf("Son kiriting: ");
    scanf("%d", &son);
    
    if (son > 0) {
        printf("Musbat son");
    } else if (son < 0) {
        printf("Musbat emas");
    }

    return 0;
}
