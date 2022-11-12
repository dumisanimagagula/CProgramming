#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%d", &a);
	printf("Is this number negative?\n");
	if(a < 0){
		printf("Yes, %d is a negative!\n", a);
	}
	else{
		printf("No, %d is a positive!\n", a);
	}
	return 0;
}
