#include <stdio.h>
#include <stdlib.h>

void leftShift(int arr[],int n){
int temp=arr[0];
for (int i = 1; i < n; i++)
{
   arr[i-1]=arr[i];
}
arr[n-1]=temp;

for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}

}

void RotateClockWise(int arr[],int n,int r){
for (int i = 1; i <= r; i++)
{
   leftShift(arr,n);
}


}


int main(){
    int n;
scanf("%d",&n);
int arr[n];

for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

RotateClockWise(arr,n);

    return 0;
}