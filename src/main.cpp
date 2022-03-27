#include <iostream>
#include "Automata.h"
using namespace std;

int main() {
    Automata machine = Automata();
    machine.on();
    machine.getMenu();
    machine.coin(400);
    machine.choice(1);
    machine.finish();
    machine.coin(10);
    machine.coin(150);
    machine.choice(3);
    machine.finish();
    machine.off();
    return 0;
}
