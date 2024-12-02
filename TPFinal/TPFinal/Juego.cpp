
#include <iostream>
#include "Juego.h"

using namespace sf;
using namespace std;

Juego::Juego() {
}

Juego::Juego(Escena *e) : m_win(VideoMode(1080, 720), "Juego") {

    m_esc = e;
}


void Juego::cambiarEscena(Escena* nueva_escena){
    m_prox = nueva_escena;
}

RenderWindow* Juego::getWindow() {
    return &m_win;
}

void Juego::actualizar() {
    m_esc->actualizar(*this);
}

void Juego::dibujar() {
    m_esc->dibujar(m_win);
}

void Juego::jugar() {

    while (m_win.isOpen())
    {

        procesarEventos();
        actualizar();
        dibujar();

        if (m_prox) {
            delete m_esc;
            m_esc = m_prox;
            m_prox = nullptr;
        }

    }

}

void Juego::procesarEventos() {
    Event event;
    while (m_win.pollEvent(event))
    {
        /////Procesar eventos//////
        switch (event.type) {

            /////Si se cerro la ventana/////
        case Event::Closed:
            m_win.close();
            break;
        }

    }
}


Juego::~Juego() {
    delete m_esc;
}