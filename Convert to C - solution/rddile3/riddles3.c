#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myFunc(int a, int b) {
	for (int i = a; i > 0; i--) {
		for (int j = 1; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}


int main(int argc, char** argv) {
	int a,b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	myFunc(a, b);
 

	exit(0);
}
