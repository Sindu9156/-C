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
Tree delete(int x,Tree T){
    Tree temp,child;
    if(T==NULL)
        return NULL;
    else if(x<T->element)
        T->left=delete(x,T->left);
    else if(x>T->element)
        T->right=delete(x,T->right);
    else if(T->left&&T->right){
        temp=find_min(T->right);
        T->element=temp->element;
        T->right=delete(T->element
        ,T->right);
    }
    else{
        temp=T;
        if(T->left==NULL)
            child=T->right;
        if(T->right==NULL)
            child=T->left;
        free(temp);
        return child;
    }
}


void main(){
int el,e;
printf("\n Enter the element");
                 scanf("%d",&el);
                 T=insert(el,T);
printf("\n Enter the element to delete ");
scanf("%d",&e);
search(e,T);
} 
