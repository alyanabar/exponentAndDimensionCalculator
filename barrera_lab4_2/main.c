#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(double dim1, double dim2, double dim3, double dim2_1, double dim2_2, double dim2_3);
void display_output(double dim1, double dim2, double dim3, double dim2_1, double dim2_2, double dim2_3, double distance);

int main()
{
    double dim1, dim2, dim3, dim2_1, dim2_2, dim2_3, distance_calculated;
    printf("Enter coordinates for a three-dimensional point: ");
    scanf("%lf", &dim1);
    scanf("%lf", &dim2);
    scanf("%lf", &dim3);
    printf("Enter coordinates for a second three-dimensional point: ");
    scanf("%lf", &dim2_1);
    scanf("%lf", &dim2_2);
    scanf("%lf", &dim2_3);

    distance_calculated = distance(dim1, dim2, dim3, dim2_1, dim2_2, dim2_3);

    display_output(dim1, dim2, dim3, dim2_1, dim2_2, dim2_3, distance_calculated);

    return 0;
}
double distance(double dim1, double dim2, double dim3, double dim2_1, double dim2_2, double dim2_3) {
    double distance_calculated;
    distance_calculated = sqrt(pow((dim1 - dim2_1), 2) + pow((dim2 - dim2_2), 2) + pow((dim3 - dim2_3),2));
    return distance_calculated;
}
void display_output(double dim1, double dim2, double dim3, double dim2_1, double dim2_2, double dim2_3, double distance) {
    printf("The distance between (%.3f, %.3f, %.3f) and (%.3f, %.3f, %.3f) is %.3f", dim1, dim2, dim3,  dim2_1, dim2_2, dim2_3, distance);
}
