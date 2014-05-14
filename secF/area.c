/*This program will ask the user to enter base and height of a 
triangle in centimeters(both are floating point values).  It will
 then calculate the area of the triangle and print it out.*/
#include <stdio.h>

int main(void){
    float base;
    float height;
    float area;
   
    printf("please enter the base: ");
    scanf("%f",&base);
    printf("please enter the height: ");
    scanf("%f",&height);
    /*this expression is wrong because 1/2 is int/int so it is 0
    area = 1 / 2 * (base * height); */
    /*working: 
    area = 1.0/2 * base* height;
    */
    /*
    area = 0.5 * base * height;
    */
    area = (base*height)/2;






    printf("the area of the triangle with base: %f height: %f is %f\n",
                                                         base,height,area); 
    return 0;
}
