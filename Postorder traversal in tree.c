#include<stdio.h>
typedef struct tree *Tree;
struct tree{
Tree left,right;
int element;
} 
Tree T=NULL;

Tree insert(int x,Tree T){
    if(T==NULL){
        T=(Tree)malloc(sizeof(Tree));
        T->element=x;
        T->left=NULL;
        T->right=NULL;
    }
    else if(x<T->element)
        T->left=insert(x,T->left);
    else if(x>T->element)
        T->right=insert(x,T->right);
    return T;
}
void postorder(Tree T){
    if(T!=NULL){
        postorder(T->left);
        postorder(T->right);
        printf("\n %d",T->element);
        
    }
}


void main(){
int el,e;
printf("\n Enter the element");
                 scanf("%d",&el);
                 T=insert(el,T);
postorder(T);
} 
