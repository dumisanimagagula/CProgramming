#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Here we declare the variables we use
	int a, b;
	
	// Here we read those variables
	scanf("%d", &a);
	scanf("%d", &b);
	
	// Here we print them
	printf("The sum of the numbers is: %d\n", a + b);
	printf("The product of the numbers is: %d", a * b);
	return 0;
}
