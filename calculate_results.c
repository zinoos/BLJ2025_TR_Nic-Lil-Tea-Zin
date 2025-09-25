//
// Created by zinob on 19.09.2025.
//

#include "calculate_results.h"

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

void select_operation() {
    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("7. Factorial\n");
    printf("8. Exponentiation\n");
    printf("9. Square Root\n");
    printf("10. Rock Paper Scissors\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            input_addition();
            break;
        case 2:
            input_subtraction();
            break;
        case 3:
            input_multiplication();
            break;
        case 4:
            input_division();
            break;
        case 7:
            input_factorial();
            break;
        case 8:
            input_exponentiation();
            break;
        case 9:
            input_square_root();
            break;
        case 10:
            input_rock_paper_scissors();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

// Addition
void input_addition() {
    int numbers[100];
    int count = 0;
    int input;
    printf("Enter numbers (any letter to finish):\n");
    while (count < 100) {
        printf("Number %d: ", count + 1);
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
    printf("Result: %d\n", sum);
}
int add(int a, int b) {
    int sum = a + b;
    printf("%d\n", sum);
    return sum;
}

// Subtraction
void input_subtraction() {
    int numbers[100];
    int count = 0;
    int input;
    printf("Enter numbers (any letter to finish):\n");
    while (count < 100) {
        printf("Number %d: ", count + 1);
        if (scanf("%d", &input) == 1) {
            numbers[count++] = input;
        } else {
            break;
        }
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    if (count == 0) {
        printf("No valid numbers entered.\n");
        return;
    }
    int difference = numbers[0];
    for (int i = 1; i < count; i++) {
        difference -= numbers[i];
    }
    printf("Result: %d\n", difference);
}
int subtract(int a, int b) {
    int diff = a - b;
    printf("%d\n", diff);
    return diff;
}

// Division
void input_division() {
    int dividend;
    int divisor = 0;
    int result;
    printf("Enter dividend:\n");
    scanf("%d", &dividend);
    printf("Enter divisor:\n");
    scanf("%d", &divisor);
    if (divisor == 0) {
        printf("Division by zero is not allowed.\n");
        return;
    }
    result = dividend / divisor;
    printf("Result of division: %d / %d = %d\n", dividend, divisor, result);
}

// Multiplication
void input_multiplication() {
    int a, b;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter number: ");
    scanf("%d", &b);
    multiply(a, b);
}
int multiply(int a, int b) {
    int product = a * b;
    printf("Result: %d\n", product);
    return product;
}

// Factorial
void input_factorial() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n);
}
int factorial(int n) {
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    printf("Factorial of %d is %d\n", n, result);
    return result;
}

// Exponentiation
void input_exponentiation() {
    double base, exponent;
    printf("Enter base: ");
    if (scanf("%lf", &base) != 1) {
        printf("Invalid input for base.\n");
        return;
    }
    printf("Enter exponent: ");
    if (scanf("%lf", &exponent) != 1) {
        printf("Invalid input for exponent.\n");
        return;
    }
    double result = pow(base, exponent);
    printf("Result: %.6f\n", result);
}
double power(double base, double exponent) {
    double result = pow(base, exponent);
    printf("%.6f\n", result);
    return result;
}

// Square Root
void input_square_root() {
    double number;
    printf("Enter a number: ");
    if (scanf("%lf", &number) != 1) {
        printf("Invalid input.\n");
        return;
    }
    if (number < 0) {
        printf("Square root of negative numbers is not defined.\n");
        return;
    }
    double root = sqrt(number);
    printf("Square root of %.6f is %.6f\n", number, root);
}
double square_root(double number) {
    if (number < 0) {
        printf("Square root of negative numbers is not defined.\n");
        return -1;
    }
    double root = sqrt(number);
    printf("%.6f\n", root);
    return root;
}

// Rock Paper Scissors
void input_rock_paper_scissors() {
    const char* options[] = {"Scissors", "Rock", "Paper"};
    int playerChoice;
    printf("Choose: 0 = Scissors, 1 = Rock, 2 = Paper\n");
    printf("Your choice: ");
    if (scanf("%d", &playerChoice) != 1 || playerChoice < 0 || playerChoice > 2) {
        printf("Invalid input.\n");
        return;
    }
    srand((unsigned int)time(NULL));
    int computerChoice = rand() % 3;
    printf("Computer chooses: %s\n", options[computerChoice]);
    if (playerChoice == computerChoice) {
        printf("Draw!\n");
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
