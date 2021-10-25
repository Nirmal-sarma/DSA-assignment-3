#include <stdio.h>
#include <stdlib.h>

void DeleteElementAtlast(int *arr,int n,int key){

    
   
    key=arr[n-1];
   
    int idx=n,flag=0;
    for(int i=0;i<n;i++){
       if(arr[i] == key){
             idx=i;
             flag=1;
             break;
             
       } 
    }

if(flag){
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
 

DeleteElementAtlast(arr,n,key);


    return 0;
}

