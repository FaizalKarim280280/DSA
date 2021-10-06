//
// Created by faizal on 06-10-2021.
//

#include "stdio.h"
#include "stdlib.h"

int check1(char *arr){
    int counter = 0;
    while(*arr != '\0'){
        if(*arr == '.')
            counter++;
        arr++;
    }

    return counter == 1? 1 : 0;
}

int check3(char *arr){
    int point_index = 0, i =0;
    char* tarr = arr;

    while(*arr != '\0'){
        if(*arr == '.')
            point_index = i;
        arr++;
        i++;
    }
    if(point_index == 0 || *(tarr + point_index + 1) == '\0')
        return 0;
    else
        return 1;
}

int check2(char *arr){
    while(*arr != '\0'){
        if(*arr != '.' && (*arr < 48 || *arr > 57))
            return 0;
        arr++;
    }
    return 1;
}

int length(char *arr){
    int counter = 0;
    while(*arr != '\0'){
        arr++;
        counter++;
    }

    return counter;
}

int main(){

    char input[50];
    scanf("%s", input);


    if(check2(input) == 1 && check1(input) == 1 && check3(input) == 1)
        printf("Valid\n");
    else
        printf("Not Valid\n");

    return 0;
}