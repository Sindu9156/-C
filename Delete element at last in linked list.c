#include<stdio.h>
#include<stdlib.h>
typedef struct node1 *node;
struct node1
{
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
            if(start==NULL)
                start=new;
            else
            {
                temp=start;
                while(temp->next!=start)
                    temp=temp->next;
                temp->next=new;
            }
            printf("\n do you want to continue, press 1");
            scanf("%d",&c);
       }while(c==1);
}
void delend() {
      node temp=start,prev;
      while(temp->next! =start) 
      {
              prev=temp;
              temp=temp->next;
      } 
prev->next=start;
      free(temp) ;
} 
void main(){
  create();
delend();
} 
       
