
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROW 30
#define COLUMN 20
//scanf  +   puts,   not encouraged. To read a line with blanks, use fgets() instead.

int main(int argc, char *argv[])
{
        char inputs[ROW][COLUMN];
        
        int count = 0; int i;
        char name[10]; 
        int  age;
        float wage;
        
	
        printf("Enter name  age and wage: ");
        scanf(" %[^\n]s",inputs[count]);
       
        while(1)        
        {   
           
	  /* tokenize the string to get value of name, age and wage */    
          sscanf(inputs[count],"%s %d %f", name, &age, &wage); 
          if (! strcmp(name, "xxx") ) break;
          // or,  if(inputs[count][0]=='x' && inputs[count][1]=='x' && inputs[count][2]=='x') break;

          age += 10;
          wage *= 1.5;
	   
          for(i=0; i< strlen(name); i++){
            name[i] = toupper(name[i]);
         } 
	     
         sprintf(inputs[count+1], "%s %d %.2f", name,age,wage);
         count += 2;
		   
         printf("Enter name age and wage: ");
         scanf(" %[^\n]s",inputs[count]);
          
           
       }
       
       printf("\nrecords generated in %s %s %s\n", __FILE__, __DATE__, __TIME__);
       for(i=0; i< count; i++)
         puts(inputs[i]);
        //fputs(inputs[i],stdout); // or printf("%s\n", inputs[i]);
   
       return 0;
}

