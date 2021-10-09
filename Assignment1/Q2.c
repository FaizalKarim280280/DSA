//
// Created by faizal on 09-10-2021.
//


#include "stdio.h"
#include "stdlib.h"

int find_pos(char* str, char c);
int check_first_letter(char *str);
int check_last_letter(char *str);
int check_at_dot(int dotPos, int atPos);

int main(){

    char email[100];
    gets(email);

    if(check_first_letter(email)
        && check_at_dot(find_pos(email, '.'),find_pos(email, '@'))
        && check_last_letter(email)){
        printf("Valid\n");
    } else {
        printf("Not Valid\n");
    }

    return 0;

}


int check_at_dot(int dotPos, int atPos){
    return atPos < dotPos;
}

int check_last_letter(char *str){
    while(*(str + 1) != '\0'){
        str++;
    }
    return ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'));

}
int check_first_letter(char *str){
    return ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'));
}

int find_pos(char* str, char c){
    int pos =0;
    while(*str != c){
        str++;
        pos++;
    }
    return pos;
}
