#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s)
{
    if (s == NULL) {
        return false;
    }

    size_t len = strlen(s);
    char stack[1000];
    size_t top = 0;

    for (size_t i = 0; i < len; ++i) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            if (top >= sizeof(stack)) {
                return false;
            }
            stack[top++] = ch;
            continue;
        }

        if (top == 0) {
            return false;
        }

        char left = stack[--top];
        if ((ch == ')' && left != '(') ||
            (ch == ']' && left != '[') ||
            (ch == '}' && left != '{')) {
            return false;
        }
    }

    return top == 0;
}

int main(void)
{
    char valid1[] = "()";
    char valid2[] = "()[]{}";
    char invalid[] = "([)]";

    printf("%d %d %d\n", isValid(valid1), isValid(valid2), isValid(invalid));
    return 0;
}