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
void preorder(Tree T){
    if(T!=NULL){
        printf("\n %d",T->element);
        preorder(T->left);
        preorder(T->right);
    }
}


void main(){
int el;
printf("\n Enter the element");
                 scanf("%d",&el);
                 T=insert(el,T);
preorder(T);
} 
