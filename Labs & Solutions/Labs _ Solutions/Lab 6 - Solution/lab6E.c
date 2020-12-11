#include <stdio.h>

void printArr(int *, int);

int  main()
{ 
  int n, i;
  printf("Size of array: ");
  scanf("%d", &n);
  int my_array[n];  
  
  *my_array = 1;
  for(i =1; i<n; i++)
    *(my_array+i) = i*100;

  printArr(my_array, n);
  return 0;
}

void printArr(int * arr, int n){
 ;
}
