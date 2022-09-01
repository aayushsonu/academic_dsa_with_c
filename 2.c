// Write a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1,y1),B(x2,y2), and C(x3,y3).Use these functions to develop a function which returns a value 1 if the point (x,y) lies inside the triangle ABC, otherwise a value 0.

// s = (a+b+c)/2
// heron's formula : sqrt(s(s-a)(s-b)(s-c))

// area of tr using points = (x1(y2-y3)+x2(y3-y1)+x3(y1-y2))/2  --> this is the best way of solving this problem but here problem itself point to heron's formula.

#include <stdio.h>
#include <math.h>

double calcDistance(double x1, double y1, double x2, double y2)
{
    double t1 = pow((x2 - x1), 2);
    double t2 = pow((y2 - y1), 2);
    double temp = t1 + t2;
    double distance = sqrt(temp);
    printf("distance: %1f\n", distance);
    return distance;
}

double calcArea(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;
    double temp = s * (s - a) * (s - b) * (s - c);
    double area = sqrt(temp);
    printf("area: %1f\n", area);
    return area;
}

int pointInsideTriangle(double p, double q, double x1, double y1, double x2, double y2, double x3, double y3)
{

    // logic; if ar. of full triangle == ar.() of 3 sub triangle

    double calcD1 = calcDistance(x1, y1, x2, y2);
    double calcD2 = calcDistance(x1, y1, x3, y3);
    double calcD3 = calcDistance(x2, y2, x3, y3);
    double ar = calcArea(calcD1, calcD2, calcD3);

    double calcC1 = calcDistance(x1, y1, p, q);
    double calcC2 = calcDistance(x2, y2, p, q);
    double calcC3 = calcDistance(x1, y1, x2, y2);
    double ar1 = calcArea(calcC1, calcC2, calcC3);

    double calcB1 = calcDistance(x1, y1, p, q);
    double calcB2 = calcDistance(x1, y1, x3, y3);
    double calcB3 = calcDistance(x3, y3, p, q);
    double ar2 = calcArea(calcB1, calcB2, calcB3);

    double calcA1 = calcDistance(x3, y3, x2, y2);
    double calcA2 = calcDistance(x2, y2, p, q);
    double calcA3 = calcDistance(x3, y3, p, q);
    double ar3 = calcArea(calcA1, calcA2, calcA3);

    double sum = ar1 + ar2 + ar3;

    if ((float)ar == (float)sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int calc = pointInsideTriangle(1, 3, 0, 0, 0, 4, 3, 4);
    printf("%d\n", calc);

    // printf("%1f", calcDistance(0, 0, 1, 3));
}
