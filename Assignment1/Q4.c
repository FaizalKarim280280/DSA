/*
    Name: Md Faizal Karim
    Scholar Id: 2012027
    Assignment-1, Q4
    CS - 201, Data Structures
    Department of Computer Science and Engineering, 
    National Institute of Technology, Silchar
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

// utility functions
void bubble_sort(int* arr, int n);
void selection_sort(int* arr, int n);
void print(int* arr, int n);

int main(){
    // size of array
    int N = 500000;

    // declare two arrays for sorting
    int* arr = (int*) calloc(N, sizeof(int));
    int* brr = (int*) calloc(N, sizeof(int));


    srand(time(0));
    printf("Start\n");
    int r;

    // inserting random numbers into array
    for(int i=0; i<N; i++) {
        r = rand();
        arr[i] = r;
        brr[i] = r;
    }


    // check the time taken for sorting
    clock_t time;

    time = clock();
    bubble_sort(arr, N);
    time = clock() - time;
    printf("Bubble Sort: %f\n", (double)time/ CLOCKS_PER_SEC);

    time = clock();
    selection_sort(brr, N);
    time = clock() - time;
    printf("Selection Sort: %f\n", (double)time/CLOCKS_PER_SEC);

    printf("Done\n");

    // free the array pointers
    free(arr);
    free(brr);

    return 0;
}

void bubble_sort(int* arr, int n) {
    // bubble sort algorithm

    int flag ;
    for(int i =0; i<n; i++){
        flag = 1;
        for(int j =0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
        }
        if(flag == 1)
            break;
    }

}


void selection_sort(int* arr, int n){
    // selection sort algorithm

    int min_index;
    for(int i =0; i<n-1; i++){
        min_index = i;
        for(int j =i+1; j<n; j++){
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

void print(int* arr, int n){
    // to print an array

    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}





