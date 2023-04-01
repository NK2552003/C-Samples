//WAP to print the lateral surface area and total surface area of cuboid
// hint:- literal surface area is:- 2(l+b)h, volume :- lbh, total surface area :-2(lb+bh+hl)
#include <stdio.h>
int main(void)
{
    int a;
    float l,b,h,lsa,tsa,vol;
    printf("Choose the choice that you want to get for a cuboid\n1.Total Surface area\n2.LateralSurface area\n3.Volume\n");
    scanf("%d",&a);
    if (a>=1 && a<=3)
    {
        printf("Enter the length:");
        scanf("%f",&l);
        printf("Enter the breadth:");
        scanf("%f",&b);
        printf("Enter the height:");
        scanf("%f",&h);
        switch(a)
        {
            case 1:
                tsa= 2*((l*b)+(b*h)+(h*l));
                printf("The total surface area of the cuboid is : %.2f \n", tsa);
                break;
            case 2:
                lsa= 2*(l+b)*h;
                printf("The lateral surface are of the cuboid is : %.2f \n", lsa);
                break;
            case 3:
                vol=l*b*h;
                printf("The Volume of the cuboid is : %.2f \n", vol);
                break;
        }
    }
    else
    {
        printf("INVALID CHOICE\nPLEASE TRY AGAIN :(\n");
    }
    return 0;
}