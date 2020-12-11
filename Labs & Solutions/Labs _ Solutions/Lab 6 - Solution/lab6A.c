#include <stdio.h>
#include <string.h>

main(){

 /*************** review pointer basics **************/ 
 int *p, in=10; p = &in;
 printf("%d\n", *p ); // printee level

 char arr[]="hello";
 char *ptr = arr;  // = &arr[0]

 // different ways to pass the array, at "pointer" level. not *arr,  *ptr
 printf("%s %s %s\n", arr, &arr[0], ptr);

 // passing sub-strings
 printf("%s %s %s\n", arr+2, &arr[2], ptr+2); // pointer level

 //different ways to access arr[0]
 printf("%c %c %c %c\n", arr[0], *ptr, *arr);
 
 //different ways to access arr[1]
 printf("%c %c %c\n", arr[1], *(ptr+1), *(arr+1)); 

 //different ways to access arr[4]
 printf("%c %c %c\n", arr[4], *(ptr+4), *(arr+4)); 
 
 
 /****simple array of int pointers **********************************/
 
 int i=1; int j=3;  int k; int n;
 int * pi = &i;
 int * x[3];  // array of 3 int pointers
 x[0]= pi;  // = &i
 x[1]= &j;
 x[2]= &k;
 
 // set k to 5 via its pointer  

 /*  print elements of array x; using both array notation and pointer notation. 
     Should print 1 1   3 3   5 5   */

 for (n=0; n<3; n++)
  ;// printf("%d %d",  , );


 /***** array of char pointers, each pointer points to an char array ***********/
 char * planets[] = {"Mercury", "Venus", "Earth",
	                     "Mars", "Jupiter", "Saturn",
	                     "Uranus", "Neptune", "Pluto"};
 
 /* print the pointee of the 1st element pointer (i.e., string "Mercury") in the pointer array, 
  using both array index notation i.e., planets[i] and pointer notation i.e., *(planets+i) */
 
 /* print the pointee of the 2nd element pointer (i.e., string "Venus"),
    using both array index notation and pointer notation*/
 
 /* print the pointee of the 5th element pointer (i.e., string "Jupiter"), 
    using both array index notation and pointer notation */
 
 /* print the pointee of the 6th element pointer (i.e., string "Saturn"), 
   using both array index notation and pointer notation */
 
 /* print the pointee of the 8th element pointer (i.e., string "Neptune"), 
   using both array index notation and pointer notation */
 


 // declare a pointer pp (what type??) to point to the first element of planets (= &planets[0]) ;



 /* print the pointee of the 1st element pointer (i.e., string "Mercury") in the pointer array, 
    via pp and using pointer notation, */
 
 /* print the pointee of the 2nd element pointer (i.e., string "Venus"), 
    via pp and using pointer notation */ 
 
 /* print the pointee of the 5th element pointer (i.e., string "Jupiter"), 
    via pp and using pointer notation */
 
 /* print the pointee of the 6th element pointer (i.e., string "Saturn"), 
    via pp and using pointer notation */ 
 
 /* print the pointee of the 8th element pointer (i.e., string "Neptune"), 
    via pp and using pointer notation, */ 
 
 
 // Optional -- for those who love pointer to pointers :-)  
  //Access characters in pointee array, using pointer notation
  /*
  printf("%c  %c  %c\n", planets[0][0],  **planets,  **pp ); //  *( *(planets+0) +0)  *( *(pp+0) + 0)
  printf("%c  %c  %c\n", planets[4][3],  *(*(planets+4)+3),  *(*(pp+4)+3) );
  printf("%c  %c  %c\n", planets[7][4],   *(*(planets+7)+4),  *(*(pp+7)+4) );  

  */
   
}


