// Inputs a list of strings from the keyboard, sorts t
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAXLINES 30

 void exchange(char p[][50]);
 void printArray(char p[][50], int);

 main()
 {
     int count=0;  char lines[MAXLINES][50];
 
     /* Read in the lines from the keyboard. */
     printf("Enter string: ");
     fgets(lines[count], 50, stdin);
     
     while (strcmp("xxx\n", lines[count]) !=0 )
     {
     
       count++;
       
       printf("Enter string: ");
       fgets(lines[count], 50, stdin);
     
     }
     printf("\n");
     printArray(lines, count);

     char tmp[50];
     strcpy(tmp,lines[0]);
     strcpy(lines[0],lines[1]);
     strcpy(lines[1], tmp);

     exchange(lines);

     printf("\n== after swapping ==\n");
     printArray(lines, count); 

     
     return 0;
 }


 // do exchange, have to involve data movement (e.g., strcpy)
 void exchange(char p[][50])
 {
     int a, b;
     char tmp[50];
     strcpy(tmp,p[2]);
     strcpy(p[2],p[3]);
     strcpy(p[3], tmp);


     strcpy(tmp,p[4]);
     strcpy(p[4],p[5]);
     strcpy(p[5], tmp);
 }

 void printArray(char p[][50], int n)
 {
     int count;

     for (count = 0; count < n; count++)
        printf("[%d]: %s", count, p[count]);
 }
