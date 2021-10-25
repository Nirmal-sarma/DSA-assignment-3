#include <stdio.h>
#include <stdlib.h>


int* splitIntoTwoArray1(int arr[],int n){

int *sub1=(int*)malloc((n/2)*(sizeof(int)));

for (int i = 0; i < n/2; i++)
{
    sub1[i]=arr[i];
}

return sub1;
}




int main(){
int n;
scanf("%d",&n);
int arr[n];

for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}

int* p=splitIntoTwoArray1(arr,n);

for(int x=0;x<n/2;x++){
    printf("%d ",p[x]);
}



    return 0;
}