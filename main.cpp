#include <iostream>

int main()
{
    do {
        std::cout << "--- Обучайка ---" << std::endl;
        
        std::cout << "1. Изучать программирование." << std::endl;
        std::cout << "0. Пойти играть в футбол." << std::endl;

        std::cout << "Введите ответ: ";
        int answer;
        std::cin >> answer;

        if (answer == 0){
            exit(0);
        }

        std::cout << std::endl;
    } while (true);

    return 0;
}