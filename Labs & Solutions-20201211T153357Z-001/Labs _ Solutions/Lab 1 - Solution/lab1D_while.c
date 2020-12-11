#include <stdio.h>

/* function declaration */
 float sum(float, float); 

main()
{
  
   int n;
   printf("# of iteration: ");
   scanf("%d", &n);
   int i;
   while( i<n ){
      printf("enter 2 floats separated by ##: ");
      float x, y;
      scanf ("%f##%f", &x,&y);
      float su= sum(x,y);
      printf( "%f + %f = %f\n", x,y, su);

      i++;
   }
}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
