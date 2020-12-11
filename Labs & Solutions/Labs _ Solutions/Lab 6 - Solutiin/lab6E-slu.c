#include <stdio.h>
#include <stdlib.h>

void printArr(int *, int);

/* slute the world */
int  main()
{ 
  int n, i, * my_array;
  printf("Size of array: ");
  scanf("%d", &n);
  my_array = (int*)malloc (n* sizeof (int));  
  /*or my_array = (int*)calloc (n, sizeof (int)); */
  
  if (my_array == NULL){printf("memory allocation failed\n"); exit(0);}

  *my_array = 1;
  for(i =1; i<n; i++)
    *(my_array+i) = i*100;

  
  printArr(my_array, n);
  return 0;
}

void printArr(int * arr, int n){
   int i;
   for(i=0;i<n; i++)
     printf("%d\n", *(arr+i));
 }

