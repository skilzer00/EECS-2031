#include <stdio.h>
#include <string.h>

#define SIZE 40

int isPalindrome (char *);
void printReverse (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (  strcmp(arr,"quit\n"))
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);
   
      result = isPalindrome (arr);
      if (result==1) 
         printf ("\nIs a case-insensitive palindrome.\n\n");
      else 
         printf ("\nNot a case-insensitive palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    
    return 0;
}


int isPalindrome (char * str)
{
  int i;
  int lenght = strlen(str);
  if (lenght <1) {
    return 1;
  }
  else {
    for (int i = 0; i < lenght/2; i++)
    {
      char a = toupper( *(str+i) );
      char b = toupper( *(str + lenght-1-i));
      if (a != b)
        return 0;
    }
  }
  return 1;
}

// assume the \n was removed manually
void printReverse(char * str){
  int i = strlen(str) -1;
  while ( i >=0 ){
     printf("%c", *(str+i) );  // or  putchar(*(str+i));
     i--;
  }
}

