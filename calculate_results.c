//
// Created by zinob on 19.09.2025.
//

#include "calculate_results.h"

#include <stdio.h>


void user_input() {
    int a, b;
    printf("What numbers do you want to sum up?\n");
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    calculate_sum(a, b);
}

int calculate_sum(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return sum;

}