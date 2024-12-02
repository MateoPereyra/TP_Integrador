#include "Juego.h"
#include "Escena.h"
#include "Menu.h"

int main() {

    Juego j(new Menu);
    j.jugar();

    return 0;
}