#include <stdio.h>

int calculate_odd(int qty) {
    int result = 0;
    for(int number = 1; number <= qty; number++) {
        if(number % 2 != 0) {
            //printf("%d\n", number);
        }
    }
   return qty; // 
}

int main() {
    // get qty
    // if qty < 10 : msg -- calculate_odd(qty)
    int x = calculate_odd(10);
    int y = calculate_odd(100);

     printf("%d\n", x);
     printf("%d\n", y);
    return 0;
}