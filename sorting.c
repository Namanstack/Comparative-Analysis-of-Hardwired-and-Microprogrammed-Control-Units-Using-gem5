#include <stdio.h>

#define SIZE 1000

int main() {

    int arr[SIZE];
    int i,j,temp;

    for(i=0;i<SIZE;i++)
        arr[i]=SIZE-i;

    for(i=0;i<SIZE-1;i++){
        for(j=0;j<SIZE-i-1;j++){

            if(arr[j] > arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

    printf("Sorting completed\n");

    return 0;
}