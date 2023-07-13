#include <string.h>
#include <stdio.h>

void understandingStrchrIfStatement(){
    // To understand the line 65 of isBalanced script
    // Get the "index" using the memory address of an Char

    const char* str1 = "([{";
    const char* str2 = strchr(str1, '[');
    const char str_res = str2 - str1;
    
    const char* str3 = ")]}";
    const char* str4 = strchr(str3, ')');
    const char str_res2 = str4 - str3;

    printf("%p -\n", str1);
    printf("%p\n", str2);
    printf("--------\n");
    printf("%d\n", str_res);

    printf("%p -\n", str3);
    printf("%p\n", str4);
    printf("--------\n");
    printf("%d\n", str_res2);
}

int main(void){
    understandingStrchrIfStatement(); 
}
