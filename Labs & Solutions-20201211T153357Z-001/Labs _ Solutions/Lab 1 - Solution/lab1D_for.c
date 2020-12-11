#include <stdio.h>

/* function declaration */
 float sum(float, float); 

main()
{
  
   int n;
   printf("# of iteration: ");
   scanf("%d", &n);
   int i;
   for (i=0; i<n; i++){
      printf("enter 2 floats separated by ##: ");
      float x, y;
      scanf ("%f##%f", &x,&y);
      float su= sum(x,y);
      printf( "%f + %f = %f\n", x,y, su);
   }
}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
