#include <iostream>
#include <string>
#include <sstream>

//Task 1
std::string remove_char(const std::string& str, const char target) {
    size_t read{};
    std::string result{};
    while (read < str.size()) {
        if (str[read] != target) {
            result.push_back(str[read]);
        }
        read++;
    }
    return result;
}

//Task 2
int count_words(const std::string& s) {
    std::stringstream ss(s);
    std::string buf{};
    int count{};
    while (ss >> buf) {
        count++;
    }
    return count;
}

//Task 3
std::string reversed_word(const std::string& s) {   
    std::string result{};
    for (int i = static_cast<int>(s.size()) - 1; i >= 0; --i) {
        result.push_back(s[i]);
    }
    return result;

}

std::string reversed_words_in_string(const std::string& s) {
    std::stringstream ss(s);
    std::string buf{};
    std::string result{};;
    while (ss >> buf) {
        result += reversed_word(buf) + ' ';
    }
    result.pop_back();
    return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Task 1\n";
    std::string str = "Hello world";
    char target{};
    std::cout << "Исходная строка : " << str << '\n';
    std::cout << "Введите символ который хотите удалить: ";
    std::cin >> target;
    std::cout << "Строка с убранным симовлом (" << target << "): " << remove_char(str, target) << '\n';

    std::cout << "\nTask 2\n";
    std::string str1 = "this is a very long string consists of ten words";
    std::cout << "Исходная строка: " << str1 << "\nСлов в строке: " << count_words(str1) << '\n';

    std::cout << "\nTask 3\n";
    std::string str2 = "won siht nac eb daer";
    std::cout << "Исходная строка: " << str2 << "\nСтрока с развёрнутыми словами: " << reversed_words_in_string(str2) << '\n';
}
