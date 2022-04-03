
#include <stdio.h>
#include <stdlib.h>

#define NEG -1 

// Calculate bit-wise power2 of a givven number (From https://graphics.stanford.edu/~seander/bithacks.html#IntegerLog) 
int log2_check(unsigned int n) { 
    int counter = 0; 
    if(n && !(n & (n - 1))) { 
        while (n >>= 1) {
            counter++; 
        }
        if (counter <= 30) {  // more then 30 will exceed int size!
            return counter; 
        }
    }
    return NEG; 

}

int main() {

    int number_of_inputs = 0; 
    printf("Enter size of input:\n");
    if (scanf("%i", &number_of_inputs) == 1 && number_of_inputs > 0) {
    } 
    else if (number_of_inputs <= 0) { 
        printf("Invalid size\n");
        return 0;
    } else {
        return 0;
    }

    int* numbers = malloc(sizeof(long int) * number_of_inputs);
    if (!numbers) { 
        free(numbers);
        return 0; 
    }
    printf("Enter numbers:\n");
    for (int i = 0; i < number_of_inputs ; i++) {
        if (scanf(" %i", &numbers[i]) == 1) {
        
        } else { 
            printf("Invalid number\n");
            free(numbers); 
            return 0; 
        }
    }

    double log_val = 0;
    int exponent_sum = 0;
    for (int i = 0; i < number_of_inputs ; i++) {
        log_val = log2_check(numbers[i]);
        if (log_val != NEG) { 
            printf("The number %i is a power of 2: %i = 2^%i\n", numbers[i], numbers[i], (int)log_val);
            exponent_sum += (int)log_val; 
        }
    }
    printf("Total exponent sum is %i\n", exponent_sum);

    free(numbers); 

    return 1;
    }
