#include <stdio.h>  // for sprintf
#include <ctype.h>  // for toupper
#include <string.h> 
#include <stdlib.h> // for atoi atof
#include <math.h> // for floor ceil

#define SIZE 20
#define SIZE2 40

int main(int argc, char *argv[])
{

         
    char name[SIZE], wage[SIZE],  age[SIZE];
    char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];
	
    printf("Enter name, age and wage (xxx to quit): ");
    scanf("%s %s %s", name, age, wage);
    while (strcmp("xxx", name))
    {       
        int ag = atoi(age) + 10;
        double wag = atof(wage) * 2;
        name[0]=toupper(name[0]);
	 
        // sprintf(resu, "%s-%d-%.3f-[%.0f,%.0f]", name,ag,wag, floor(wag), ceil(wag));  /* format and then print/write to  resu */
        // another way, use cast 
        sprintf(resu, "%s-%d-%.3f-[%d,%d]", name,ag,wag, (int)floor(wag), (int)ceil(wag));  /* format and then print/write to resu */      
        
        strcpy(resu2, resu);
        sprintf(resu3, "%s", resu);   /* or just sprintf(resu3, resu);  */

        printf("%s\n%s\n%s\n\n", resu, resu2, resu3);

        /* read again */
        printf("Enter name, age and wage (xxx to quit): ");
        scanf("%s %s %s", name, age, wage);
	
     } 
     return 0;
}
