
#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)


double r_avg(int, int);


int main(int argc, char *argv[])
{
	
    int input; int count=0; int sum=0;

    printf("enter number (-1 to quit):  ");
    scanf("%d", &input);
     
    while(input != -1)
    {
       count ++;
       sum += input;

       double resu = r_avg(sum, count); 
       MY_PRINT(sum, count, resu);
 	       
       printf("enter number (-1 to quit):  ");
       scanf("%d", &input);
	
    }
    return 0;
  }

double r_avg(int sum, int count)
{
    return 1.0 * sum/count; // or better, (double)sum/count  or sum/(double)count
}
