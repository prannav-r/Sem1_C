#include <stdio.h>
#include <string.h>

// Define structure for employee details
struct Employee {
    int id;
    char name[50];
    float salary;
    char department[50];
};

// Function to add a new employee
void addEmployee(struct Employee employees[], int *numEmployees) {
    printf("Enter employee ID: ");
    scanf("%d", &employees[*numEmployees].id);

    printf("Enter employee name: ");
    scanf("%s", employees[*numEmployees].name);

    printf("Enter employee salary: ");
    scanf("%f", &employees[*numEmployees].salary);

    printf("Enter employee department: ");
    scanf("%s", employees[*numEmployees].department);

    (*numEmployees)++;
}

// Function to display all employees
void displayEmployees(struct Employee employees[], int numEmployees) {
    printf("\nEmployee Database:\n");
    printf("ID\tName\tSalary\tDepartment\n");

    for (int i = 0; i < numEmployees; i++) {
        printf("%d\t%s\t%.2f\t%s\n", employees[i].id, employees[i].name, employees[i].salary, employees[i].department);
    }
}

// Function to search for an employee by ID
int searchEmployee(struct Employee employees[], int numEmployees, int id) {
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].id == id) {
            return i; // Return the index of the employee in the array
        }
    }

    return -1; // Employee not found
}

// Function to update employee information
void updateEmployee(struct Employee employees[], int index) {
    printf("Enter new salary for %s: ", employees[index].name);
    scanf("%f", &employees[index].salary);

    printf("Enter new department for %s: ", employees[index].name);
    scanf("%s", employees[index].department);

    printf("Employee information updated successfully.\n");
}

// Function to delete an employee
void deleteEmployee(struct Employee employees[], int *numEmployees, int index) {
    for (int i = index; i < *numEmployees - 1; i++) {
        employees[i] = employees[i + 1];
    }

    (*numEmployees)--;
    printf("Employee deleted successfully.\n");
}

int main() {
    struct Employee employees[100]; // Assuming a maximum of 100 employees
    int numEmployees = 0;
    int choice, id, index;

    do {
        printf("\nEmployee Database Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee Information\n");
        printf("5. Delete Employee\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &numEmployees);
                break;
            case 2:
                displayEmployees(employees, numEmployees);
                break;
            case 3:
                printf("Enter employee ID to search: ");
                scanf("%d", &id);
                index = searchEmployee(employees, numEmployees, id);
                if (index != -1) {
                    printf("Employee found:\n");
                    printf("ID\tName\tSalary\tDepartment\n");
                    printf("%d\t%s\t%.2f\t%s\n", employees[index].id, employees[index].name, employees[index].salary, employees[index].department);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            case 4:
                printf("Enter employee ID to update: ");
                scanf("%d", &id);
                index = searchEmployee(employees, numEmployees, id);
                if (index != -1) {
                    updateEmployee(employees, index);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            case 5:
                printf("Enter employee ID to delete: ");
                scanf("%d", &id);
                index = searchEmployee(employees, numEmployees, id);
                if (index != -1) {
                    deleteEmployee(employees, &numEmployees, index);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}