// WAP to print the volume of a sphere of any inputed radius
// hint:- volume of sphere = (4*3.14*r*r*r)/3
#include <stdio.h>
int main(void)
{
    float r;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&r);
    float vol = (4*3.14*r*r*r)/3;
    printf("Volume of the sphere will be: %.2f\n ", vol);
    return 0;
}