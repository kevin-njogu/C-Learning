//
// Created by USER on 08/11/2026.
//
#include <stdio.h>

int main() {
    //Int placeholder
    printf("This year %d I will be %d years old\n\n", 2026, 35);
    //Float placeholder
    printf("My bank balance is USD %f as at yesterday\n\n", 2501.45);
    //Int sum
    printf("The total between chem %d marks and Bio %d marks is: %d\n\n", 32, 66, 32+66);
    //Float sum
    printf("The total bill $%.2f was split between Joe $%.2f and Morris %.2f\n\n", 22.5+34.7, 22.5, 34.7);
    //year of birth
    printf("The current year is %d and I am %d years old, hence is was born in year %d\n\n", 2026, 26, 2026-26);

    //Calculator
    //Addition
    printf("5 + 2 = %d\n", 5+2);
    //subtraction
    printf("5 - 2 = %d\n", 5-2);
    //multiplication INTS
    printf("5 * 2 = %d\n", 5*2);
    //Multiplication FLOATS
    printf("5 * 2 = %.2f\n", 5.0*2.0);
    //Modulus
    printf("5 %% 2 = %d\n", 5%2);

    return 0;
}