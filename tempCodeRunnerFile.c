#include <stdio.h>

int main()
{
    float basic_salary, dearness_allowance, house_rent_allowance;
    float gross_salary;

    printf("Ramesh basic salary is ");
    scanf("%f", &basic_salary);
    dearness_allowance = 0.4 * basic_salary;
    house_rent_allowance = 0.2 * basic_salary;

    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
    printf("Ramesh gross salary is %f", gross_salary);

    return 0;
}