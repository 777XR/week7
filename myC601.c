/*Program Name : program to  Start
Author : K. Mabpe
Date : 8/18263
*/
#include<stdio.h>//Link from library stdio.h
void message();//Function prototype declaration section
void cat();//Function prototype declaration section

void main(){
    int animal=5;//Variable declaration
    printf("Hello Maew :3 \n");//Executeable part
    printf("%i",animal);
    message();//Function call
    cat();//Function call
}

//Sub function : message
void message(){
    printf("We can take more sub function\n");
}

//Sub function : cat
void cat(){
    printf("I Love My Cat\n");
}

