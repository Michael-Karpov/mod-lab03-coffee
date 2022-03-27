#include <iostream>
#include "Automata.h"
using namespace std;

int main()
{
    Automata machine = Automata();
    machine.on();
    machine.getMenu();
    machine.coin(300);
    machine.choice(2);
    machine.finish();
    machine.coin(500);
    machine.coin(100);
    machine.choice(4);
    machine.finish();
    machine.off();
    return 0;
}
