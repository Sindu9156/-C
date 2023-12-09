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
Tree search(int n,Tree T){
    if(T==NULL)
        printf("no elements");
    if(n<T->element)
        return search(n,T->left);
    else if(n>T->element)
        return search(n,T->right);
    else{
        printf("the %d element found",T->element);
        return T;
    }
}


void main(){
int el,e;
printf("\n Enter the element");
                 scanf("%d",&el);
                 T=insert(el,T);
printf("\n Enter the element to search ");
scanf("%d",&e);
search(e,T);
} 
