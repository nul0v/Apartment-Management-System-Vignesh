
#ifndef RESIDENT_H
#define RESIDENT_H

#define MAX_RESIDENTS 100

struct Resident
{
    int residentID;
    char name[50];
    int apartmentNo;
    char phone[15];
    char rentStatus[20];
};

void addResident(void);
void displayResidents(void);
void searchResident(void);
void updateResident(void);
void deleteResident(void);

#endif