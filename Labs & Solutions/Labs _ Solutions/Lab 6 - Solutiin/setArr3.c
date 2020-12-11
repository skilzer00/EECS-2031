#include <stdio.h>
#include <stdlib.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, 0);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
        
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d\n", i, *arr[i]); 
    return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value 2*index */
void setArr (int index, int value){
    int i = value; //2 * index;
    arr[index] = (int *) malloc (sizeof(int));  // request space in HEAP
    
    // set the pointee value
    * arr[index] = i;
}

