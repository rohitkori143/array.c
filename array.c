#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n =sizeof(arr)/sizeof(int);
   int i=0;
   while(i<n){
    printf("%d \n",arr[i]);
    i++;
   }
    return 0;
}


