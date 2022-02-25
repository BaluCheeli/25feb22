#include<stdio.h>
#include<stdlib.h>

void push();
void display();
void pop();

struct node{
int data;
struct node *link;
};



int main()
{
struct node *root=NULL;    //root(head) is intially making the null pointer
push(&root,10);           //passing  the root(address) and the data
push(&root,20);
push(&root,30);
display(&root);
pop(&root);
pop(&root);
pop(&root);

return 0;
}

void push(struct node **root_arg,int ndata)
{
struct node *temp;            
temp=(struct node *)malloc(sizeof(struct node));   //dynamic memory is created in the name of temp
if(temp==NULL)                                     //checking whether the created ptr is allocated dynamic memory or not (on success it return                                                     the base address  /           on failure it returns the null)
{
printf("Memory is not allocated\n");
}
              else
              {
		    temp->data=ndata;              //ndata is copied in to the temp->data
		    temp->link=NULL;               //making the link null
		  if(*root_arg==NULL)              //checking the condition if root_arg is null
		  {
                   *root_arg=temp;                 //then data present in the temp is assigned to root varible(head)
		  }
		  else                             //data is presented in the root(head)
		  {
			  temp->link=*root_arg;     //
			  *root_arg=temp;
		  }
printf("inserted element is %d\n",temp->data);  
             }

}

void pop(struct node **root_arg)
{
if(*root_arg==NULL)                                          //checking whether the root_arg is empty or not
printf("stack is empty\n");                                  //condition is true 
else                                                         //if root_arg is not empty
{
	struct node *temp=*root_arg;                         //top one is assigned to temp 
        *root_arg=temp->link;                                //then the link holds the 2nd one 
	printf("poped element is %d\n",temp->data);          //before freeing we are printing the data which is about being deleted
        free(temp);                                 //we are freeing  the temp variable which currently holds the current position of root_arg
}
}

void display(struct node **root_arg)
{
if(*root_arg==NULL)                                          //if it is null then there is nothing to print bcs its empty
	printf("list is empty\n");
else                                                         //if it contains some data
{
printf("stack elements are\n");  
struct node *temp = *root_arg;                               //a new temp* variable is assigned the current position of root(head)
while(temp!=NULL)                                            //checking condition to print 
{
printf("%d\n",temp->data);                                    //printing the data present in the temp 
temp=temp->link;                                              //and passing the control to the next one to print the value
}
printf("\n");
}
}
