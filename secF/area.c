/*This program will ask the user to enter base and height of a 
triangle in centimeters(both are floating point values).  It will
 then calculate the area of the triangle and print it out.*/
#include <stdio.h>

int main(void){
    float base;
    flaot height;
    float area;
   
    printf("please enter the base: ");
    scanf("%f",&base);
    printf("please enter the height: ");
    scanf("%f,&height)
    
    area = 1 / 2 * base * height;

    printf("the area of the triangle with base: %f height: %f is %f\n",
                                                         base,height,area); 
    return 0;
}}
