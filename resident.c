
#include <stdio.h>
#include "resident.h"

struct Resident residents[MAX_RESIDENTS];
int count = 0;

void addResident(void)
{
    if (count >= MAX_RESIDENTS)
    {
        printf("\nResident limit reached!\n");
        return;
    }

    printf("Enter Resident ID: ");
    scanf("%d", &residents[count].residentID);

    printf("Enter Resident Name: ");
    scanf(" %49[^\n]", residents[count].name);

    printf("Enter Apartment Number: ");
    scanf("%d", &residents[count].apartmentNo);

    printf("Enter Phone Number: ");
    scanf("%14s", residents[count].phone);

    printf("Enter Rent Status (Paid/Unpaid): ");
    scanf("%19s", residents[count].rentStatus);

    count++;
    printf("\nResident added successfully!\n");
}

void displayResidents(void)
{
    if (count == 0)
    {
        printf("\nNo residents found!\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        printf("\nResident ID: %d\n", residents[i].residentID);
        printf("Name: %s\n", residents[i].name);
        printf("Apartment Number: %d\n", residents[i].apartmentNo);
        printf("Phone: %s\n", residents[i].phone);
        printf("Rent Status: %s\n", residents[i].rentStatus);
    }
}

void searchResident(void)
{
    int id, found = 0;

    printf("Enter Resident ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (residents[i].residentID == id)
        {
            printf("\nResident found: %s\n", residents[i].name);
            printf("Apartment Number: %d\n", residents[i].apartmentNo);
            printf("Phone: %s\n", residents[i].phone);
            printf("Rent Status: %s\n", residents[i].rentStatus);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nResident not found!\n");
}

void updateResident(void)
{
    int id, found = 0;

    printf("Enter Resident ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (residents[i].residentID == id)
        {
            printf("Enter New Name: ");
            scanf(" %49[^\n]", residents[i].name);

            printf("Enter New Apartment Number: ");
            scanf("%d", &residents[i].apartmentNo);

            printf("Enter New Phone Number: ");
            scanf("%14s", residents[i].phone);

            printf("Enter New Rent Status: ");
            scanf("%19s", residents[i].rentStatus);

            printf("\nResident updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nResident not found!\n");
}

void deleteResident(void)
{
    int id, found = 0;

    printf("Enter Resident ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (residents[i].residentID == id)
        {
            for (int j = i; j < count - 1; j++)
                residents[j] = residents[j + 1];

            count--;
            printf("\nResident deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nResident not found!\n");
}