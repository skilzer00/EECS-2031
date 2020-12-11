#include <stdio.h>
#include <stdlib.h>

int len();
void insertBegin(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

main()
{
   head = NULL;

  
  insertBegin(100);
  insertBegin(200);
  insertBegin(300);
  insertBegin(400);
  insertBegin(500);


  printf("%d\n", len() );
  int i; 
  struct node * cur;
  for(cur= head; cur != NULL; cur= cur->next)
    printf("%d ", cur->data);
  printf("\n");  
}   

int len(){
  int count = 0;
  struct node * curr;
  curr = head;
  while (curr != NULL){
    count ++;
    curr = curr -> next;
  } 
  return count;

}

void insertBegin(int dat){

 /*  struct node newNode;
   newNode.data = dat;
   newNode.next = head;
   head = &newNode;*/

   
   struct node * newP;
   newP = malloc(sizeof(struct node));
		
   newP -> data = dat; // (*newP).data = dat;
   newP -> next = head;
   
   head = newP;

}

/*  H1 does not work, becasue the node structure is created in STACK, which is deallocated when the function returns to main.
    We need space in Heap instead.
    Simiar implementation in Java works, since we use new to construct the node, 'new' is the way to request to HEAP so the node is created in HEAP.
    malloc/calloc is the way to request HEAP in C. */
