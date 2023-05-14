#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double first, second, third, fourth, sqrt1, sqrt2, sqrt3, sqrt4, sqr1, sqr2, sqr3, sqr4,
    cube1, cube2, cube3, cube4, fourth_power1, fourth_power2, fourth_power3, fourth_power4;

    printf("Enter 4 numbers: ");
    scanf("%lf", &first);
    scanf("%lf", &second);
    scanf("%lf", &third);
    scanf("%lf", &fourth);

    sqrt1 = sqrt(first);
    sqrt2 = sqrt(second);
    sqrt3 = sqrt(third);
    sqrt4 = sqrt(fourth);

    sqr1 = pow(first, 2);
    sqr2 = pow(second, 2);
    sqr3 = pow(third, 2);
    sqr4 = pow(fourth, 2);

    cube1 = pow(first, 3);
    cube2 = pow(second, 3);
    cube3 = pow(third, 3);
    cube4 = pow(fourth, 3);

    fourth_power1 = pow(first, 4);
    fourth_power2 = pow(second, 4);
    fourth_power3 = pow(third, 4);
    fourth_power4 = pow(fourth, 4);

    printf("%1s%15s%10s%10s%16s \n", "Value", "Square Root", "Square", "Cube", "Fourth Power");
    printf("%3.0f%13.2f%13.2f%11.2f%12.2f \n", first, sqrt1, sqr1, cube1, fourth_power1);
    printf("%3.0f%13.2f%13.2f%11.2f%12.2f \n", second, sqrt2, sqr2, cube2, fourth_power2);
    printf("%3.0f%13.2f%13.2f%11.2f%12.2f \n", third, sqrt3, sqr3, cube3, fourth_power3);
    printf("%3.0f%13.2f%13.2f%11.2f%12.2f \n", fourth, sqrt4, sqr4, cube4, fourth_power4);

    return 0;
}
