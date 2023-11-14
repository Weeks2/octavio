#include <stdio.h>
int main() {
    int quantity = 10;
    int number = 1;
    int i = 0;
    for(i = 0; i < quantity; i++) {
        printf("%d\n", &number);
        number += 2;
        }
    return 0;
    }