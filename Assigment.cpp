#include <stdio.h>

int divider()
{
   for (int i = 0; i < 60; i++)
   {
      printf("-");
   }
   printf("\n");
   return 0;
}

int validator()
{
   printf("Error: Invalid input \n");
   return 1;
}

int getMarks(int marks[])
{

   for (int i = 0; i < 5; i++)
   {
      printf("Enter marks of subject %d: ", i + 1);
      if (scanf("%d", &marks[i]) != 1)
      {
         return validator();
      }
   }
   return 0;
}

int calculateTotal(int marks[], int *total)
{
   *total = 0;
   for (int i = 0; i < 5; i++)
   {
      *total += marks[i];
   }
   return *total;
}

int main()
{

   int rollNo, total = 0;
   int marks[5];
   char name[50];
   float avg = 0, percentage = 0;

   divider();
   printf("Perfomance Report Generator \n");
   divider();

   printf("Enter Student's Roll No: ");
   if (scanf("%d", &rollNo) != 1)
   {
      return validator();
   }

   printf("Enter Student's Name: ");
   if (scanf("%s", name) != 1)
   {
      return validator();
   }

   printf("\nEnter Marks (Out of 100): ");
   divider();

   if (getMarks(marks) != 0)
   {
      return 1;
   }

   calculateTotal(marks, &total);
   avg = (float)total / 5.0;
   percentage = (float)(total / 500.0) * 100;

   printf("\n");
   divider();
   printf("Final Result \n");
   divider();

   printf("Student's Roll No: %d\n", rollNo);
   printf("Student's Name: %s\n", name);
   divider();

   printf("Subject\t\t\tMarks\t\t\tOut of\n");
   divider();
   for (int i = 0; i < 5; i++)
   {
      printf("Subject %d\t\t%d\t\t\t100\n", i + 1, marks[i]);
   }
   divider();
   printf("Total Marks: %d\t\t", total);
   printf("Percentage: %.2f%%\n", percentage);
   printf("Result: %s\n", (total >= 175) ? "Pass" : "Fail");

   if (total >= 175)
   {
      printf("Grade: ");
      if (avg >= 70)
      {
         printf("Distinction\n");
      }
      else if (avg >= 61)
      {
         printf("First Class\n");
      }
      else if (avg >= 51)
      {
         printf("Second Class\n");
      }
      else
      {
         printf("Pass\n");
      }
   }
   divider();
   printf("\n");

   return 0;
}