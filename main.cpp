#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main()
{
    Menu::MenuItem main_study {"1. Изучать программирование.", Functions::main_study};
    Menu::MenuItem main_play_football {"0. Пойти играть в футбол.", Functions::main_play_football};

    Menu::MenuItem* options [] = {&main_play_football, &main_study};
    const int options_count = sizeof(options)/sizeof(options[0]);
    do {
        std::cout << "--- Обучайка ---" << std::endl;
        
        for (int i = 1; i < options_count; i++)
            std::cout << options[i]->title << std::endl;
        std::cout << options[0]->title << std::endl;
        
        int answer;
        do
        {
            std::cout << "Введите ответ: ";
            std::cin >> answer;
        } while (answer < 0 || answer >= options_count);
        options[answer]->func();

        std::cout << std::endl;
    } while (true);

    return 0;
}