#include <iostream>

#include "menu_items.hpp"
#include "menu_functions.hpp"

const Menu::MenuItem Items::MAIN_PLAY_FOOTBALL = {"0. Пойти играть в футбол.", Functions::main_play_football, &Items::MAIN};
const Menu::MenuItem Items::MAIN_STUDY = {"1. Изучать программирование.", Functions::main_study, &Items::MAIN};

namespace {
    const Menu::MenuItem* const main_options[] = 
    {
        &Items::MAIN_PLAY_FOOTBALL,
        &Items::MAIN_STUDY
    };
    const int main_options_count = sizeof(main_options)/sizeof(main_options[0]);
};
const Menu::MenuItem Items::MAIN = {nullptr, Functions::print_options, nullptr, main_options, main_options_count};




