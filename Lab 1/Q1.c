#include <stdio.h>
#include <stdlib.h>

int main()
{
    int EmployeeID;
    printf("Enter Employee's ID:");
    scanf("%d",&EmployeeID);
    float WorkHrs;
    printf("Enter Worked Hours per Month:");
    scanf("%f",&WorkHrs);
    float Payment;
    printf("Enter Amount per Hour:");
    scanf("%f",&Payment);
    printf("The Salary of Employee %d is %.2f/=",EmployeeID,WorkHrs*Payment);
    return 0;
}
