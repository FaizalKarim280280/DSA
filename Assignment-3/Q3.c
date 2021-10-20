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

//utility functions
void sieve(int *arr, int N);
void check_prime(int *arr, int num);

int main(){
    // size of number that can be checked
    int N = 1000000;
    int *arr = (int*) calloc(N + 1, sizeof(int));

    sieve(arr, N + 1);

    check_prime(arr, 171);
    check_prime(arr, 28);
    check_prime(arr, 18034);
    check_prime(arr, 524287);

    free(arr);

    return 0;
}

// function to determine if a numeral is prime
// each index in array is either 1 or 0 signifying whether the number is prime or not
void sieve(int *arr, int N){
    // filling the array with 1s, i.e, assuming all numbers are prime
    for(int i =0; i<=N; i++)
        arr[i] = 1;
    arr[0] = arr[1] = 0;

    for(long long i = 2; i*i <= N; i++){
        if(arr[i] == 1) {
            for (long long j = i * i; j <= N; j += i) {
                arr[j] = 0;
            }
        }
    }
}

void check_prime(int *arr, int num){
    printf("%d is %s\n", num, arr[num] == 1? "Prime" : "Composite");
}
