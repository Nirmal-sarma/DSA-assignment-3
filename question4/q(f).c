#include <stdio.h>
#include <stdlib.h>

void DeleteElementAtIndex(int *arr,int n,int key,int idx){

    
if(idx <= n-1){
for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}else{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
    
}

int main(){
int key;
int n;
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
   scanf("%d",&arr[i]);
}

key=0;
int idx;
scanf("%d",&idx);

DeleteElementAtIndex(arr,n,key,idx);


    return 0;
}

