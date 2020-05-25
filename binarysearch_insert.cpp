#include<stdio.h>
#include<stdlib.h>

int count=0;
struct node{
    int key;
    struct node *left;
   struct node *right;
};
 
struct node* treeInsert(struct node* r, int x){
   if(r== NULL){ 
      struct node *tmp=(struct node *)malloc(sizeof(struct node)); 
      tmp->key=x; 
       tmp->left = tmp->right = NULL;
      return tmp;
   }
    if(x < r->key){ 
      r->left=treeInsert(r->left,x);  
      count++;
      return r;
   }
   else if(x > r->key){
      r->right=treeInsert(r->right,x);
      count++;
      return r;
   }
}

int main()
{
    int n,tree[100];
    struct node *r= NULL;
   
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d",&tree[i]);   
       r=treeInsert(r,tree[i]);   
       count++;
   }
   printf("%d",count);
   
    return 0;
}
