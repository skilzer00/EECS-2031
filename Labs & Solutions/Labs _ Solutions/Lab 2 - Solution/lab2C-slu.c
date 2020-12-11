#include <stdio.h>

#include <string.h>

#define MAX_SIZE 20


int indexOf(char[], char);
int length(char[]);
int isQuit(char []);
 

main() {

   char word[MAX_SIZE];
   char c;

   char helloArr[]  = "hello";
   printf("\"%s\" contains %d input characters, but the size of it is %d (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));

   /********** Fill in your code here. **********/
   printf("Enter a word and a character separated by blank>");
   scanf("%s %c", word, &c);

   while (! isQuit(word))  // != 'quit' does not work   
   {  
    printf("Input word is \"%s\". Contains %d input characters. Index of '%c' in it is %d\n\n", word,length(word),c,  indexOf(word, c));
   
    printf("Enter a word and a character separated by blank>");
    scanf("%s %c",word, &c);
  }
}

int length(char arr[]){
  int i;
  for(i=0; arr[i]!= '\0'; i++)
    ;
  return i;
}

int indexOf(char arr[], char c){
 int i;
 for(i=0; arr[i]!= '\0'; i++)
 { 
   if(arr[i] == c)
     return i;
 }
  
 return -1;
 
}


int isQuit (char arr[]){

 int i;
 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t' && arr[4]=='\0')
  return 1; 
 else return 0;
}

/* wrapper for strcmp 
 int isQuit (char arr[]){

 int i;
 if ( ! strcmp(arr, "quit"))
    return 1;
 else return 0;
}*/

