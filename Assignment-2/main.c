
#include "stdio.h"
#include "stdlib.h"

void int2binary(int num);
void int2roman(int num);
void binary2int(char* str);
void roman2int(char* str);
int getLength(char *str);

int main(){



}

int getLength(char *str){
    int counter =0;
    while(*str != '\0'){
        counter++;
        str++;
    }
    return counter;
}

void int2binary(int num){
    if(num == 0)
        return;
    int2binary(num>>1);
    printf("%d", num%2);
}

void binary2int(char *str){
    int len = getLength(str);
    int ff = 1, sum = 0;

    for(int i = len-1; i>=0; i--){
        if(str[i] == '1')
            sum += ff;
        ff *= 2;
    }
    printf("%d\n", sum);
}



