// The distance between two cities (in km.) is through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include <stdio.h>

int main()
{
    float kelometers;
    printf("enter a distance : ");
    scanf("%f", &kelometers);

    float meters, feet, inches, centimeters;
    meters = 1000 * kelometers;
    feet = 0.3048 * meters;
    inches = 0.08333 * feet;
    centimeters = meters * 100;

    printf("meters : %f", meters);
    printf("feet : %f", feet);
    printf("intches : %f", inches);
    printf("centinmeter : %f", centimeters);

    return 0;
}
