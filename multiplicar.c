#include <stdio.h>

main() {

    int n1, n2, suma;

    printf("Teclea el primer número: ");
    scanf("%d", &n1);
    printf("Teclea el segundo número: ");
    scanf("%d", &n2);
    suma = n1 * n2;
    printf("El resultado de la operación es %d\n\n", suma);
    return 0;
}
