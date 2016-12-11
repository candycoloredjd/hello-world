#include <stdio.h>

int main() {

    int x, y;

    printf("Introduce el primer número: ");
    scanf("%d", &x);
    printf("Introduce el segundo dúmero: ");
    scanf("%d", &y);
    printf("El cociente de la división es %d y el resto es %d\n", x/y, x%y);
    return 0;
}

