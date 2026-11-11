//
// Created by USER on 10/11/2026.
//
#include <stdio.h>

int main() {

    printf("Welcome my friend!...........\n");
    printf("....Here we will calculate your year of birth....\n");

    int currentYear=2026;
    int age;

    /*printf("Please enter your age: ");
    scanf("%d", &age);

    printf("You were born in the year %d\n", currentYear-age);*/

    int a = 10;
    int b = 20;
    int temp;

    printf("a = %d and b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("a = %d and b = %d\n", a, b);

    return 0;
}