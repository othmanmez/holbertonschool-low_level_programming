#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Seed the random number generator
 * Generate a random number
 * Get the last digit of n 
 */
int main(void) {
	int n;
	int last_digit;

	srand(time(0));  
	n = rand(); 

	last_digit = n % 10; 


	printf("Last digit of %d is ", n);


	if (last_digit > 5) {
		printf("last %d and is greater than 5\n", last_digit);
	} else if (last_digit == 0) {
		printf("last %d and is 0\n", last_digit);
	} else {
		printf("last %d and is less than 6 and not 0\n", last_digit);
	}

	return 0;
}

