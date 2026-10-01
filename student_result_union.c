#include <stdio.h>
#include <string.h>

union Result
{
    int marks;
    char grade;
};

int main()
{
    union Result result;
    int choice;

    printf("===== Student Result Using Union =====\n");
    printf("1. Enter Marks\n");
    printf("2. Enter Grade\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Marks: ");
        scanf("%d", &result.marks);

        printf("\nStudent Marks: %d\n", result.marks);
    }
    else if (choice == 2)
    {
        printf("Enter Grade: ");
        scanf(" %c", &result.grade);

        printf("\nStudent Grade: %c\n", result.grade);
    }
    else
    {
        printf("\nInvalid choice!\n");
    }

    printf("\nThe union stores one value at a time.\n");

    return 0;
}
