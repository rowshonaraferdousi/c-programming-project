Project name : Array Multiplication
Creating date : 31/03/2025
Created by : Rowshon ara ferdousi
Student ID : 0182420012101253
GitHub ID :
Course Instructor : Md. Jehadul Islam Mony
Department : Computer Science & Engineering
Institution : Leading University,Sylhet
/*
#include <stdio.h>

int main() {
    int MAX_SIZE;
    printf("Enter the size of the array: ");
    scanf("%d", &MAX_SIZE);
    int arr[MAX_SIZE];
    int n = 0; // current size of the array
    int choice, value, index, i, found;

    while (1) {

        printf("\n1. Insert a number (at end or specific index)\n");
        printf("2. Update a number by index\n");
        printf("3. Delete a number by index\n");
        printf("4. Search for a number\n");
        printf("5. Find largest and smallest number\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert
                if (n >= MAX_SIZE) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter the number to insert: ");
                    scanf("%d", &value);

                    printf("Do you want to insert at a specific index? (1 = Yes, 0 = No): ");
                    int opt;
                    scanf("%d", &opt);

                    if (opt == 1) {
                        printf("Enter index (0 to %d): ", n);
                        scanf("%d", &index);

                        if (index >= 0 && index <= n) {
                            // Shift elements to the right to make space
                            for (i = n; i > index; i--) {// ride a number moving
                                arr[i] = arr[i - 1];
                            }
                            arr[index] = value;
                            n++;
                            printf("Number inserted at index %d.\n", index);
                        } else {
                            printf("Invalid index!\n");
                        }
                    } else {
                        // Insert at the end
                        arr[n] = value;
                        n++;
                        printf("Number inserted at the end.\n");
                    }
                }
                // Print updated array
                printf("Updated array: ");

                for (int i = 0; i < n; i++) {

                    printf("%d ", arr[i]);

                }
                break;

            case 2: // Update
                printf("Enter index to update (0 to %d): ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    arr[index] = value;
                    printf("Number updated successfully.\n");
                } else {
                    printf("Invalid index!\n");
                }
                // Print updated array
                printf("Updated array: ");

                for (int i = 0; i < n; i++) {

                    printf("%d ", arr[i]);

                }
                break;

            case 3: // Delete
                printf("Enter index to delete (0 to %d): ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    for (i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Number deleted successfully.\n");
                } else {
                    printf("Invalid index!\n");
                }
                // Print updated array
                printf("Updated array: ");

                for (int i = 0; i < n; i++) {

                    printf("%d ", arr[i]);

                }
                break;

            case 4: // Search
                printf("Enter number to search: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Number found at index %d\n", i);
                        found = 1;
                        break;
                    }
                }
                if (found==0) {
                    printf("Number not found.\n");
                }
                break;

            case 5: // Find largest and smallest
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    int largest = arr[0];
                    int smallest = arr[0];
                    for (i = 1; i < n; i++) {
                        if (arr[i] > largest)
                            largest = arr[i];
                        if (arr[i] < smallest)
                            smallest = arr[i];
                    }
                    printf("Largest number: %d\n", largest);
                    printf("Smallest number: %d\n", smallest);
                }
                break;

            case 6: // Exit
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
