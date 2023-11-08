#include<stdio.h>
#include<stdlib.h>
typedef struct node1 *node;
struct node1
{
    node prev;
    int element;
    node next;
};
node start=NULL;
void create()
{
    int c;
    node new,temp;
    do{
            new=(node)malloc(sizeof(node));
            printf("\n Enter the element for list");
            scanf("%d",&new->element);
            new->next=NULL;
            new->prev=NULL;
            if(start==NULL)
                start=new;
            else
            {
                temp=start;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=new;
                new->prev=temp;
            }
            printf("\n do you want to continue, press 1");
            scanf("%d",&c);
       }while(c==1);
}

void delbeg(){
node temp=start;
start=start->next;
start->prev=NULL;
temp->next=NULL;
} 
void main(){
create();
delbeg();
}  
