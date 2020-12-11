#include <stdio.h>
#include <string.h>

int main(){

 int *p, in=10; p = &in;
 printf("%d\n", *p ); // printee level

 char arr[]="hello";
 char *ptr = arr;
 printf("%s %s %s\n", &arr[0], arr, ptr); // pointer level 
 
// passing sub-string
 printf("%s %s %s\n", &arr[2], arr+2, ptr+2); // pointer level 


 //different ways to access arr[0]
 printf("%c %c %c %c\n", arr[0], *ptr, *arr, ptr[0]); // pointee level
 
 //different ways to access arr[1]
 printf("%c %c %c\n", arr[1], *(ptr+1), *(arr+1) ); // pointee level

 //different ways to access arr[4]
 printf("%c %c %c\n\n", arr[4], *(ptr+4), *(arr+4) ); // pointee level
 /**************************************/
 
 int i=1; int j=3;  int k; int n;
 int * x[3];  // array of 3 int pointers
 x[0]= &i;
 x[1]= &j;
 x[2]= &k;
 
// set k to 5 via its pointer  
 *x[2] = 5; 
 n=0;
 for (; n<3; n++)  // print elements ; should 1, 3, 5  
   printf("%d %d\n", *x[n], **(x+n));
  /**************************************/

 char * planets[] = {"Mercury", "Venus", "Earth",
	                     "Mars", "Jupiter", "Saturn",
	                     "Uranus", "Neptune", "Pluto"};
 
 // print the pointee of the 1st element pointer (i.e., string "Mercury") in the pointer array, using both array index notation i.e., planets[i] and pointer notation, 
 printf("\n%s  %s\n", planets[0], *planets);
 
 // print the pointee of the 2nd element pointer (i.e., string "Venus"), using both array index notation i.e., planets[i] and pointer notation, 
 printf("%s  %s\n", planets[1], *(planets+1));
 
 // print the pointee of the 5th element pointer (i.e., string "Jupiter"), using both array index notation i.e., planets[i] and pointer notation, 
 printf("%s  %s\n", planets[4],*(planets+4));
 
 // print the pointee of the 6th element pointer (i.e., string "Saturn"), using both array index notation i.e., planets[i] and pointer notation, 
  printf("%s  %s\n", planets[5],*(planets+5));
 
 // print the pointee of the 8th element pointer (i.e., string "Neptune"), using both array index notation i.e., planets[i] and pointer notation, 
 printf("%s  %s\n\n", planets[7],*(planets+7));
 
 // set a pointer to point to the first element of planets;
 char **pp = planets;    // or char ** p = & planets[0]

 // print the pointee of the 1st element pointer (i.e., string "Mercury") in the pointer array, via pp and using pointer notation, 
 printf("%s\n", *(pp)); 
 
 // print the pointee of the 2nd element pointer (i.e., string "Venus"), via pp and using pointer notation, 
 printf("%s\n", *(pp+1));
 
 // print the pointee of the 5th element pointer (i.e., string "Jupiter"), via pp and using pointer notation, 
 printf("%s\n", *(pp+4));
 
 // print the pointee of the 6th element pointer (i.e., string "Saturn"), via pp and using pointer notation, 
 printf("%s\n", *(pp+5));
 
  // print the pointee of the 8th element pointer (i.e., string "Neptune"), via pp and using pointer notation, 
  printf("%s\n\n", *(pp+7));

  // Optional -- for those who love pointer to pointers :-)  
  //Access characters in pointee array, using pointer notation
  printf("%c  %c  %c\n", planets[0][0],  **planets,  **pp ); //  *( *(planets+0) +0)  *( *(pp+0) + 0)
  printf("%c  %c  %c\n", planets[4][3],  *(*(planets+4)+3),  *(*(pp+4)+3) );
  printf("%c  %c  %c\n", planets[7][4],   *(*(planets+7)+4),  *(*(pp+7)+4) );  

}
