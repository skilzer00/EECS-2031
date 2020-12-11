#include <stdio.h>
#include <string.h>

void printArray(char** , int );
void exchange (char *[]);

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

  // display the array by calling printArr


  // swap pointee of first and second
  
  // call exchange() to swap some other 'rows';
  

   printf("===========================\n");

  // display the array again

}


