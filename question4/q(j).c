#include <stdio.h>
#include <stdlib.h>
int p=0;

int* extractArray(int arr[],int n,int i,int j){
    int *new=(int*)malloc((j-i+1)*sizeof(int));
   
    int temp=i;
    while(temp<=j){
    new[p]=arr[temp];
    temp++,p++;
   }
    
   return new;
}



int main(){

     int n;
    scanf("%d",&n);

    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a,b;
    scanf("%d %d",&a,&b);
    int* g=extractArray(arr,n,a,b);
    
int x=sizeof(g)/sizeof(g[0]);
for(int j=0;j<p;j++){
printf("%d ",g[j]);
}
    return 0;
}