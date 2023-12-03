#include <stdio.h>
/* from memory from teach yourself c */

int main(){
	int num = 41;
	char ltr;
	printf("What character do you want the ascii value of? ");
	scanf("%c", &ltr);
	printf("%c's ascii value is %d.\n ",ltr,ltr);
	printf("The ascii value 11 is %c.\n", num);

	while (num <= 120){
		printf("The ascii value of %d is %c.\n", num, num);
		num ++;
	}
	printf("\n");

	return 0;
}
