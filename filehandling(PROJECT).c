#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct frnd
{
    char name[50];
    char address[50];
    char city[50];
    int pho;
};

/* ....ADD FRIEND.... */
void addFriend()
{
    FILE *f;
    struct frnd f1;
    int ans;

    f = fopen("friendsbook.txt", "a");
    if (f == NULL)
    {
        printf("Can't open file\n");
        return;
    }

    do
    {
        printf("\nEnter name    : ");
        scanf(" %[^\n]", f1.name);

        printf("Enter address : ");
        scanf(" %[^\n]", f1.address);

        printf("Enter city    : ");
        scanf(" %[^\n]", f1.city);

        printf("Enter phone   : ");
        scanf("%d", &f1.pho);

        fprintf(f, "%s | %s | %s | %d\n",
                f1.name, f1.address, f1.city, f1.pho);

        printf("\nAdd more (1/0)? ");
        scanf("%d", &ans);

    } while (ans == 1);

    fclose(f);
}

/* ....SHOW ALL FRIENDS .... */
void showAllFriends()
{
    FILE *f;
    char line[200];

    f = fopen("friendsbook.txt", "r");
    if (f == NULL)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n----- FRIENDS LIST -----\n");
    while (fgets(line, sizeof(line), f))
    {
        printf("%s", line);
    }

    fclose(f);
}

/* .... SEARCH BY NAME .... */
void searchByName()
{
    FILE *f;
    char line[200];
    char name[50];
    int found = 0;

    f = fopen("friendsbook.txt", "r");
    if (f == NULL)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("\nEnter name to search: ");
    scanf(" %[^\n]", name);

    printf("\n--- SEARCH RESULT ---\n");
    while (fgets(line, sizeof(line), f))
    {
        if (strstr(line, name) != NULL)
        {
            printf("%s", line);
            found = 1;
        }
    }

    if (!found)
        printf("No friend found with name: %s\n", name);

    fclose(f);
}

/* .... SEARCH BY PHONE .... */
void searchByPhone()
{
    FILE *f;
    char line[200];
    char phoneStr[20];
    int phone;
    int found = 0;

    f = fopen("friendsbook.txt", "r");
    if (f == NULL)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("\nEnter phone number to search: ");
    scanf("%d", &phone);

    sprintf(phoneStr, "%d", phone);

    printf("\n--- SEARCH RESULT ---\n");
    while (fgets(line, sizeof(line), f))
    {
        if (strstr(line, phoneStr) != NULL)
        {
            printf("%s", line);
            found = 1;
        }
    }

    if (!found)
        printf("No friend found with phone number: %d\n", phone);

    fclose(f);
}

/* ....MAIN MENU .... */
int main()
{
    int choice;

    do
    {
        printf("\n\n===== FRIENDS BOOK MENU =====");
        printf("\n1. Add Friend");
        printf("\n2. Show All Friends");
        printf("\n3. Search Friend by Name");
        printf("\n4. Search Friend by Phone");
        printf("\n0. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addFriend();
            break;
        case 2:
            showAllFriends();
            break;
        case 3:
            searchByName();
            break;
        case 4:
            searchByPhone();
            break;
        case 0:
            printf("\nExiting program...\n");
            break;
        default:
            printf("\nInvalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
