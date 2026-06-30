#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee e[3];

    printf("Enter details of 3 employees:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nEmployee ID : %d", e[i].id);
        printf("\nName        : %s", e[i].name);
        printf("\nSalary      : %.2f\n", e[i].salary);
    }

    return 0;
}