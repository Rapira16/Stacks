#include <stdio.h>

#define T int
#define SIZE 1000
#define true 1 == 1
#define false 1 != 1

typedef int boolean;

int cursor = -1;
T Stack[SIZE];

boolean push(T data){
    if (cursor < SIZE) {
        Stack[++cursor] = data;
        return true;
    } else {
        printf("%s \n", "Stack overflow");
        return false;
    }
}
T pop() {
    if (cursor != -1) {
        return Stack[cursor--];
    } else {
        printf("%s \n", "Stack is empty");
        return -1;
    }
}
int main(const int argc, const char** argv){
        int  dec = 34;
    while(dec > 0) {
        if (dec % 2 == 0){
            push('0');
        } else {
            push('1');
        }
        dec = dec / 2;
    }
    while (cursor != -1){
        printf("%d ", pop());
    }
    return 0;
}