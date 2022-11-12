#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%d", &a);
	a -= 1; // Other shorthand operators for this are a = a - 1, a--
	printf("The predecessor of the number is: %d\n", a);
	a += 1; // Other shorthand operators for this are a = a + 1, a++
	printf("The successor of the number is: %d\n", a);
	a *= 2; // Other shorthand operator for this is a = a * 2
	printf("The double of the number is: %d\n", a);
	a /= 2; // Other shorthand operator for this is a = a / 2
	printf("The half of the number is: %d", a);
	return 0;
}
