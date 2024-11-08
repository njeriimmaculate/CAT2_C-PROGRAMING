#include <stdio.h>

struct Employee {
    char name[25], department[20],email[50];
    int id;
    float salary;
}Employee;

int main() {

    strcpy(Employee.name,"John Doe");
         strcpy(Employee.department, "Human resources");
    strcpy(Employee.email,"johndoe@company.com");                 
        
       Employee.salary= 55000.50;              
        Employee.id=12345;

    printf("Name: %s\n", Employee.name);
    printf("ID: %d\n", Employee.id);
    printf("Department: %s\n", Employee.department);
    printf("Salary: %.2f\n", Employee.salary);
    printf("Email: %s\n", Employee.email);

    return 0;
}
