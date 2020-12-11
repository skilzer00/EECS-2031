#include <stdio.h>

int isLeap(int);

int coutDays(int, int);

int main(){ 

   char input[30];
   int i; int dates;
   int day, year, month;

   printf("Enter 'month-date year': " );
   fgets(input, 30, stdin);  /* read in the whole line */

   while (strcmp(input,"quit\n"))
   {
     sscanf(input, "%d-%d %d", &month,  &day, &year);
    
     /* manipulate the input, count days and display */ 
     dates = countDays(year, month, day);

     printf("%d days of year %d have elapsed\n\n", dates,year);

     //read again
     printf("Enter 'month-day year': " );
     fgets(input, 30, stdin);  /* read in the whole line */


  }
 
  return 0;
}


int countDays(int y, int m, int d){
  int i;
  int resu = 0; 

  /* count days until end of last month */
  for(i=1; i<m; i++){
    if (i==2){
        if (isLeap(y))
         { resu += 29;} // one more
        else resu +=28;
    }
    else if(i % 2 ==0)  // Apr, June, Aug, Oct, Dec
	resu +=30;
    else resu +=31;  // Jan, Mar, May, July, Sep, Nov
  }
  resu += d; // add days in current month 
 
  return resu;

}


