#include <stdio.h>
#include <string.h>

#define SIZE 30

int isPalindrome (char[]);

void reverse(char *);


main (){
   char str[SIZE];

   scanf("%s", str);

   while (strcmp(str, "quit")){
    // print backward
     int l = length(str) -1;
     while (l >=0)
       printf("%c", str[l--]);
     printf("\n");

     if (isPalindrome(str))
       printf("Is a palindrome\n\n");
     else printf("Is not a palindrome\n\n");

     // read agin
     scanf("%s", str);

   }     

   return 0;
}

int length(char str[] ){
   int i=0;
   while (str[i] != '\0')
     i++;
   return i;
}

int isPalindrome (char str[])
{
   int i;
   int length = strlen(str);
   if (length <= 1) return 1; // no more chars to compare, its palindrome

   int left = 0; int right = length-1;
   
   for (i=0; i<length/2; i++) // half is enough!
   {
      if ( str[left] != str[right])  
       return 0;
      left++;
      right--;
   }	 
   return 1;
}

// another way of writting the loop condition, and use ++ -- to simiply code
int isPalindrome2 (char str[])
{
   int i;
   int length = strlen(str);
   if (length <= 1) return 1; // no more chars to compare, its palindrome

   int left = 0; int right = length-1;

   while ( left < right) // half is enough!
   {
      if ( str[left++] != str[right--])  
       return 0;
   }
   return 1;
}


