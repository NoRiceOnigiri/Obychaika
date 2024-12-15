#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

const Menu::MenuItem* Functions::print_options(const Menu::MenuItem* current) {

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

const Menu::MenuItem* Functions::main_play_football(const Menu::MenuItem* current) { 
    std::exit(0);
}

const Menu::MenuItem* Functions::main_study(const Menu::MenuItem* current) {
    std::cout << "Учимся ... поучились." << std::endl;
    return current->parent;
}