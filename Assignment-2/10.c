

#include <stdio.h>
int main(){
    int n=10;
    int arr[]={1,4,5,8,9,4,5,6,7,8};

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

    //output
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}