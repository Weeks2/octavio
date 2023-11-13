#include <stdio.h>
int main() {
    int count, i;
    float total = 0, num;

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &count);

    printf("Ingrese %d números:\n", count);
    for (i = 0; i < count; i++) {
        scanf("%f", &num);
        total += num;
    }

    float average = total / count;
    printf("El promedio de los números ingresados es: %.2f\n", average);

    return 0;
}
