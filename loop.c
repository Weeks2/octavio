#include <stdio.h>
int main() {

    int count, i;
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        printf("i: %d\n", i);
    }


    return 0;
}