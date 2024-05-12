#include <stdio.h>

int main()
{
    int rn, sub1, sub2, sub3, sub4, sub5, tot = 0;
    char name[50];
    float avg = 0, avg_percentage = 0;

    printf("-----------------------------------------------------------\n");
    printf("                    Performance Report\n");
    printf("-----------------------------------------------------------\n");

    printf("Enter Roll No: ");
    if (scanf("%d", &rn) != 1)
    {
        printf("Error: Invalid input for Roll No.\n");
        return 1;
    }

    printf("Enter Student Name: ");
    if (scanf("%s", name) != 1)
    {
        printf("Error: Invalid input for Name.\n");
        return 1;
    }

    printf("\nEnter Marks for Each Subject (Out of 100):\n");
    printf("-----------------------------------------------------------\n");

    printf("Fundamental Of Computer Organization (FCO)   : ");
    if (scanf("%d", &sub1) != 1)
    {
        printf("Error: Invalid input for subject marks.\n");
        return 1;
    }

    printf("Fundamental Of Web (FWO)                     : ");
    if (scanf("%d", &sub2) != 1)
    {
        printf("Error: Invalid input for subject marks.\n");
        return 1;
    }

    printf("Basic Mathematics For IT (BM)                : ");
    if (scanf("%d", &sub3) != 1)
    {
        printf("Error: Invalid input for subject marks.\n");
        return 1;
    }

    printf("Fundamental Of Programming - I (FPO-I )      : ");
    if (scanf("%d", &sub4) != 1)
    {
        printf("Error: Invalid input for subject marks.\n");
        return 1;
    }

    printf("Communication Skill (CS)                     : ");
    if (scanf("%d", &sub5) != 1)
    {
        printf("Error: Invalid input for subject marks.\n");
        return 1;
    }

    tot = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = (float)tot / 5.0;
    avg_percentage = (avg / 100.0) * 100;

    printf("\n-----------------------------------------------------------\n");
    printf("                            Result\n");
    printf("-----------------------------------------------------------\n");
    printf("Roll No: %d\n", rn);
    printf("Student Name: %s\n", name);
    printf("-----------------------------------------------------------\n");
    printf("Total Marks: %d\n", tot);
    printf("Average Marks: %.2f\n", avg);
    printf("Average Percentage: %.2f%%\n", avg_percentage);
    printf("Result: %s\n", (tot >= 175) ? "Pass" : "Fail");

    if (tot >= 175)
    {
        printf("Grade: ");
        if (avg >= 70)
        {
            printf("Distinction\n");
        }
        else if (avg >= 61)
        {
            printf("First\n");
        }
        else if (avg >= 51)
        {
            printf("Second\n");
        }
        else
        {
            printf("Pass\n");
        }
    }

    printf("-----------------------------------------------------------\n");

    return 0;
}
