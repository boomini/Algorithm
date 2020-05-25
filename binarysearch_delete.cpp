//이진검색트리 삭제 
#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int key;
    struct node *left;
    struct node *right;
};
  
struct node* treeInsert(struct node* r, int x){
    if(r== NULL){  //트리가 비었을 경우 노드생성  
        struct node *tmp=(struct node *)malloc(sizeof(struct node)); //동적할당하여 노드생성  
        tmp->key=x; 
        tmp->left = tmp->right = NULL;
        return tmp;
    }
    if(x < r->key){ //왼쪽에 x넣음 (루트값보다작으면)
        r->left=treeInsert(r->left,x);  
        return r;
    }
    else if(x > r->key){
        r->right=treeInsert(r->right,x);
        return r;
    }
}
 
struct node* treeDelete(struct node* r, int x){
    if (r == NULL) return r;
 
    if (x< r->key) r->left=treeDelete(r->left, x);
    else if (x> r->key)  r->right=treeDelete(r->right, x);
  
    else{
        if (r->left == NULL){
            struct node *tmp = r->right;
            free(r);
            return tmp;
        }
        else if (r->right == NULL){
            struct node *tmp = r->left;
            free(r);
            return tmp;
        }
    struct node *cur=r->right; 
    while (cur->left != NULL)  cur=cur->left; //리프노드까지 내려감   
 
    r->key=cur->key;
    r->right=treeDelete(r->right, cur->key);
    }
    return r;
}
 
void preorder(struct node *r){ //전위순회 
    if (r!= NULL){
        printf("%d ",r->key);
        preorder(r->left);
        preorder(r->right);
    }
}
void inorder(struct node *r){ //중위순회 
    if (r!= NULL){
        inorder(r->left);
        printf("%d ",r->key);
        inorder(r->right);
    }
}
void postorder(struct node *r){ //후위순회 
    if (r!= NULL){
        postorder(r->left);
        postorder(r->right);
        printf("%d ",r->key);
    }
}
 
int main()
{
    int n,k,p,x,bts[100];
    struct node *r= NULL;
    
    scanf("%d",&n); //삽입할 개수 
    for(int i=0;i<n;i++){
        scanf("%d",&bts[i]);    
        r=treeInsert(r,bts[i]); 
    }
    scanf("%d",&k);//삭제할 개수 
     
    for(int i=0;i<k;i++){
        scanf("%d",&p); //순회방법 
        scanf("%d",&x); //삭제할 원소 
        treeDelete(r, x);
         
        if(p==0)  preorder(r);
        else if(p==1) inorder(r);
        else if(p==2) postorder(r);
        printf("\n");
    }   
    return 0;
}
