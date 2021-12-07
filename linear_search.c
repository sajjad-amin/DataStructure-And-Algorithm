#include <stdio.h>

int linear_search(int arr[], int n, int size){
    int i;
    for(i=0; i<size; i++){
        if(arr[i] == n)
        return i;
    }
    return -1;
}

int main(){
    
    int arr[] = {9,5,4,7,3,2,6,1,8,10};

    printf("%d", linear_search(arr, 20, 10));

    return 0;
}