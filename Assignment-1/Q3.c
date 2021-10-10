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

// utility functions
int get_pos(int i, int j);
void insert(int *arr, int value, int i, int j);
int Map(int *arr, int i, int j);

// n: rows, m : cols
int n, m;

int main(){

    // input the number of rows and cols resp.
    scanf("%d %d", &n, &m);

    // 1D array made of size n*m
    int *arr = (int*) calloc(n*m, sizeof(int));

    // input the elements of the matrix
    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            int val;
            scanf("%d", &val);
            insert(arr, val, i,j);
        }
    }

    // element to find, arr[i][j]
    int i = 2, j = 1;
    printf("Value at (%d,%d): %d \n", i,j, Map(arr, i, j));

    // free the array pointer
    free(arr);

    return 0;

}

int get_pos(int i, int j){
    // to get the index for i, j using row major
    return (i*m + j);
}

void insert(int* arr, int value, int i, int j){
    // to insert a value at arr[i][j]
    arr[get_pos(i, j)] = value;
}

int Map(int *arr, int i, int j){
    // to return arr[i][j]
    return arr[get_pos(i, j)];
}

