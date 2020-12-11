/***********************************
* CSE2031 - Lab 7
* Filename: lab7.c
* Author: Last name, first name
* Email: Your email address
* cse_num: Your cse number
************************************/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 50
#define MAX_LEN 30

struct integers
{
  int int1;
  int int2;
};

struct node {  // list 'node' struct
   int data;
   struct node *next;
};


void init( );
void display();
int len();

void insert(int d );
void insertAfter(int key, int index);
void delete0 (int d);
void delete (int d);
void deleteEnh (int d);

int search(int);


struct node * head;   // global variable, the head of the linkedlist

int main()
{
    int i, key, index;

    struct integers arr[MAX_LEN]; // an array of ten structs

    char buffer[BUFFER_SIZE];
    int int1, int2;
    int count= 0;

    FILE * file;
    file = fopen("data.txt", "r");

    while (fgets(buffer, BUFFER_SIZE, file) != NULL)     // or  while (fscanf(file, "%d %d", &int1, &int2) == 2)
    {
       sscanf(buffer, "%d %d", &int1, &int2);   // tokenize buffer and store into int1 and int2

       arr[count].int1 = int1;
       arr[count].int2 = int2;
       count++;
    }

    fclose(file);

    /* print the array of structures */
    for(i=0; i< count; i++){
        printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
    }

    // now building up the list by reading from the array of structures
    printf("\n");
    init();

    i=0;
    for(; i< count; i++){
        struct integers current = arr[i];
        int value = current.int1 + current.int2;

       // printf("insert %d: (%d)", value, len());
        insert(value); printf("insert %d: (%d)", value, len());
        display();
    }

    int removeList [] = {0,1,2,3,  5,6,7,8,9, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=removeList[i]) != -10000){
        
	//printf("remove %d: (%d)", key, len());
        delete(key);
         printf("remove %d: (%d)", key, len()); display();
        i++;
    }

    // insert again
    int addList [] = {7,3,5,6,8,9, 2,0,1, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=addList[i]) != -10000){ 
        
        insert(key);
	printf("insert %d: (%d)", key, len());
        display();
        i++;
    }

    // insert after
    printf("\n");
    key =-4; index =2;
    insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display(); 

    key =-6; index = 0;
    insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display(); 
    key =-8; index = 6;
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();


    // search
    printf("\n");
    int searchList [] = {5,50,9,19,0,-4, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key = searchList[i++]) != -10000 ){
		 
        printf("search %3d ....  ", key);
        
        if (search(key))
            printf("found\n");
        else
            printf("not found\n");
        //i++;
    }


}

/* Initialize the list. */
void init( )
{
    head = NULL;
}


/* Display an error message on stderr. */

/*void prtError( char *errMsg )
{
    fprintf( stderr, "%s \n", errMsg );
}*/


int search (int key)
{
    struct node * current = head;

    while (current != NULL ){
       if (current->data == key)
         return 1; // found it!
       
       current = current -> next;
  }
  return 0;
}


/* Print the content of the list. */
void display()
{
    struct node *current = head;
    while (current != NULL){
       printf( "%4d", current->data );
       current = current -> next;
    }printf( "\n" );

}

/* return the length of the linked list */
int len()
{
    struct node * current = head;
    int count=  0;
    while (current != NULL)
    {
       count++;
       current = current -> next;
    }
    return count;
}




/* Insert a new data element with key d into the end of the list. */
void insert(int d )  //  at the end
{
    struct node * newP = malloc (sizeof(struct node));
    newP -> data = d;

    /* special case: list is empty, need to change head  */
    if (head == NULL){/* the list is empty */
        newP -> next = head;   // or newP->next = NULL
        head = newP;
    }
    else{  // general case, insert at the end.
        struct node * current = head;

        /* traverse to the end node */
        while (current -> next != NULL)
        {
            current  = current -> next;
        }
       /* now at the end node */
       newP-> next = current->next;  // or newP->next = NULL
       current-> next = newP;

    }

 }

/* assume the list is not empty */
/* insert a new node with data d after the node of index 'where'
void insertAfter(int d, int where )  //  insert in the middle
{
    struct node * newP = malloc (sizeof(struct node));
    newP -> data = d;

    struct node * current = head;

    int i = 0;
    while (i < where){
        current = current -> next;
        i++;
    }

    // now current points to node of 'where'
    /* insert between current  and current->next */
    newP->next = current->next;  // point to the one after current
    current->next = newP;

 }


/* Remove the node with value d from the list */
/* assume the list is not empty */
/* assume no duplicated keys in the list */
/* assume the node to be deleted is in the list */
/* also do not free the space */
void delete0(int d)
{
   /* special case: to be removed is the first, need to change head  */
   if (head -> data == d){
        head = head -> next;  // or  head = NULL
    }

   else  // general case, remove from the middle or the last
    {
        struct node * current = head;
        while ( current -> next-> data != d )
            current  = current  -> next;

        current -> next = current->next->next;  /* by pass the node to be deleted */
    }
}

/* lab version */
/* Remove the node with value d from the list */
/* do not assume the list is not empty. if empty, give error message  */
/* assume no duplicated keys in the list */
/* assume the node to be deleted is in the list */
/* free the space */
void delete(int d)
{
   
   if (len() == 0){

       fprintf(stderr, "empty");  /* send to stderr, using fprintf(stderr, ...)  */
       return; //exit(0);
   }
   /* special case: to be removed is the first, need to change head  */
   if (head -> data == d){
        struct node * tmp = head;
        head = head -> next; // or head = NULL
        
        free(tmp);
    }

   else  // general case, remove from the middle or the last
    {
        struct node * current = head;
        while ( current -> next-> data != d )
            current  = current  -> next;
        
        struct node * tmp = current -> next;
        current -> next = current->next->next;  /* by pass the node to be deleted */
        free(tmp);
    }
}




/* This enhanced version does not assume the list is non-empty, and do not assume the node to be deleted is in the list, also free 
the space occupied by the deleted node */

/* Remove the node with value d from the list */
/* assume no duplicated keys in the list */
/* assume that the list might be empty. If the list is empty, display an error message and return -1. */
/* the node to be deleted might not in the list. In this case, nothing happens.
/* free the space */

void deleteEnh(int d)
{
   if (len() == 0){

       fprintf(stderr, "empty");  /* send to stderr, using fprintf(stderr, ...)  */
       return; //exit(0);
   }

   /* special case: to be removed is the first  */
   if (head -> data == d)
   {
       struct node * tmp = head;
       head = head -> next;
       free(tmp);
    }
    else{  // general case,
        struct node * current = head;
        
        /* since we don't assume that the node is in the list, need to check current->next !=NULL, as we might end up 
        at the last node (when not found) */
        while ( current -> next != NULL && current -> next-> data != d ) 
            current  = current  -> next;

        // now out of loop, two cases: might at the last node current->next == NULL (not found), 
        // or before the one to be deleted (found) current->next ->data == d
        if (current -> next != NULL){   // current->next->data=d, found, now before it, to delete it
           struct node * tmp = current -> next;
           current -> next = current->next->next;  /* by pass the node to be deleted */
           free (tmp);
        }
        //else  current -> next == NULL, at the last node, not found, do nothing!
    }

}
