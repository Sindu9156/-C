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
printf("\n enter the total value ");
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
while(temp.next)
temp=temp.next;

temp.next=new;

}

pos--;
}

}

void main(){
create();
}
