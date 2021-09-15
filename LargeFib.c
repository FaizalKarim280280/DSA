#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// utility functions
int get_ones_digit(int num);
int get_tens_digit(int num);
void copy_array(int *arr, int *brr, int n);
void print_array(int *arr, int n);
void run_fib(int itr, int n);

//main function
int main(){

    // nth_term: the term to find
    // size: prefefined size of array used for computation

    int nth_term, size = 5000;
    scanf("%d", &nth_term);

    if(nth_term > 0)
        run_fib(nth_term, size);
    else
        printf("Invalid!\n");

    printf("--Done--\n");
    return 0;

}

int get_ones_digit(int num){
    // returns the one's digit of a number
    return num % 10;
}

int get_tens_digit(int num){
    //returns the ten's digit of a number
    return num / 10;
}

void copy_array(int *arr, int *brr, int n){
    // copy the values of brr to arr
    for(int i =0; i<n; i++)
        arr[i] = brr[i];
}

void print_array(int *arr, int n){
    // to print an array
    int zeroStream = 1, counter = 0;
    for(int i =0; i<n; i++) {
        if(arr[i] == 0 && zeroStream)       // to not print the starting zeros of array
            continue;
        else
            zeroStream = 0;
        printf("%d", arr[i]);
        counter++;
    }

    printf("\nLength: %d\n", counter);
}

void run_fib(int itr, int N){
    int a[N], b[N], c[N];
    // initialize utility arrays with zero
    for(int i =0; i<N; i++){
        a[i] = 0;
        b[i] = 0;
        c[i] = 0;
    }
    b[N-1] = 1;

    int carry;

    for(int i =1; i<itr; i++){
        carry = 0;

        for(int j = N-1; j>=0; j--){
            int add_term = a[j] + b[j] + carry;        //the term to add
            int ones = get_ones_digit(add_term);      // get the one's digit and add it to current index
            c[j] = ones;
            carry = get_tens_digit(add_term);         // if there is a ten's digit then store it in carry and add it
                                                     // next iteration
        }

        // update the arrays for next iteration
        copy_array(a, b, N);
        copy_array(b,c, N);
    }

    // print the final answer
    print_array(c, N);

}







