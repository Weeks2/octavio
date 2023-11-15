#include <stdio.h>

int validations(int qty) {
    if(qty == 0) {
        printf("The number entered cannot be 0");
        return 0;
    }

    if(qty < 0) {
        printf("The number entered cannot be negative");
        return 0;
    } 

    if(qty > 100000000) {
        printf("The number entered cannot be larger than 100000000");
        return 0;
    } 

    if(qty == 1) {
        printf("The number entered cannot be 1");
        return 0;
    } 

}

int is_odd(int number) {
      return number % 2 != 0;
}

int is_even(int number) {
      return number % 2 == 0;
}

int calculate_odd_numbers(int qty) {
    int count = 0;
    for(int number = 1; number <= qty; number++) {
        if(is_odd (number)) {
            count ++;
        }
    }
   return count; 
}


int main() {
    int qty = 0;
    printf("Type qty: ");
    scanf("%d", &qty);
    if(is_odd(qty)) {
        printf("Numbers below 10 are not accepted.\n");
    }else{
        int oddCount = calculate_odd_numbers(qty);
        printf("There are %d odd numbers from 0 to %d\n", oddCount, qty);
    }  
    return 0;
}