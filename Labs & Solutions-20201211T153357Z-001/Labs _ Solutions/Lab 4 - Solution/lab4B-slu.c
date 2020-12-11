#include <stdio.h>
#include <math.h>     /* for pow() */
#include <string.h>

#define SIZE 10
 
int my_atoi (char c[]);  /* function declaration */
   
int main(){
 int a,b;
 char arr  [SIZE];

 printf("Enter a word of postive number or 'quit': " );
 scanf("%s", arr);
 while(strcmp(arr,"quit"))
 {
   printf("%s\n", arr);
   int i;

   a = atoi(arr);
   printf("atoi:     %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));
  
   a= my_atoi(arr);
   printf("my_atoi:  %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));

   a= my_atoi2(arr);
   printf("my_atoi2: %d (%#o, %#X)\t%d\t%.0f\n", a,a,a, a*2, pow(a,2));

   /* read again */
   printf("\nEnter a word of postive number or 'quit': " );
   scanf("%s", arr);
 }

 return 0;

}

/* convert an array of digit characters into a decimal int */

/* most of you did scan from left to right.
 Here I scan from right to left. This is a little harder but more straightforward */

// use two variables, pos, and pow
int my_atoi (char c[]){

  int current_value=0;
  int len = strlen(c);  
   
  
  int pos = len-1;   /* scan from right to left */
  int pw = 0;  // power of 10
  while (pos >=0)
  {
     int v = c[pos] -'0';

     current_value += v * pow(10, pw);
     
     pos --;   /* go left further */
     pw++; /* power will increase */
  }
  return current_value;

}


//another way writting loop, exact same logic
// use one variable, pow is calculated based on pos
int my_atoi2 (char c[]){
   
  int i=0;  
  int current_value=0;
  while (c[i] != '\0')   /* or use strlen()  */
    i++;
  
  i--;
  int curr = i;   /* scan from right to left */
  while (curr >=0)
  {
     int v = c[curr] -'0';
     
     int pw = i - curr;
     
     current_value += v* (int)pow(10, pw);
     curr --;   /* go left further */
  }
  return current_value;

}

