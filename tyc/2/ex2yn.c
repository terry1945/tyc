#include <stdio.h>
/* Do the ascii thing with option to repeat
 * This stupid y/n thing has been kicking my ass */ 

int main(){
	char ltr;
	char again = 'y';
	char dummy;

	while(again == 'y'){

	printf("What character do you want the ascii value of? ");
	scanf("%c", &ltr);
	printf("%c's ascii value is %d.\n ",ltr,ltr);

	printf("\n\nEnter y to look up another ");
	printf("or anything else to quit ");
	scanf("\n%c", &again);
	
	} 
	printf("\nEnter any letter to continue... ");
	scanf("\n%c", &dummy);

	return 0;
}
