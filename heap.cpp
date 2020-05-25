#include <stdio.h>
#include <stdlib.h>
int count=0;
int ch=0;
void heapify(int arr[],int k,int n){
   int left,right;
   left=2*k+1;
   right=2*k+2;
   int bigger=0;


   if(right<=n){//k�� ���ڽ��� ������ ��� 
      if(arr[left]>arr[right])
         bigger=left;
      else
         bigger=right;   
   }
   else if(left<=n)
      bigger=left;//k�� �����ڽĸ� �ִ� ��� 
   else return;//A[k]�� ���� �����.�� 
         int temp;    
   if(arr[bigger]>arr[k]){

      temp=arr[k];
      arr[k]=arr[bigger];
      arr[bigger]=temp;
		if(ch==1)count++;
      heapify(arr,bigger,n);

   } 

}
int buildHeap(int arr[],int n){
   for(int i=(n/2);i>=0;i--){
      heapify(arr,i,n);
   }
    
}

int heapSort(int arr[],int n){

   buildHeap(arr,n);
   ch=1;
   int temp;
   for(int i=n;i>=1;i--){
     temp=arr[0];
      arr[0]=arr[i];
      arr[i]=temp;
      heapify(arr,0,i-1);
   }
}
int main(){
   int n=0;
    int arr[10000];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
         
    heapSort(arr,n-1);
       printf("%d",count);


    return 0;
   
}
