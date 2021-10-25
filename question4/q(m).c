#include <stdio.h>
#include <stdlib.h>

void cloneArray(int arr[],int n,int cln[])
{
    for (int i = 0; i < n; i++)
    {
      cln[i]=arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",cln[i]);
    }
    
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int cln[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    cloneArray(arr,n,cln);

    return 0;
}