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
    int qty = 0;
    printf("Type qty: ");
    scanf("%d", &qty);
    if(qty < 10) {
        printf("Numbers bellow 10 are not accepted: ");
    }else{
    // if qty < 10 : msg -- calculate_odd(qty)
    int x = calculate_odd(qty);
    printf("%d\n", x);

    }  
    return 0;
}