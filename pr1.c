#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 100
struct Stack52 {
    int top52;
    int data52[MAX_SIZE];
};
void initialize52(struct Stack52* stack52) {
    stack52->top52 = -1;
}
int isEmpty52(struct Stack52* stack52) {
    return stack52->top52 == -1;
}
void push52(struct Stack52* stack52, int item52) {
    if (stack52->top52 < MAX_SIZE - 1) {
        stack52->data52[++stack52->top52] = item52;
    } else {
        printf("Stack Overflow\n");
        exit(1);
    }
}
int pop52(struct Stack52* stack52) {
    if (!isEmpty52(stack52)) {
        return stack52->data52[stack52->top52--];
    } else {
        printf("Stack Underflow\n");
        exit(1);
    }
}
int peek52(struct Stack52* stack52) {
    return stack52->data52[stack52->top52];
}
int isOperator52(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
int precedence52(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0; 
}
void infixToPostfix52(char infix[], char postfix[]) {
    struct Stack52 stack52;
    initialize52(&stack52);
    int i52, j52 = 0;
    for (i52 = 0; infix[i52] != '\0'; i52++) {
        if (isalnum(infix[i52])) {
            postfix[j52++] = infix[i52];
        } else if (infix[i52] == '(') {
            push52(&stack52, infix[i52]);
        } else if (infix[i52] == ')') {
            while (!isEmpty52(&stack52) && peek52(&stack52) != '(') {
                postfix[j52++] = pop52(&stack52);
            }
            if (!isEmpty52(&stack52) && peek52(&stack52) != '(') {
                printf("Invalid Expression\n");
                exit(1);
            } else {
                pop52(&stack52);
            }
        } else {
            while (!isEmpty52(&stack52) && precedence52(infix[i52]) <= precedence52(peek52(&stack52))) {
                postfix[j52++] = pop52(&stack52);
            }
            push52(&stack52, infix[i52]);
        }}
    while (!isEmpty52(&stack52)) {
        postfix[j52++] = pop52(&stack52);
    }
    postfix[j52] = '\0';
}
int evaluatePostfix52(char postfix[]) {
    struct Stack52 stack52;
    initialize52(&stack52);
    int i52;
    for (i52 = 0; postfix[i52] != '\0'; i52++) {
        if (isdigit(postfix[i52])) {
            push52(&stack52, postfix[i52] - '0');
        } else {
            int operand252 = pop52(&stack52);
            int operand152 = pop52(&stack52);
            switch (postfix[i52]) {
                case '+':
                    push52(&stack52, operand152 + operand252);
                    break;
                case '-':
                    push52(&stack52, operand152 - operand252);
                    break;
                case '*':
                    push52(&stack52, operand152 * operand252);
                    break;
                case '/':
                    if (operand252 != 0) {
                        push52(&stack52, operand152 / operand252);
                    } else {
                        printf("Division by zero\n");
                        exit(1);
                    }
                    break;
            }}}
    return pop52(&stack52);
}
int main() {
    char infix52[100], postfix52[100];
    printf("Enter an infix expression: ");
    scanf("%s", infix52);
    infixToPostfix52(infix52, postfix52);
    printf("Postfix expression: %s\n", postfix52);
    int result52 = evaluatePostfix52(postfix52);
    printf("Result of the expression: %d\n", result52);
    return 0;
}
