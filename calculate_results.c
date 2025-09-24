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
            user_input_div();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}




// Addition

void user_input_sum() {
    int numbers[100];
    int count = 0;
    int input;
    printf("Geben Sie Zahlen ein (beliebigen Buchstaben zum Beenden):\n");
    while (count < 100) {
        printf("Zahl %d: ", count + 1);
        if (scanf("%d", &input) == 1) {
            numbers[count++] = input;
        } else {
            break;
        }
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    printf("Ergebnis: %d\n", sum);
}

int calculate_sum(int a, int b) {
    int sum = a + b;
    printf("%d\n", sum);
    return sum;
}


// Subtraction ..
//Division
void user_input_div()
{
    int dividend;
    int divisor = 0;
    int result;
    printf("Geben Sie den Dividenden ein.");
    scanf("%d", &dividend);
    printf ("Geben sie den Divisor ein.\n");
    scanf("%d", &divisor);
    result = dividend / divisor;
    printf("Das Resultat der Division ist %d / %d = %d\n",dividend, divisor, result);
}