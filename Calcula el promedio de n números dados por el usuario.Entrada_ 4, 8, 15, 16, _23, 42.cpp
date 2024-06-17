#include <stdio.h>

int main() {
    int n, i;
    float numeros[100], suma = 0.0, promedio;

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    printf("Ingrese los números separados por espacios: ");
    for(i = 0; i < n; i++) {
        scanf("%f", &numeros[i]);
        suma += numeros[i];
    }

    promedio = suma / n;

    printf("El promedio de los números ingresados es: %.2f\n", promedio);

    return 0;
}