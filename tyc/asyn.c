#include <stdio.h>
/* from memory from teach yourself c */

int main(){
	char ltr;
	char again = 'y';

	while(again == 'y'){

	printf("What character do you want the ascii value of? ");
	scanf("%c", &ltr);
	printf("%c's ascii value is %d.\n ",ltr,ltr);
	
//	printf("Do again y n ? ");
//	scanf("%c",&again);
	}
	//printf("\n");

	return 0;
}
