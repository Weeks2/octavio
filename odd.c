#include <stdio.h>
int calculate_odd_numbers(int qty) {
    int count = 0;
    for(int number = 1; number <= qty; number++) {
        if(number % 2 != 0) {
            count ++;
        }
    }
   return count; 
}

int main() {
    int qty = 0;
    printf("Type qty: ");
    scanf("%d", &qty);
    if(qty < 10) {
        printf("Numbers below 10 are not accepted.\n");
    }else{
        int oddCount = calculate_odd_numbers(qty);
        printf("There are %d odd numbers from 0 to %d\n", oddCount, qty);
    }  
    return 0;
}