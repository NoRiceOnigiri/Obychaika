#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main()
{
    Menu::MenuItem main_study {"1. Изучать программирование.", Functions::main_study};
    Menu::MenuItem main_play_football {"0. Пойти играть в футбол.", Functions::main_play_football};

    Menu::MenuItem* main_options[] = {&main_play_football, &main_study};
    const int main_options_count = sizeof(main_options)/sizeof(main_options[0]);
    Menu::MenuItem main {NULL, Functions::print_options, nullptr, main_options, main_options_count};
    
    main_study.parent = &main;
    main_play_football.parent = &main;

    Menu::MenuItem* current = &main;
    do {
        std::cout << "--- Обучайка ---" << std::endl;
        
        current = current->func(current);

        std::cout << std::endl;
    } while (true);

    return 0;
}