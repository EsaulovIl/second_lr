#include <iostream>
#include <stack>
#include <string>


int evaluate(int operand1, int operand2, char op) {
    switch (op) {
    case '+':
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '*':
        return operand1 * operand2;
    case '/':
        return operand1 / operand2;
    default:
        return 0;
    }
}

int evaluatePostfix(const std::string& expression) {
    std::stack<int> operands;

    for (char token : expression) {
        if (isdigit(token)) {
            operands.push(token - '0');
        }
        else if (token == '+' || token == '-' || token == '*' || token == '/') {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            operands.push(evaluate(operand1, operand2, token));
        }
    }

    return operands.top();
}

int main() {
    std::string expression;
    std::getline(std::cin, expression);

    int result = evaluatePostfix(expression);
    std::cout << result << std::endl;

    return 0;
}