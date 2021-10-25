#include <stdio.h>
#include <stdlib.h>


void deletion(int a[],int n)
{
    for(int i=0;i<n;i++)
        free(a[i]);

}



int main(){

int n;
scanf("%d",&n);
int arr[n];

for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

deletion(arr,n);

for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}


    return 0;
}