#include <stdio.h>
#include <stdlib.h>

void fillTrueRandom(int arr[],int n)
{
    srand(time(0));
    for(int i=0;i<n;i++)
        arr[i]=rand();


    for (int i = 0; i < n; i++)
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

fillTrueRandom(arr,n);


    return 0;
}