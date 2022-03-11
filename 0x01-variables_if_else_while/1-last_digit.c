#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* betty style doc for function main goes there */

int main(void)

{

		int n, num;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		num=n%10;

		printf("Last digit: %d",num);	

		return (0);

}
