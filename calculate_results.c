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
    printf("7. Faculty\n");
    printf("8. Faculty\n");
    printf("9. Wurzel\n");
    printf("10. Rock Paper Scissors\n");
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
            user_input_multiply();
            break;
        case 4:
            user_input_div();
            break;
        case 7:
            user_input_faculty();
            break;
        case 8:
            user_input_exponents();
            break;
        case 9:
            user_input_sqrt();
            break;
        case 10:
            user_input_rps();
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
        printf("Keine gueltigen Zahlen eingegeben.\n");
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

// Division ...

void user_input_div()
{
    int dividend;
    int divisor = 0;
    int result;
    printf("Geben Sie den Dividenden ein.\n");
    scanf("%d", &dividend);
    printf ("Geben Sie den Divisor ein.\n");
    scanf("%d", &divisor);
    result = dividend / divisor;
    printf("Das Resultat der Division ist %d / %d = %d\n",dividend, divisor, result);
}

//Multiply ...
void user_input_multiply() {
    int a,b;
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
        printf("Fakultaet ist mit negativen Zahlen nicht definiert.\n");
        return 0;
    }
    for (int i = 2; i < n; i++) {
        faculty *= i;
    }
    printf("Die Fakultaet von %d ist %d\n",n, faculty);
    return faculty;
}

// Exponents
void user_input_exponents() {
    double base, exponent;
    printf("Geben Sie die Basis ein: ");
    if (scanf("%lf", &base) != 1) {
        printf("Ungueltige Eingabe fuer die Basis.\n");
        return;
    }
    printf("Geben Sie den Exponenten ein: ");
    if (scanf("%lf", &exponent) != 1) {
        printf("Ungueltige Eingabe fuer den Exponenten.\n");
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


// Quadratwurzel ziehen (case 9)
void user_input_sqrt() {
    double zahl;
    printf("Geben Sie eine Zahl ein: ");
    if (scanf("%lf", &zahl) != 1) {
        printf("Ungueltige Eingabe.\n");
        return;
    }
    if (zahl < 0) {
        printf("Quadratwurzel von negativen Zahlen ist nicht definiert.\n");
        return;
    }
    double wurzel = sqrt(zahl);
    printf("Die Quadratwurzel von %.6f ist %.6f\n", zahl, wurzel);
}
double calculate_sqrt(double zahl) {
    if (zahl < 0) {
        printf("Quadratwurzel von negativen Zahlen ist nicht definiert.\n");
        return -1;
    }
    double wurzel = sqrt(zahl);
    printf("%.6f\n", wurzel);
    return wurzel;
}

// Rock Paper Scissors (case 10)
void user_input_rps() {
    const char* optionen[] = {"Schere", "Stein", "Papier"};
    int spielerWahl;
    printf("Waehlen Sie: 0 = Schere, 1 = Stein, 2 = Papier\n");
    printf("Ihre Wahl: ");
    if (scanf("%d", &spielerWahl) != 1 || spielerWahl < 0 || spielerWahl > 2) {
        printf("Ungueltige Eingabe.\n");
        return;
    }
    srand((unsigned int)time(NULL));
    int computerWahl = rand() % 3;
    printf("Computer waehlt: %s\n", optionen[computerWahl]);
    if (spielerWahl == computerWahl) {
        printf("Unentschieden!\n");
    } else if ((spielerWahl == 0 && computerWahl == 2) ||
               (spielerWahl == 1 && computerWahl == 0) ||
               (spielerWahl == 2 && computerWahl == 1)) {
        printf("Sie gewinnen!\n");
    } else {
        printf("Computer gewinnt!\n");
    }
}
