// Write a function that receives marks scored by a student in 3 subjects and returns the average and percentage of these marks. Use call by value and call by reference concept to call this function from main () and print the results in main ().

#include <stdio.h>

int avg(int *marks)
{
    int avg;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + marks[i];
    }

    avg = sum / 3;

    return avg;
}

float percentage(int *marks)
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + marks[i];
    }

    float percentage = (sum / 300);
    return percentage * 100;
}

int main()
{
    printf("Call by ref\n");

    int marks[3];

    // int *p = marks;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks of subjec %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int x = avg(marks);
    float y = percentage(marks);

    printf("Avg is : %d", x);
    printf("\nPercentage is : %.2f%%", y);

    return 0;
}
