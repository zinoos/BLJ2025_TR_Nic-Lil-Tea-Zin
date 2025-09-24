//
// Created by zinob on 19.09.2025.
//

#include "calculate_results.h"

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

void choose_operation() {
    printf("Choose operation:\n");
    printf("1. Sum\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exponents\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            user_input_sum();
            break;
        case 2:
            user_input_subtract();
            break;
        case 3:
            // user_input_multiply();
            break;
        case 4:
            // user_input_divide();
            break;
        case 5:
            user_input_exponents();
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

// Subtraction
void user_input_subtract() {
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

    if (count == 0) {
        printf("Keine gültigen Zahlen eingegeben.\n");
        return;
    }

    int difference = numbers[0];
    for (int i = 1; i < count; i++) {
        difference -= numbers[i];
    }

    printf("Ergebnis: %d\n", difference);
}

// Subtraction helper
int calculate_difference(int a, int b) {
    int diff = a - b;
    printf("%d\n", diff);
    return diff;
}

// Exponents
void user_input_exponents() {
    double base, exponent;
    printf("Geben Sie die Basis ein: ");
    if (scanf("%lf", &base) != 1) {
        printf("Ungültige Eingabe für die Basis.\n");
        return;
    }

    printf("Geben Sie den Exponenten ein: ");
    if (scanf("%lf", &exponent) != 1) {
        printf("Ungültige Eingabe für den Exponenten.\n");
        return;
    }

    double result = pow(base, exponent);
    printf("Ergebnis: %.6f\n", result);
}

double calculate_power(double base, double exponent) {
    double result = pow(base, exponent);
    printf("%.6f\n", result);
    return result;
}
