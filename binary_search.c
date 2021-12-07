#include <stdio.h>

int binary_search(int arr[], int n, int size){
    int left = 0, right = size - 1, mid;
    while(left <= right){
        mid = (left + right)/2;
        if(arr[mid] == n)
            return mid;
        if(arr[mid] < n)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(){

    int arr[] = {34, 35, 60, 62, 65, 67, 70, 83, 89, 92};

    printf("%d", binary_search(arr, 65, 10));

    return 0;
}