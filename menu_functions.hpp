#pragma once

namespace Functions {
    const Menu::MenuItem* print_options(const Menu::MenuItem* current); // print

    const Menu::MenuItem* main_play_football(const Menu::MenuItem* current); // 1 level -> exit

    const Menu::MenuItem* main_study(const Menu::MenuItem* current); // 1 level -> 2 level
    const Menu::MenuItem* study_programm_lenguages(const Menu::MenuItem* current);
    const Menu::MenuItem* algoritms_and_structures(const Menu::MenuItem* current);
    const Menu::MenuItem* back_to_main_menu(const Menu::MenuItem* current); // 2 level -> 1 level

    const Menu::MenuItem* other_technologies(const Menu::MenuItem* current); // 2 level -> 3 level
    const Menu::MenuItem* data_bases(const Menu::MenuItem* current);
    const Menu::MenuItem* multithread_programming(const Menu::MenuItem* current);
    const Menu::MenuItem* network_technologies(const Menu::MenuItem* current);
    const Menu::MenuItem* back_to_previous_menu(const Menu::MenuItem* current); // 3 level -> 2 level
}