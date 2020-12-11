#include <stdio.h>

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
         printf("arr [%d] = %d\n", i, *arr[i]);  /* should be 0, 2, 4, 6, 8 */

     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value 2*index */
void setArr (int index, int value){
     int i = value; 
     * arr[index] = i;
}



/* you got Segmentation Fault because each pointer was not initilized.
It contains some garbage value. Trying to store info to that garbage 
address cause Segmentation Fault which is C's reaction to protect against 
this attempt.  
This is same as just  
int * p;  *p = 3;   
*/

