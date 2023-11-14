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

void delmid(){
node temp=start,new;int e;
new=(node)malloc(sizeof(node));
printf("\n enter the value");
scanf("%d", &new->element);
printf("enter the position");
scanf("%d", &e);
while(temp->next!=NULL){
if(temp->next->element==e)
    break;
temp=temp->next;
} 
prev=temp->next;
new->next=temp->next;
prev->prev=new;
temp->next=new;
new->prev=temp;
free(prev);
} 
void main(){
create();
insmid();
}  
