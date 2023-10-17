typedef struct node1 *node;
struct node1{
int element;
node next;
}
node start;
void create(){
node new;
int pos;
node temp;
printf("\n enter the total number of value");°
scanf("%d",&pos);
while(pos>0){
new=(node)malloc(sizeof(node));
printf("\n enter the element");
scanf("%d",&new->element);
new->next=NULL;

if(start==NULL)
start=new;
else{
temp=start;

while(temp->next!=NULL)
  temp=temp->next;
temp=new;
} 
pos--;
}



}
void delete(){
int e;
node temp=start;
printf("\n enter the element to delete");
scanf("%d",&e);
if(start->element==e)
   start=start->next;
else{
while(temp->next){
if(temp->next->elemet==e)
temp->next=temp->next->next;
temp=temp->next;
}
}
} 

void main(){
create();
delete()
} 
