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


void processStruc   (struct ints);
void processStruc2 (struct ints *); // correct version

main()
{
  printf("----------- simple struc --------------\n");
  struct ints a = {32,4};
  a.int1 = 100;

  struct ints b = a;
  
  printf("a: %d %d\n",  a.int1, a.int2);
  printf("b: %d %d\n", b.int1, b.int2);
  
  b.int1 = 700;
  printf("Enter value for b.int2: ");
  scanf("%d", &b.int2);
  
  printf("a: %d %d\n",  a.int1, a.int2);
  printf("b: %d %d\n", b.int1, b.int2);
  
  printf("------- struc with pointer member -----------------\n");

  struct intPtr xx; 
  xx.data = 5;
  int c = 100;   xx.pp = &c;
  
  struct intPtr yy = xx;
  printf("xx: %d %p %d\n", xx.data, xx.pp, *xx.pp); 
  printf("yy: %d %p %d\n", yy.data, yy.pp, *yy.pp);   

  *yy.pp = 10000;
  printf("\nxx: %d %p %d\n", xx.data, xx.pp, *xx.pp);
  printf("yy: %d %p %d\n", yy.data, yy.pp, *yy.pp);
 
  printf("------- struct with array member ------------------\n");

  struct intArr tt = {2, {100,200}};
  
  tt.arr[1] = 400;
  
  printf("%d [%d %d]\n", tt.data, tt.arr[0], tt.arr[1]);
  
  printf("-------- struct and function -----------------\n");

  printf("struct a before process: %d %d\n", a.int1, a.int2);
  processStruc(a);
  printf("struct a after  process: %d %d\n", a.int1, a.int2);  
  processStruc2(&a);
  printf("struct a after  process2: %d %d\n", a.int1, a.int2);


  /**********************************  */
  printf("--------- array of structs ----------------\n");
  struct ints arr[3] = {{1,2}, {3,4}};
  arr[2].int1 = 5;
  arr[2].int2 = 6;
  int i;
  for (i=0; i<3 ;i++ )
  {
      printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
  }

  

}   

/* call by value  */
void processStruc(struct ints x){

  x.int1 ++;
  x.int2 +=100;
}

/* the correct version */
void processStruc2(struct ints *x){

  x -> int1 ++;
  x -> int2 += 100;
}

