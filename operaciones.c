#include <stdio.h>

main() {
    int a, b;

    printf("Introduce el primer número: ");
    scanf("%d", &a);
    printf("Introduce el segundo número: ");
    scanf("%d", &b);
    printf("El resultado de a+b*a-b es igual a %d", (a+b)*(a-b));
    return 0;
}
