// Copyright 2022 UNN-IASR
#include <iostream>
#include "Automata.h"
using namespace std;

int main()
{
    Automata machine = Automata();
    machine.on();
    machine.getMenu();
    machine.coin(150);
    machine.choice(0);
    machine.finish();
    machine.coin(500);
    machine.coin(100);
    machine.choice(4);
    machine.finish();
    machine.off();
    return 0;
}
