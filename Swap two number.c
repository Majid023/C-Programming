#include<conio.h>
#include<stdio.h>

int main() {
	int a = 0, b = 0;
	
	printf("Enter two Values \n");
	scanf("%d %d", &a, &b);
	
	printf("Before swap \n a = %d \n b = %d \n", a, b);
	
	swap(&a, &b);
	
	printf("After swap \n a = %d \n b = %d", a, b);
	return 0;
}

void swap(int *num1, int *num2) {
	
	*num1 = *num1 + *num2;
	
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}
