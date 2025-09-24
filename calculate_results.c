//
// Created by zinob on 19.09.2025.
//

#include "calculate_results.h"

#include <stdbool.h>
#include <stdio.h>

void choose_operation() {
    printf("Choose operation:\n");
    printf("1. Sum\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            user_input_sum();
            break;
        case 2:
            // user_input_subtract();
            break;
        case 3:
            // user_input_multiply();
            break;
        case 4:
            // user_input_divide();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}


void user_input_sum() {
    int a, b, c, d;
    bool stop = false;
    printf("Type any letter to stop");
    int counter = 0;
    while (stop == false) {
        if (stop == true || counter <= 4) {
            int result = a + b + c + d;
            printf("Result: %d", result);
        }
        counter = counter +1;
        printf("\nNumber %d: ", counter);
        scanf("%d", &b);

        if (counter == 1) {
            scanf("%d", &a);
        } else if (counter == 2) {
            scanf("%d", &b);
        } else if (counter == 3) {
            scanf("%d", &c);
        } else if (counter == 4) {
            scanf("%d", &d);
        }
    }
}

int calculate_sum(int a, int b) {
    int sum = a + b;
    printf("%d\n", sum);
    return sum;
}

