#include <stdio.h>
#include <string.h>

#define SIZE 10

/*counting digits*/
int main () {

 int k[SIZE]= {0}; //{3,5}; //={3,5,6};
 int i=0;
 for (i=0; i< SIZE; i++)  
   printf("k[%d]: %d\n", i, k[i]);


 char msg[]="Hello world";
 printf("\nmsg: %s\n", msg);
 printf("memory size of msg:%d (bytes)\n", sizeof(msg));
 printf("strlen of msg:%d\n", strlen(msg));
 for (i=0; i<sizeof(msg);i++)
   printf("msg[%d] %d %c\n", i, msg[i], msg[i]);

 char msg2[2*SIZE] = "Hello world";
 printf("\nmsg2: %s\n", msg2);
 printf("size of msg2:%d (bytes)\n", sizeof(msg2));
 printf("strlen of msg2:%d\n", strlen(msg));
 for (i=0; i<sizeof(msg2);i++)
   printf("msg2[%d] %d %c\n", i, msg2[i], msg2[i]);


 char msg3[2*SIZE];
 printf("\nEnter a string: ");
 scanf("%s",msg3);
 printf("msg3: %s\n",msg3);
 printf("size of msg3:%d (bytes)\n", sizeof(msg3));
 printf("strlen %d\n", strlen(msg3));
 for (i=0;i<sizeof(msg3);i++)
 { 
   printf("msg3[%d] %d %c\n", i, msg3[i],msg3[i]);
 } 

return 0;
}

