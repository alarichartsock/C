#include <stdio.h>

int main() {

    int id;
    double hourly;
    double hoursworked;
    double salary;

    printf("Enter the employee's ID:\n");
    scanf("%i",&id);
    printf("Enter the employee's hourly rate:\n");
    scanf("%lf",&hourly);
    printf("Enter the employee's hours worked per week:\n");
    scanf("%lf",&hoursworked);

    salary = hoursworked * hourly;

    printf("Employee's ID: %i\n",id);
    printf("Employee's Salary: %lf\n",salary);

    return 0;
}
