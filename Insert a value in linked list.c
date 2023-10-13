typedef struct node1 *node;
struct node1{
int element;
node next;
}
node start;
void insert(){
node new;
int pos;
node temp;
new=(node)malloc(sizeof(node));
printf("\n enter the element");
scanf("%d",&new->element);
new->next=NULL;
printf("\n enter the position element befor the element insert");
scanf("%d",&pos);
temp=find(pos);
if(temp!=NULL)
temp->next=new;






}
