#pragma once
namespace Menu {
    struct MenuItem
    {
        const char* const title;
        void (*func)();
    };
}