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
    printf("7. Faculty ");
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
            user_input_multiply();
            break;
        case 4:
            // user_input_divide();
            break;
        case 7:
            user_input_faculty();
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


// Subtraction ...


//Multiply ...
void user_input_multiply() {
    int numbers[100];
    int a,b;
    int input;
    printf ("Zahl eingeben: ");
    scanf ("%d", &a);
    printf ("Zahl eingeben: ");
    scanf ("%d", &b);
    calculate_multiply(a, b);

}
int calculate_multiply(int a, int b) {
    int multiply = a * b;
    printf("Ergebnis: %d\n", multiply);
    return multiply;

}
// Fakulität ...
void user_input_faculty() {
    int n;
    printf ("1 bis ");
    scanf ("%d", &n);
    calculate_faculty(n);

}
int calculate_faculty(int n) {
    int faculty = n;
    if (n <= 0) {
        printf("Fakultaet ist mit negative Zahlen nicht definiert.\n");
        return 0;
    }

    for (int i = 2; i < n; i++) {
        faculty *= i;


    }
    printf("Die Fakultaet von %d ist %d\n",n, faculty);
    return faculty;
}
