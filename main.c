
#include <stdio.h>
#include "resident.h"

int main(void)
{
    int choice;

    do
    {
        printf("\n===== APARTMENT MANAGEMENT SYSTEM =====\n");
        printf("Resident Management\n");
        printf("1. Add Resident\n");
        printf("2. Display Residents\n");
        printf("3. Search Resident\n");
        printf("4. Update Resident\n");
        printf("5. Delete Resident\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        switch (choice)
        {
            case 1: addResident(); break;
            case 2: displayResidents(); break;
            case 3: searchResident(); break;
            case 4: updateResident(); break;
            case 5: deleteResident(); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}