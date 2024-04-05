//Q.5 Write a Program to print leap years between two given numbers using a while loop.

#include<stdio.h>
main()
{
	int first_number , second_number ;
	printf("Enter the First Number : ");
	scanf("%d", &first_number);
	
	printf("Enter the Second Number : ");
	scanf("%d", &second_number);
	
	printf("Leap Year Between %d and %d:\n" , first_number, second_number);
	
	while (first_number <= second_number)
	{
		if((first_number % 4 == 0 && first_number % 100 != 0) || (first_number % 400 == 0)) {
			printf("%d\t", first_number);
		 }
		 first_number++;
	}
}