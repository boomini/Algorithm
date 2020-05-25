#include <stdio.h>
#include <stdlib.h>
void InsertionSort(int arr[],int n) {
    int temp=0;
    int biggo=0;
    for(int i=1;i<n;i++){
        temp=arr[i];
        int j=i-1;
     	while(j>=0&&arr[j]>temp){
     		arr[j+1]=arr[j];
     		j--;
     		biggo++;
		 }
         arr[j+1]=temp;
         biggo++;
    }
        printf("%d",biggo);
}


int main(){
    int n=0;
    int *arr;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
         
    InsertionSort(arr,n);
 
    return 0;
}
