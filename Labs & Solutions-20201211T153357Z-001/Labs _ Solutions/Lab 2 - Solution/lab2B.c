#include<stdio.h>

/*copying input to output with converting lowercase to upper-case letters 
*/
main(){
  int c;
  while ((c=getchar())!=EOF) 
  {
   if (c>='a' && c<='z')
     c = c - ('a'- 'A');  /* .b.-.B. + c */ 
   putchar(c);            /* .c.-.C. + c */ 
  }                      /* don't use c-32 */
  return 0;
}

