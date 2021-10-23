#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000000

void printArray(int a[],int n){
    for(int i = 0;i<n;i++)
        printf("%d ",a[i]);
}

void insertItemAtLast(int a[],int n, int key){
    a[n] = key;
}
void insertItemAtFirst(int a[],int n,int key){
    for(int i =0; i<n-1; i++){
        a[i+1] = a[i];
    }

    a[0] = key;
}
void insertItemAtIndex(int a[],int n,int idx,int key){
    a[idx] = key;
}
void deleteItemFromLast(int a[],int *n){
    -- *n;
}
void deleteItemFromFirst(int a[],int n){
    for(int i = 1;i<n;i++)
        a[i-1] = a[i];
}
void deleteItemFromIndex(int a[],int n,int idx){
    for(int i = idx;i<n-1;i++)
        a[i] = a[i+1];
}
int FindItemUnsorted(int a[],int n, int key){
    for(int i =0; i<n; i++){
        if(a[i] == key)
            return i;
    }
    return -1;
}
int FindItemSorted(int a[],int n){
    for(int i=0;i<n;i++)
        if(a[i+1]<a[i])
            return i;
    return -1;
}
void sortArray(int a[],int n){
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<n-i;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int* extractSubset(int a[],int n,int i,int j){
    int *brr = (int*)calloc(j-i+1,  sizeof(int));
    for(int k = i; k<=j; k++){
        brr[i] = a[k];
    }
    return brr;
}

void deleteSubset(int a[],int n,int x,int y){
    for(int i = x;i<n;i++)
    {
        if(i + y>=n)
            break;
        a[i] = a[i+y];
    }
}
int* SplitIntoTwoArray(int a[],int n){
    int x,y;
    if(n%2 == 0)
        x = y = n/2;
    else{
        x = n/2;
        y = 1 + n/2;
    }

    int *arr1 = (int*) calloc(x,sizeof(int)), *arr2 = (int*) calloc(y,sizeof(int));
    for(int i =0; i<x; i++){
        arr1[i] = a[i];
    }
    for(int i = y; i<n; i++){
        arr2[i] = a[i];
    }

    int *ans[] = {arr1, arr2};

    return ans;
}
void cloneArray(int a[],int n,int b[]){
    for(int i = n; i<2*n;i++)
        a[i] = b[i];
}

void ShiftLeftArray(int *arr, int n, int r){
    int *brr = (int*) calloc(n, sizeof(int));
    for(int i =0; i<n; i++){
        brr[(i-r) % n] = arr[i];
    }
    for(int i =0; i<n; i++)
        arr[i] = brr[i];

    free(brr);
}

void ShiftRightArray(int *arr, int n, int r){
    int *brr = (int*) calloc(n, sizeof(int));
    for(int i =0; i<n; i++){
        brr[(i+r) % n] = arr[i];
    }
    for(int i =0; i<n; i++)
        arr[i] = brr[i];

    free(brr);
}

void RotateArrayClockwise(int* arr, int n, int r){

}

void SetArrayToZero(int *arr, int n){
    for(int i =0; i<n; i++){
        arr[i] = 0;
    }
}

int FindMax(int *arr, int n){
    int max = -100000, maxi = 0;
    for(int i =0; i<n; i++){
        if(arr[i] > max) {
            max = arr[i];
            maxi = i;
        }
    }

    return maxi;
}

int FindMin(int *arr, int n){
    int min = 100000, mini = 0;
    for(int i =0; i<n; i++){
        if(arr[i] < min) {
            min = arr[i];
            mini = i;
        }
    }

    return mini;
}

void DeleteArray(int *arr, int n){
    free(arr);
}

void DeleteAllItemOfArray(int *arr, int n){
    DeleteArray(arr, n);
}

int* IncreaseArraySize(int *arr, int n, int m){
    int *new_arr = (int*) calloc(m, sizeof(int));
    for(int i =0; i<n; i++){
        new_arr[i] = arr[i];
    }

    free(arr);
    return new_arr;
}

int* AllocateArray(int *arr, int n){
    return arr;
}

void FillArrayPseudoRandom(int *arr, int n){
    srand(time(0));

    for(int i =0; i<n; i++){
        arr[i] = rand() % 1000;
    }
}

void fillArrayTrueRandom(int *arr, int n){
    // not sure how to generate true random numbers(is is possible?)
}


int main(){

    int *arr = (int*) calloc(100, sizeof(int));
    arr[0] = 10;
    arr[1] = 7;
    arr[2] = 19;

    return 0;
}