#include <stdio.h>
#include <stdlib.h>



int FindMin(int arr[],int n){
    int mini=INT_MAX;
     int it=0;
    for (int i = 0; i < n; i++)
    {
        if(mini>arr[i]){
            mini=arr[i];
            it=i;
            }
    }
   return it; 
}

int main(){

int n;
scanf("%d",&n);
int arr[n];

for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

int idx=FindMin(arr,n);

printf("%d",idx);

    return 0;
}