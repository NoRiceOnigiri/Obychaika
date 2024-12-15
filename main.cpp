#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main()
{
    Menu::MenuItem main_study {"1. Изучать программирование.", Functions::main_play_football};
    Menu::MenuItem main_play_football {"0. Пойти играть в футбол.", Functions::main_play_football};

    do {
        std::cout << "--- Обучайка ---" << std::endl;
        
        std::cout << (&main_study)->title << std::endl;
        std::cout << (&main_play_football)->title << std::endl;

        std::cout << "Введите ответ: ";
        int answer;
        std::cin >> answer;
        if (answer == 0){
           (&main_play_football)->func();
        }

        std::cout << std::endl;
    } while (true);

    return 0;
}