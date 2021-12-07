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

void selection_sort(int arr[], int size){
    int i, j, min_index;
    for(i=0; i<size-1; i++){
        min_index = i;
        for(j=i+1; j<size; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
}

int main(){

    int arr[] = {4,3,7,9,2,49,30,23,11, 15};
    
    print_array(arr, 10);

    selection_sort(arr, 10);

    print_array(arr, 10);

    return 0;
}

// সিলেকশন সর্টে প্রথমে অ্যারের প্রথম ইন্ডেক্স এর এলিমেন্টকে সবচেয়ে ছোট এলিমেন্ট ধরে বাকি সকল এলিমেন্টের সাথে তুলনা করা হয়। সম্পুর্ন অ্যারে চেক করার পর যদি কোন ইন্ডেক্স লুপের প্রথম ইন্ডেক্সের চেয়ে ছোট হয় তাহলে দুই ইন্ডেক্সের এলিমেন্ট কে অদলবদল করা হয়। এভাবে প্রত্যেকবার লুপ চলা কালে লুপের প্রথম ইন্ডেক্স বাকি সকল এলিমেন্ট এর চেয়ে ছোট এলিমেন্ট দিয়ে অদলবদল হয়ে যায়। তাই প্রত্যেকবার লুপ তার আগের লুপের শুরুর ইন্ডেক্সের পরের ইন্ডেক্স থেকে শুরু হয়।