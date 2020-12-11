#include <stdio.h>
#include <string.h>

void printArr(char **, int );
void exchange(char *[]);

main(){

  char * inputs[8] = {"this is input 0, giraffes", "this is input 1, zebras",  "this is input 2, monkeys",
                      "this is input 3, kangaroos"};

  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes";
  char arr3 [] = "this is input 6, thank you";
  char arr4 [] = "this is input 7, bye";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;


  printArr(inputs, 8);


  char * tmp = inputs[0]; 
  inputs[0] = inputs[1]; 
  inputs[1] = tmp;
  
  exchange(inputs);
  printf("\n== after swapping ==\n");
  printArr(inputs, 8);

}


void printArr(char **p, int n){
  int i;
  for (i=0;i<n ;i++ )
  {
     printf("[%d] -*-> %s\n", i, *(p+i));
  }
}

void exchange(char *p[])
{ 
  // exchange pointers (addresses) 
  char * tmp = p[2]; 
  p[2] = p[3]; 
  p[3] = tmp;

  tmp = p[4];
  p[4] = p[5];
  p[5] = tmp;
}
