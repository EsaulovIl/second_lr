#include <iostream>
#include <stack>
#include <string>

bool is_valid_sequence(const std::string& sequence) {
    std::stack<char> brackets;
    for (char bracket : sequence) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            brackets.push(bracket);
        }
        else {
            if (brackets.empty()) {
                return false; // ������� ����������� ������ ��� ��������������� �����������
            }
            char open_bracket = brackets.top();
            brackets.pop();
            if ((open_bracket == '(' && bracket != ')') ||
                (open_bracket == '[' && bracket != ']') ||
                (open_bracket == '{' && bracket != '}')) {
                return false; // ������� ������������ ������������������ ������
            }
        }
    }
    return brackets.empty(); // ���������, �������� �� ����������� ������ � �����
}

int main() {
    std::string sequence;
    std::cin >> sequence;

    if (is_valid_sequence(sequence)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}