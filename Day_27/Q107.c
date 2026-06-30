#include <stdio.h>

int main()
{
    int empId;
    char name[50];
    float basic, hra, da, ta, pf, gross, net;

    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Salary Calculations
    hra = basic * 0.20;   // 20% HRA
    da  = basic * 0.10;   // 10% DA
    ta  = basic * 0.05;   // 5% TA
    pf  = basic * 0.08;   // 8% PF Deduction

    gross = basic + hra + da + ta;
    net = gross - pf;

    printf("\n===== Salary Slip =====\n");
    printf("Employee ID      : %d\n", empId);
    printf("Employee Name    : %s\n", name);
    printf("Basic Salary     : %.2f\n", basic);
    printf("HRA (20%%)        : %.2f\n", hra);
    printf("DA (10%%)         : %.2f\n", da);
    printf("TA (5%%)          : %.2f\n", ta);
    printf("PF Deduction     : %.2f\n", pf);
    printf("Gross Salary     : %.2f\n", gross);
    printf("Net Salary       : %.2f\n", net);

    return 0;
}