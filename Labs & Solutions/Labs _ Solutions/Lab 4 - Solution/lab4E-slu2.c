#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

 
#define ROWS 20
#define COLUMNS 30

// read in string, int and float. Easier than reading three strings.
int main(int argc, char *argv[])
{
	char inputs[ROWS][COLUMNS];
        
	int current_row = 0; int i;
        char name[10]; 
        int age; 
        float wage;
   
		
        printf("Enter name age and wage: ");
        scanf("%s %d %f", name, &age, &wage); 
       
        while (strcmp(name,"xxx"))     
        {  
	   
           // form a string and write to current row
           sprintf(inputs[current_row], "%s %d %.2f", name, age,wage);  /* format and print/write to current row */	   
           	   
           age += 10; 
           wage = wage *1.5;
 
	   
           for(i=0; i< strlen(name); i++){
             name[i] = toupper(name[i]);
           } 
	   
           sprintf(inputs[current_row + 1], "%s %d %.2f", name,age,wage);  /* format and print/write to next row */

           /* read again */
           printf("Enter name age and wage: ");
	   scanf("%s %d %f", name, &age, &wage );
           
           current_row += 2;
           
       }
       
       printf("\nrecords generated %s %s %s\n", __FILE__, __DATE__, __TIME__);
       
       // output the table row by row
       for(i=0; i< current_row; i++)
          printf("%s\n",inputs[i]);
      

       return 0;
}

