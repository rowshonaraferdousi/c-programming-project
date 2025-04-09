Project name : Array Multiplication
Creating date : 29/03/2025
Created by : Rowshon ara ferdousi
Student ID : 0182420012101253
GitHub ID :
Course Instructor : Md. Jehadul Islam Mony
Department : Computer Science & Engineering
Institution : Leading University,Sylhet
#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int choice;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Insert Number\n");
        printf("2. Update Number\n");
        printf("3. Delete Number\n");
        printf("4. Search Number\n");
        printf("5. Find Largest and Smallest\n");
        printf("6. Display Array\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                if (count >= 100) {
                    printf("Array is full!\n");
                } else {
                    int num;
                    printf("Enter number to insert: ");
                    scanf("%d", &num);
                    arr[count] = num;
                    count++;
                    printf("Inserted successfully.\n");
                }
                break;
            }

            case 2: {
                int pos, newVal;
                printf("Enter position to update (0 to %d): ", count - 1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < count) {
                    printf("Enter new value: ");
                    scanf("%d", &newVal);
                    arr[pos] = newVal;
                    printf("Updated successfully.\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;
            }

            case 3: {
                int pos;
                printf("Enter position to delete (0 to %d): ", count - 1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < count) {
                    for (int i = pos; i < count - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    count--;
                    printf("Deleted successfully.\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;
            }

            case 4: {
                int num;
                int found = 0;
                printf("Enter number to search: ");
                scanf("%d", &num);
                for (int i = 0; i < count; i++) {
                    if (arr[i] == num) {
                        printf("Number found at position: %d\n", i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Number not found.\n");
                }
                break;
            }

            case 5: {
                if (count == 0) {
                    printf("Array is empty!\n");
                } else {
                    int max = arr[0];
                    int min = arr[0];
                    for (int i = 1; i < count; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Largest number: %d\n", max);
                    printf("Smallest number: %d\n", min);
                }
                break;
            }

            case 6: {
                printf("Current array: ");
                for (int i = 0; i < count; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}