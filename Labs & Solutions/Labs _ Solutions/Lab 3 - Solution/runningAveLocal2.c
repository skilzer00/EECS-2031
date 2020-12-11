#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("macro running average is %d / %d = %.3f\n", x,y,z)


double r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  

   // illustrate use of do while loop, assuming the first input is not -1
   do{
        printf("enter number (-1 to quit): ");
        scanf("%d", &input);
        r_avg(input);
     }while(input != -1);
	
    return 0;
}

double r_avg(int currentInput)
{
    static int localSum; 
    static int localCount;
    
    localSum += currentInput;
    localCount ++;
    double resu = (double)localSum/localCount;
    MY_PRINT(localSum, localCount, resu);
    return resu;
     
}
