#include <stdio.h>
#include <stdlib.h>

void fillPseudoRandom(int arr[],int n)
{
    for(int i=0;i<n;i++)
        arr[i]=rand();
   

    for (int i = 0; i < count; i++)
    {
        printf("%d",arr[i]);
    }
    
}

int main(){

    int n;
scanf("%d",&n);
int arr[n];

for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

fillPseudoRandom(arr,n);


    return 0;
}