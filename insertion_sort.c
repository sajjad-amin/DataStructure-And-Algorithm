#include <stdio.h>

void print_array(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void insertion_sort(int arr[], int size){
    int i, j, key;
    for(i=1; i<size; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main(){

    int arr[] = {4,3,7,9,2,49,30,23,11, 15};
    
    print_array(arr, 10);

    insertion_sort(arr, 10);

    print_array(arr, 10);

    return 0;
}