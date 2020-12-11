#include <stdio.h>
#include <math.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)


void r_avg(void);
extern double resu; 
extern int count;  
extern int sum;


int main(int argc, char *argv[])
{

    int input;

    printf("enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
      count ++;
      sum += input;
      r_avg();

      MY_PRINT(sum, count, resu);

      // read again
      printf("enter number (-1 to quit): ");
      scanf("%d", &input);
	
     }
	 
     return 0;
}

