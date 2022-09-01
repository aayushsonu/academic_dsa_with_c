// Write a function that receives marks scored by a student in 3 subjects and returns the average and percentage of these marks. Use call by value and call by reference concept to call this function from main () and print the results in main ().

#include <stdio.h>

float avg(int m1, int m2, int m3)
{
    float avg;
    float sum = m1 + m2 + m3;
    avg = sum / 3;
    return avg;
}

float percentage(int m1, int m2, int m3)
{
    float sum = m1 + m2 + m3;

    float percentage = (sum / 300);
    return percentage * 100;
}

int main()
{
    printf("Call by value\n");

    int m1, m2, m3;

    printf("Enter first number: ");
    scanf("%d", &m1);

    printf("Enter second number: ");
    scanf("%d", &m2);

    printf("Enter third number: ");
    scanf("%d", &m3);

    float x = avg(m1, m2, m3);
    float y = percentage(m1, m2, m3);

    printf("Avg is : %.2f", x);
    printf("\nPercentage is : %.2f%%", y);

    return 0;
}
