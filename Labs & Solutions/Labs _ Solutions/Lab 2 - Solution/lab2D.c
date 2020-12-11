#include <stdio.h>

/*counting occurance of digits*/
int main () {
  int c, i;
  int digit[10];

  for (i=0; i<10; i++) 
    digit[i]=0;

  while ((c = getchar()) != EOF)
    if ( c>= '0' && c <= '9' )
      digit[c -'0'] ++;    // digit[c] ++ ?

  for (i=0; i< 10; i++)
    printf ("%d: %d\n", i,digit[i]);

  return 0;
}

