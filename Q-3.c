//Q.3 Write a Program to print 1 to N using a while loop.

#include<stdio.h>
main()
{
	int i=1, N;
	
	printf("Enter a positive integer N : ");
    scanf("%d", &N);
    
    while(i<=N) {
    	printf("%d\t", i);
    	i++;
	}	
		
}