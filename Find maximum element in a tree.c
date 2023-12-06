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

Tree find_max(Tree T){
    if(T==NULL)
        return NULL;
    else if(T->right==NULL){
        printf("\n the max value is %d",T->element);
        return T;
    }
    else
        return find_max(T->right);
}
void main(){
int el;
printf("\n Enter the element");
                 scanf("%d",&el);
                 T=insert(el,T);
find_max(T);
} 
