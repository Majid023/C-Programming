#include<conio.h>
#include<stdio.h>

int main() {
	char str[50];
	char temp;
	int len, i;
	
	printf("Enter a String and find its reverse \n");
	gets(str);
	
	// find length of the string
	for(len=0; str[len]; len++);
	
	for(i=0; i<len/2; i++){
		
		temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;
		
	}
	
	str[len] = '\0';// add null character at the end of the string for indicate end of the string
	printf("reverse of the string %s", str);
		
	getch();
	return 0;
}


