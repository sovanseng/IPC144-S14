#include<stdio.h>
int main(){

	const int age;
	int _age;
	//int 3age;//WRONG
	int age3;
	//int main;//WRONG
	
	printf("Please enter your age\t :");
	scanf("%d",&_age);	
	printf("Please enter your friend's age :");
	scanf("%d",&age3);
	
	printf("You are %d years old \n
	
		Your friend is %d years old \n", _age, age3);
	
	
	return 0;
}
