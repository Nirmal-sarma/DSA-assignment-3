#include <stdio.h>
#include <stdlib.h>



int FindMax(int arr[],int n){
    int maxi=INT_MIN;
     int it=0;
    for (int i = 0; i < n; i++)
    {
        if(maxi<arr[i]){
            maxi=arr[i];
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

int idx=FindMax(arr,n);

printf("%d",idx);

    return 0;
}