#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

bool checkInSet(const std::unordered_set<std::string>& stringSet, const std::string& str) {
    auto it = stringSet.find(str);
    return (it != stringSet.end()) ? true : false;
}

int main() {
    std::unordered_set<std::string> stringSet;
    char operation;
    std::string str;
    std::vector<std::string> results;

    while (true) {
        std::cin >> operation;
        if (operation == '#') {
            break;
        }

        std::cin >> str;

        switch (operation) {
        case '+':
            stringSet.insert(str);
            break;
        case '-':
            stringSet.erase(str);
            break;
        case '?':
            if (checkInSet(stringSet, str)) {
                results.push_back("YES");
            }
            else {
                results.push_back("NO");
            }
            break;
        default:
            break;
        }
    }

    for (const auto& result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}