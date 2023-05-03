//WAP to input base and height of triangle and print the area
//include to print int, float and char using function

#include <stdio.h>
float area(int b,float h);
void display(int a,float b,char ch){
    printf("Integer number is : %d\nFloat Number is : %.2f\nCharacter is :%c\n",a,b,ch);
}
int main(){
    
    display(20,34.5,'A');
    float ar = area(23,14.7);
    printf("Area will be: %.2f\n",ar);
}
float area(int b, float h){
    int area;
    area = (b*h)/2;
    return area; 
}