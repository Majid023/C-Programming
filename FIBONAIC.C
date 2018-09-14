// Programme written by Majid Ansari(S.K)

#include<conio.h>
#include<stdio.h>

int fibonacci(int num);

void main(){

 int num = 0;
 int i;

 clrscr();

 printf("Number of Fibonacci series: ");
 scanf("%d", &num);

 for(i = 1; i <= num; i++)
	printf("%d ", fibonacci(i));

 getch();

}

int fibonacci(int num) {

 if(num <= 0)
	return;
 if(num == 1 || num == 2)
	return 1;

 return (fibonacci(num -1) + fibonacci(num - 2));

}
