/*this program will ask the user for two floating point numbers
representing the base and height of a triangle.  It will then 
echo the input, calculate and display the area of the triangle
of that size*/
#include <stdio.h>

int main(void){
   float base;
   float height;
   float area;
   printf("Please enter the size of the base: ");
   scanf("%f",&base);
   printf("Please enter the size of the height: ");
   scanf("%f",&height);

//   area= 1/2 * base* height;
//  the above is wrong because 1 is an int, and 2 is an int
//  thus 1/2  is 0 and then 0 * anything is 0

//  below works
//   area = (base* height)/2;

//   area = 0.5 * base * height;
   area = 1.0/2*base*height;
   printf("The area of a triangle of base: %f ",base);
   printf("height: %f is %f\n",height,area);
   //printf("The area of a triangle of base: %f height: %f is %f\n",
   //                                     base,height area);
   return 0;
}
