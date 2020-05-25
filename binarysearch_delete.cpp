//�����˻�Ʈ�� ���� 
#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int key;
    struct node *left;
    struct node *right;
};
  
struct node* treeInsert(struct node* r, int x){
    if(r== NULL){  //Ʈ���� ����� ��� ������  
        struct node *tmp=(struct node *)malloc(sizeof(struct node)); //�����Ҵ��Ͽ� ������  
        tmp->key=x; 
        tmp->left = tmp->right = NULL;
        return tmp;
    }
    if(x < r->key){ //���ʿ� x���� (��Ʈ������������)
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
    while (cur->left != NULL)  cur=cur->left; //���������� ������   
 
    r->key=cur->key;
    r->right=treeDelete(r->right, cur->key);
    }
    return r;
}
 
void preorder(struct node *r){ //������ȸ 
    if (r!= NULL){
        printf("%d ",r->key);
        preorder(r->left);
        preorder(r->right);
    }
}
void inorder(struct node *r){ //������ȸ 
    if (r!= NULL){
        inorder(r->left);
        printf("%d ",r->key);
        inorder(r->right);
    }
}
void postorder(struct node *r){ //������ȸ 
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
    
    scanf("%d",&n); //������ ���� 
    for(int i=0;i<n;i++){
        scanf("%d",&bts[i]);    
        r=treeInsert(r,bts[i]); 
    }
    scanf("%d",&k);//������ ���� 
     
    for(int i=0;i<k;i++){
        scanf("%d",&p); //��ȸ��� 
        scanf("%d",&x); //������ ���� 
        treeDelete(r, x);
         
        if(p==0)  preorder(r);
        else if(p==1) inorder(r);
        else if(p==2) postorder(r);
        printf("\n");
    }   
    return 0;
}
