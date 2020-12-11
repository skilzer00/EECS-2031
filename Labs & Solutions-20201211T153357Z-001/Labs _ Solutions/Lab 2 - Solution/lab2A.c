#include <stdio.h>

int isDigits(char);

int main(){
 int a, b;
 char c;

 printf("Enter an integer followed by a char>" );
 scanf( "%d %c",  &a,&c);

 while (a != -10000 ){
   if (isDigits(c))
      printf("Character '%c' represents a digit. Sum of %d and %c is %d\n", c, a,c, a+ c-'0'); // don't use c-48
   else printf("Character \'%c\' does not represent a digit\n",c);

   printf("\nEnter an integer followed by a char>" );
   scanf("%d %c", &a,&c);

 }
 printf("Bye!\n");
 return 0;
 

}

int isDigits (char c){
  if (c >= '0' && c <= '9')   // don't use c >= 48 && c <= 56
   return 1;
  else return 0;
}    
 
