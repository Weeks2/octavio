#include <stdio.h>

void calculate_odd(int qty) {
    for(int number = 1; number <= qty; number++) {
        if(number % 2 != 0) {
            printf("%d\n", number);
        }
    }
}

int main() {
    // get qty
    // if qty < 10 : msg -- calculate_odd(qty)
    calculate_odd(1000000000000000);
    return 0;
}