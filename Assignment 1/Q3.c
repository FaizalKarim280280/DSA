//
// Created by faizal on 01-10-2021.
//

#include "stdio.h"
#include "stdlib.h"

int n, m;

int get_pos(int i, int j){
    return (i*m + j);
}

void insert(int* arr, int value, int i, int j){
    arr[get_pos(i, j)] = value;
}

int Map(int *arr, int i, int j){
    return arr[get_pos(i, j)];
}

int main(){

    scanf("%d %d", &n, &m);
    int *arr = (int*) calloc(n*m, sizeof(int));

    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            int val;
            scanf("%d", &val);
            insert(arr, val, i,j);
        }
    }

    int i = 2, j = 1;
    printf("Value at (%d,%d): %d \n", i,j, Map(arr, i, j));

    free(arr);


    return 0;

}