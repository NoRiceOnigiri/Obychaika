#pragma once
namespace Menu {
    struct MenuItem
    {
        const char* const title;
        Menu::MenuItem* (*func)(MenuItem*);

        MenuItem** options;
        const int options_count;
    };
}