/*
Singly Linked List 
*/

#include<stdio.h> 
#include<stdlib.h>

//defining custom data type
struct node
{
    int data;//to store data
    struct node *next;//to store link
};
typedef struct node node;

//defining operations

node * create() //to create a linked list
{
    node *h;
    node *n, *p;
    char ch;
    
    h = NULL;//important initialization
    
    do
    {
        //memory allocation : node gets created
        n = (node *) malloc(sizeof(node));
        
        //initialization
        printf("\n enter data for node ");
        scanf("%d", &n->data);
        n->next = NULL;

        //connection
        if(h == NULL)
        {//first cycle
            h = n;
            p = n;
        }
        else
        {//rest of the cycles
            p->next = n;
            p = n;
        }//else
        
        printf("\n Add More Nodes ? ");
        fflush(stdin);
        scanf("%c", &ch);
        
    }while(ch == 'y' || ch == 'Y');

    return h; //address of first node (head node)
}//create

//operation to display the content of the linked list
void display(node *h)//received address of head node of linked list as a formal parameter
{
    //using h traverse the list and display its nodes
    node *p;
    p = h;
    printf("\n");
    
    while(p != NULL)
    {//on true
        printf(" %d ", p->data);
        p = p->next;
    }//while

}//display

//operation to count the number of nodes in the linked list
int count(node *h)
{
    int cnt = 0;//important to set it as ZERO
    node *p;
    p = h;
    
    while(p != NULL)
    {
        cnt++;
        p= p->next;
    }
    
    return cnt;
}

//operation to display the content of the linked list in reverse
void reverseDisplay(node *h)
{
    int cnt, i, j;
    node *p;
    //fetch the number of nodes in the linked list
    cnt = count(h);
    
    printf("\n");
    for(i = 1; i<= cnt; i++)
    {
        p= h;//at the first node
        //jumps
        for(j = 1; j<= cnt-i ; j++)
            p = p->next;
        //output
        printf(" %d ", p->data);
    }//for(i...
}

//operation to search a value in the linked list
node * search(node *h, int val)//sequential search
{
    node *p; 
    
    p = h;//begin with head node

    while(p != NULL)//continue until end of the list
    {
        if(p->data == val)//comparison for equality
        {
            return p;//stop the search with found status
        }
        p = p->next;//sequential movement
    }//while
    
    return NULL;//return not found status
}

//operation to insert a new node in the linked list
node * insertNode(node *h)
{
    int pos, tot, i;
    node *n, *p, *q;
    
    //1. input
    printf("\n Enter the position of new node ");
    scanf("%d", &pos);
    
    //2. validate the position
    tot = count(h);
    if(pos < 1 || pos > (tot+1) )
    {
        printf("\n INVALID POSITION");
        return h; //terminate the function
    }

    //3. make a node
    n = (node*) malloc(sizeof(node));
    printf("\n enter data for node ");
    scanf("%d", &n->data);
    n->next = NULL;
            
    //4. connect
    if(pos == 1)
    {//new node will become the head node
        n->next = h;
        h = n;
    }
    else
    {//new node will become the intermediate /tail node
        q = h;//at position 1
        for(i = 1; i< pos; i++)
        {
            p = q;
            q = q->next;
        }
        
        //p is at node : pos -1
        //q is at node : pos
        //connect
        p->next = n;
        n->next = q;
    }
    return h;
    
}//insertNode

//operation to delete a node from the linked list
/*
deleteNode()
{}*/


int main()
{
    int x;
    
    node *head = NULL;
    
    head = create();
    //now head refers to head node of linked list
    
    //display it
    display(head);
    
    //count it
    x = count(head);
    printf("\n List has %d nodes ", x);
            
    //reverse display it
    reverseDisplay(head);
    
    //insertNode
    head = insertNode(head);
    return 0;
}
