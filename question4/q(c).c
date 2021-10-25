#include <stdio.h>
#include <stdlib.h>

void InsertElementAtIndex(int *arr,int n,int key,int idx){


  
int pos=idx+1;
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

int idx;
scanf("%d",&idx);
InsertElementAtIndex(arr,n,key,idx);


    return 0;
}

