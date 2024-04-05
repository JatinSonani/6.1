//Q.4 Write a Program to print odd numbers from N to 1 using a while loop.

#include<stdio.h>
main()
{
	 int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    int i = N;
    
    while (i >= 1) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i--; // Decrement the counter
    }
}