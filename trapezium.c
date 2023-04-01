#include <stdio.h>
int main(void)
{
    float a,b,c,d,h,area,para;
    printf("Enter the llel sides of the trapezium (press enter after entering the two sides by doing spacing between them)");
    scanf("%f %f",&a,&b);
    printf("Enteer the other 3 sides of the trapezium(press enter after entering the two sides by doing spacing between them)");
    scanf("%f %f",&c,&d);
    printf("Enter the height of the trapezium:");
    scanf("%f",&h);
    area = ((a+b)*h)/2;
    para = a+b+c+d;
    printf("Area of the given sides of the trapezium: %.2f\n",area);
    printf("Parameter of the given sides of the trapezium is %.2f\n", para);
}