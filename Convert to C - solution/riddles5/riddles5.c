#include <stdio.h> 

// This function swaps values referred by  num1 and num2, 
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int main()
{
	int num1, num2;
	printf("Enter Value of num1 ");
	scanf("%d", &num1);
	printf("\nEnter Value of num2 ");
	scanf("%d", &num2);
	printf("\nbefor Swapping: num1 = %d, num2 = %d", num1, num2);
	swap(&num1, &num2);
	printf("\nAfter Swapping: num1 = %d, num2 = %d", num1, num2);
	printf("\n");
	return 0;
}