#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TheBigNumber(int num1, int num2) {
	if (num1 > num2) 
		return num1;
	return num2;
}


int main(int argc, char** argv) {
	int num1, num2;
	printf("%s", "Enter num1\n");
	scanf_s("%d", &num1);
	printf("%s", "Enter num2\n");
	scanf_s("%d", &num2);
	int result = TheBigNumber(num1, num2);
	printf("%s , %d", " the biger number is: ", result);


	exit(0);
}
