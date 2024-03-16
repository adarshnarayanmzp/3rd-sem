#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_SIZE 100
struct Stack52 {
    char items[MAX_SIZE];
    int top52;
};
void initialize52(struct Stack52* stack52) {
    stack52->top52 = -1;
}
bool isEmpty52(struct Stack52* stack52) {
    return stack52->top52 == -1;
}
void push52(struct Stack52* stack52, char item) {
    if (stack52->top52 == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        exit(1);
    }
    stack52->items[++stack52->top52] = item;
}
char pop52(struct Stack52* stack52) {
    if (isEmpty52(stack52)) {
        printf("Stack underflow!\n");
        exit(1);
    }
    return stack52->items[stack52->top52--];
}
bool areParenthesesBalanced52(char expression[]) {
    struct Stack52 stack52;
    initialize52(&stack52);
    int length = strlen(expression);
    for (int i = 0; i < length; i++) {
        char current52 = expression[i];
        if (current52 == '(' || current52 == '{' || current52 == '[') {
            push52(&stack52, current52);
        } else if (current52 == ')' || current52 == '}' || current52 == ']') {
            if (isEmpty52(&stack52)) {
                return false;
            }
            char topElement52 = pop52(&stack52);
            if ((current52 == ')' && topElement52 != '(') ||
                (current52 == '}' && topElement52 != '{') ||
                (current52 == ']' && topElement52 != '[')) {
                return false;
            }}}
    return isEmpty52(&stack52);
}
int main() {
    char expression[MAX_SIZE];
    printf("Enter an expression: ");
    fgets(expression, MAX_SIZE, stdin);
    expression[strcspn(expression, "\n")] = '\0';
    if (areParenthesesBalanced52(expression)) {
        printf("The expression has balanced parentheses.\n");
    } else {
        printf("The expression does not have balanced parentheses.\n");
    }
    return 0;
}
