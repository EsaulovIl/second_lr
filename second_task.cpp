#include <iostream>
#include <map>
#include <vector>


int main() 
{
    // ��������� ��� �������� �������� �� �������
    std::map<int, std::vector<std::string>> students;

    // ��������� ������ � ��������� ���������
    int class_num;
    std::string surname;
    while (std::cin >> class_num >> surname) 
    {
        students[class_num].push_back(surname);
    }

    // ������� �������� �� �������
    for (int i = 9; i <= 11; ++i) 
    {
        for (const std::string& surname : students[i]) 
        {
            std::cout << i << " " << surname << std::endl;
        }
    }

    return 0;
}