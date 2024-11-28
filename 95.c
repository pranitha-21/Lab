#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_no;
    char name[50];
    float basic_pay;
};

int main() {
    struct Employee emp[50];
    struct Employee *ptr;
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    printf("Enter employee details:\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Enter employee number: ");
        scanf("%d", &emp[i].emp_no);
        printf("Enter employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic_pay);
    }

    ptr = emp;

    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
        printf("Employee Number: %d\n", ptr->emp_no);
        printf("Employee Name: %s\n", ptr->name);
        printf("Basic Pay: %.2f\n", ptr->basic_pay);
        ptr++;
    }

    return 0;
}

