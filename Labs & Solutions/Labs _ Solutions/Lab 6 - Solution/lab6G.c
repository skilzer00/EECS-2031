#include <stdio.h>
#include <stdlib.h>

struct ints
{ 
   int int1;
   int int2;
};

struct intPtr { 
   int data;
   int * pp;
};


struct intArr { 
   int data;
   int arr[3];
};


void processStruct  (struct ints);

main()
{
  printf("----------- simple struct --------------\n");
  struct ints a = {32,4};
  a.int1 = 100;

  struct ints b = a;
  
  // print the two members of a; 
  printf("a: %d %d\n",  ...);
  //print the two members of b; 
  printf("b: %d %d\n",);
  
  b.int1 = 700; // change b.int1
  //use scanf to change b.int2
  printf("Enter value for b.int2: ");
  scanf("%d", &b.int2);

  // print the two members of a again; 

  // print the two members of b again;
  
  printf("------- struct with pointer member -----------------\n");

  struct intPtr xx; 
  xx.data = 5;
  int c = 100;   xx.pp = &c;
  
  struct intPtr yy = xx;
  // print xx's data, pointer value, and pointee value  
  printf("xx: %d %p %d\n", xx.data, xx.pp, *xx.pp);

  //print yy's data, pointer value, and pointee value    

  // set the pointee of yy's pointer to be 10000;  
  
  
  //print xx's data, pointer value, and pointee value   

  //print yy's data, pointer value, and pointee value  
  
  printf("------- struct with array member ------------------\n");

  struct intArr tt = {2, {100,200}};
  
  // set tt's arr member's 2nd element to be 400;  
  
  //print tt's data element, as well as array elements  
  

  printf("-------- struct and function -----------------\n");
  
  //print a's memebers
  processStruct(a);
  //print a's memebers again


  /****array of structures ******************************  */
  printf("--------- array of structs----------------\n");
  struct ints arr[3] = {{1,2}, {3,4}};
  // set the 3rd element structures's int1 and int2 to be 5 and 6
  
  int i;
  for (i=0; i<3 ;i++ )
  {
    // print each element structures  
  
  } 

}   

/*  this function intends to modify the member values of the argument 
structure x, which is of type struc ints  */
void processStruct(struct ints x){

  x.int1 ++;
  x.int2 +=100;
}

 
