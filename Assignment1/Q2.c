//
// Created by faizal on 09-10-2021.
//

#include "stdio.h"
#include "stdlib.h"

// utility functions
int find_pos(char* str, char c);
int check_first_letter(char *str);
int check_last_letter(char *str);
int check_at_dot(int dotPos, int atPos);
int check_special_char(char *str);

// main function
int main(){

    // input the email
    char email[100];
    gets(email);

    // if all the check functions are true than the email is valid
    if(check_first_letter(email)
        && check_at_dot(find_pos(email, '.'),find_pos(email, '@'))
        && check_last_letter(email) && check_special_char(email)){
        printf("Valid\n");

    } else {
        printf("Not Valid\n");
    }

    return 0;

}

// to check if some character of the string is special character
int check_special_char(char *str){
    char special_char[] = {'<', '>', '(' ,')', '[', ']', ';', ':' ,',', '\\', '/', '"'};
    int n = sizeof(special_char)/sizeof(char);

    while(*str != '\0'){
        for(int i =0; i<n; i++){
            if(*str == special_char[i])
                return 0;
        }
        str++;
    }

    return 1;
}

// to check if '@' is before '.'
int check_at_dot(int dotPos, int atPos){
    return (atPos != -1 && dotPos != -1 && atPos < dotPos);
}

// to check if last letter is alphabet
int check_last_letter(char *str){
    while(*(str + 1) != '\0'){
        str++;
    }
    return ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'));

}

// to check if first letter is alphabet
int check_first_letter(char *str){
    return ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'));
}

// to find the position of a character in a string
int find_pos(char* str, char c){
    int ans = -1, pos =0;
    while(*str != '\0'){
        str++;
        pos++;
        if(*str == c) {
            ans = pos;
            break;
        }
    }
    return ans;

}



