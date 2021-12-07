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

void bubble_sort(int arr[], int size){
    int i, j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){

    int arr[] = {4,3,7,9,2,49,30,23,11, 15};
    
    print_array(arr, 10);

    bubble_sort(arr, 10);

    print_array(arr, 10);

    return 0;
}

// বাবল সর্টে অ্যারের পাশাপাশি দুইটা ইন্ডেক্সের মধ্যে তুলনা করা হয়। যেই ইন্ডেক্সের এলিমেন্ট বড় হবে তাকে ডানে এবং ছোটটা বামে অদলবদল করা হয়। এভাবে সবার ডানে অ্যারের সবচেয়ে বড় এলিমেন্ট চলে যায়। যেহেতু অ্যারের শেষের দিকে সবচেয়ে বড় এলিমেন্টগুলো সর্ট হয়,তাই প্রত্যেক লুপের শেষ ইন্ডেক্স তার আগের লুপের শেষ ইন্ডেক্সের আগের ইন্ডেক্সে শেষ হয়।