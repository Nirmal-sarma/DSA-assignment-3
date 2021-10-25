#include <stdio.h>
#include <stdlib.h>


void DeleteSubset(int arr[],int n,int i,int j){
   
   for (int m = 0; m < n; m++)
   {
       if(m<i ||  m>j){
           printf("%d ",arr[m]);
       }
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

    int a,b;
    scanf("%d %d",&a,&b);
   
     DeleteSubset(arr,n,a,b);

    return 0;
}