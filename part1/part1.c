
#include <stdio.h>
#include <stdlib.h>

int log2_check(int n) {
    int counter = 0; 
    for (int i = 1; i <= n; i = i *2) {
        if (i == n) { 
            return counter; 
        }
        counter++;
    }
    return -1; 
}

int main() {

    int number_of_inputs = 0; 
    printf("Enter size of input:\n");
    if (scanf("%i", &number_of_inputs) == 1 && number_of_inputs > 0) {
    } 
    else if (number_of_inputs <= 0) { 
        printf("Invaild size");
        return 0;
    } else {
        return 0;
    }

    int* numbers = malloc(sizeof(int) * number_of_inputs);
    if (!numbers) { 
        return 0; 
    }
    printf("Enter numbers:\n");
    for (int i = 0; i < number_of_inputs ; i++) {
        if (scanf(" %i", &numbers[i]) == 1) {
        
        } else { 
            printf("Invaild number");
            free(numbers); 
            return 0; 
        }
    }

    double log_val = 0;
    int exponent_sum = 0;
    for (int i = 0; i < number_of_inputs ; i++) {
        log_val = log2_check(numbers[i]);
        if (log_val != -1) { 
            printf("The number %i is a power of 2: %i = 2^%i\n", numbers[i], numbers[i], (int)log_val);
            exponent_sum += (int)log_val; 
        }
    }
    printf("Total exponent sum is %i \n", exponent_sum);

    free(numbers); 

    return 1;
    }
