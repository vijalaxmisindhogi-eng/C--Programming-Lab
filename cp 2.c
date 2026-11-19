#include <stdio.h>


int main()
{
    float length, width;
    float radius;
    float base, heigth;
    float area, perimeter, circumference;
    //rectangle
    printf("Enter length and width of  rectangle: ");
    scanf("%f %f", &length, &width);

     area = length * width;
     perimeter = 2 * (length + width);

     printf("Rectangle Area = %.2f\n", area);
     printf("Rectangle perimeter = %.2f\n", perimeter);

     // circle
     printf("\nEnter radius of circle: ");
     scanf("%f", &radius);
     circumference = 2 * 3.14159 * radius;

     printf("circle Area = %.2f\n", area);
     printf("circle circumferece = %.2f\n",circumference);

     // triangle
      printf("\nEnter base and heigth of triangle: ");
      scanf("%f %f", &base, &heigth);
      area = 0.5 * base * heigth;

      printf("triangle Area = %.2f\n",area);
      return 0;
}
