#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

Menu::MenuItem* Functions::print_options(Menu::MenuItem* current) {

    for (int i = 1; i < current->options_count; i++)
        std::cout << current->options[i]->title << std::endl;
    std::cout << current->options[0]->title << std::endl;

    int answer;
    do
    {
        std::cout << "Введите ответ: ";
        std::cin >> answer;
    
    } while (answer < 0 || answer >= current->options_count);

    return current->options[answer];
}

Menu::MenuItem* Functions::main_play_football(Menu::MenuItem* current) { 
    std::exit(0);
}

Menu::MenuItem* Functions::main_study(Menu::MenuItem* current) {
    std::cout << "Учимся..." << std::endl;
    return current;
}