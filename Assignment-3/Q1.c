/*
    Name: Md Faizal Karim
    Scholar Id: 2012027
    Assignment-1, Q4
    CS - 201, Data Structures
    Department of Computer Science and Engineering,
    National Institute of Technology, Silchar
*/

// Ref : https://cp-algorithms.com/string/string-hashing.html

#include "stdlib.h"
#include "stdio.h"

// utility functions
int mod_exponentiation(int a, int b, int c);
int hash_string(char *str);

// main function
int main(){

    char str[] = "CSE Rocks";
//    gets(str);

    printf("%d\n", hash_string(str));

    return 0;
}

// functions to calculate a ^ b (mod c)
int mod_exponentiation(int a, int b, int c){
    int ans = 1, exp = a % c;
    while(b != 0){
        if(b % 2 == 1)
            ans =  ((ans % c) * (exp % c)) % c;
        exp = (exp * exp) % c;
        b >>= 1;
    }
    return ans;
}

// function to calculate hash value for a string
int hash_string(char *str){
    int hash_value = 0, P = 53, N = 1e9 + 3, i = 0;

    while(*str != '\0'){
        hash_value+= *str * mod_exponentiation(P,i,N);
        str++;
    }
    return hash_value;
}


