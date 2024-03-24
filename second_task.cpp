#include <iostream>
#include <map>
#include <vector>


int main() 
{
    // —труктура дл€ хранени€ учеников по классам
    std::map<int, std::vector<std::string>> students;

    // —читываем данные и заполн€ем структуру
    int class_num;
    std::string surname;
    while (std::cin >> class_num >> surname) 
    {
        students[class_num].push_back(surname);
    }

    // ¬ыводим учеников по классам
    for (int i = 9; i <= 11; ++i) 
    {
        for (const std::string& surname : students[i]) 
        {
            std::cout << i << " " << surname << std::endl;
        }
    }

    return 0;
}