#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // variables declaration
    int n = 255;
    char s[255], s1[255], s2[255];
    char arr[n][255];
    int cnt = 0;

    // user input
    printf("Enter you string: ");
    gets(s);

    // split string and assign them to an array
    char * token = strtok(s, " ");

    while(token != NULL){
        strcpy(arr[cnt], token);
        cnt++;
        token = strtok(NULL, " ");
    }

    // concatenate string #2
    for(int i = 0; i < cnt; i++){
        if(strcmp(arr[cnt - 1], arr[i]) == 0 && i != cnt - 1){
            strcat(s2, arr[i]);
        }
    }

    // work with string #2
    int s2len = strlen(s2);
    if (s2len != 0){
        // make upper case vowels if length of string is even
        if(s2len % 2 == 0){
            for(int i = 0; i < s2len; i++){
                if(s2[i]=='a' || s2[i]=='e'|| s2[i]=='i' ||s2[i] =='o' || s2[i]=='u'){
                    s2[i] = s2[i]-32;
                }
            }
        }
        printf("String 2: %s\n", s2);
    }else{
        printf("String 2 is empty\n");
    }

    char temp[20];

    for(int i=0; i<cnt; i++){
        for(int j=0; j<cnt-1-i; j++){
            if(strcmp(arr[j], arr[j+1]) > 0){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
    // concatenate string # 1
    for(int i = 0; i < cnt; i++){
        if(strcmp(arr[cnt - 1], arr[i]) != 0 && i != cnt - 1){
            strcat(s1, arr[i]);
        }
    }

    int s1len = strlen(s1);

    if(s1len != 0){
        printf("String 1: %s\n", s1);
    }else{
        printf("String 1 is empty\n");
    }


    return 0;
}
