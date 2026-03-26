#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = x;
}

char pop() {
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    printf("Reversed string: ");

    while(top != -1) {
        printf("%c", pop());
    }

    return 0;
}