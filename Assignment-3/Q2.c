/*
    Name: Md Faizal Karim
    Scholar Id: 2012027
    Assignment-1, Q4
    CS - 201, Data Structures
    Department of Computer Science and Engineering,
    National Institute of Technology, Silchar
*/

#include "stdlib.h"
#include "stdio.h"
#include "time.h"

void insertion_sort(int *arr ,int n);
void print_arr(int *arr, int n);

int main(){
    int N = 500000, r;
    int arr[N];

    // to initialize the array with random numbers
    srand(time(0));
    r = -100000;
    for(int i=0; i<N; i++) {
        r = r + rand()%10;
        arr[i] = r;
    }

    clock_t time;

    time = clock();
    insertion_sort(arr, N);
    time = clock() - time;
    printf("Insertion Sort: %f\n", (double)time/ CLOCKS_PER_SEC);

}

void insertion_sort(int* arr, int n){
    for(int i =0; i<n; i++){
        int key = arr[i], index = i;
        // keep exchanging the elements by one place till element is less than key
        while(index != 0 && arr[index-1] < key){
            arr[index] = arr[index-1];
            index--;
        }
        //put the key in the right position
        arr[index] = key;
    }
}

void print_arr(int *arr, int n){
    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}