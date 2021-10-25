#include <stdio.h>
#include <stdlib.h>

void InsertElementAtLast(int *arr,int n,int key){


  
int pos=n+1;
n++;
    for(int i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos-1]=key;

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}

int main(){
int key;
int n;
scanf("%d %d",&n,&key);
int arr[n];
for (int i = 0; i < n; i++)
{
   scanf("%d",&arr[i]);
}

InsertElementAtLast(arr,n,key);


    return 0;
}