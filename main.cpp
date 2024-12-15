#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main()
{
    const Menu::MenuItem* current = &(Items::MAIN);
    do {
        std::cout << "--- Обучайка ---" << std::endl;
        
        current = current->func(current);

        std::cout << std::endl;
    } while (true);

    return 0;
}