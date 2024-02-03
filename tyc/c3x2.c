#include <stdio.h>

int main(){
  int wageWk[52];
  int cntr, numOfWks, tot, weekNmbr;

  printf("\nHow many weeks of wages do you want to enter? ");
  scanf("%d", &numOfWks);

  tot = 0;
  cntr = 0;
  weekNmbr = 1;
  while(cntr < numOfWks && cntr < 52){
    printf("\nEnter the wage for week %d: ", weekNmbr );
    scanf("%d", &wageWk[cntr]);
    cntr += 1;
    weekNmbr += 1;
    tot = tot + *wageWk;  // get the value
  }
  printf("\nTotal is: %d\n", tot);

  return 0;
}
