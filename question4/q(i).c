#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[],int n){

for(int i=0;i<n;i++){
    for(int j=i+1;j<n-i-1;j++){
       if(arr[i] > arr[j]){
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
    }
}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}


int main(){
    int n;
    scanf("%d",&n);

    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortArray(arr,n);

    return 0;
}