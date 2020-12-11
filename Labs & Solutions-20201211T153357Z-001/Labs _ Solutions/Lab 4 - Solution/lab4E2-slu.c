
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30


int main(int argc, char *argv[])
{
        char inputs[ROWS][COLUMNS];
        
        int current_row = 0; int i;
        char name[10]; 
        int age; 
        float wage;
        
	 
	
        printf("Enter name age and wage: ");
        fgets(inputs[current_row], 30, stdin);   // read dirctly into table row.  add a /n
       
        while(1)        
        { 
	   // tokenize the string, getting values of name, age and wage
           sscanf(inputs[current_row],"%s %d %f", name, &age, &wage); 
	   if (! strcmp(name, "xxx")) break;
           //or just if inputs[current_row][0]=='x' && inputs[current_row][1]=='x' && inputs[current_row][2]=='x') break;

           age += 10;
           wage *= 1.5;
	   
           for(i=0; i< strlen(name); i++){
              name[i] = toupper(name[i]);
           }
	     
           sprintf(inputs[current_row+1], "%s %d %.2f\n", name,age,wage);
           current_row += 2;
		   
           // read again, directly into 'next next' row
           printf("input name age and wage: ");
           fgets(inputs[current_row], 30, stdin);
          
           
        }
       
        printf("\nrecords generated in %s %s %s\n", __FILE__, __DATE__, __TIME__);
        for(i=0; i< current_row; i++)
           //puts(inputs[i]); or 
           //fputs(inputs[i],stdout); // or 
           printf("%s", inputs[i]); // no /n needed

       return 0;
}

