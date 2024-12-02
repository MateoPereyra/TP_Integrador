#ifndef JUEGO_H
#define JUEGO_H
#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Boton.h"
#include "Reglas.h"
//#include "Menu.h"
#include "Escena.h"


class Juego {
public:
	Juego();
	Juego(Escena *e);
	void jugar();
	~Juego();
	void cambiarEscena(Escena *nueva_escena);
	RenderWindow* getWindow();
	void actualizar();
	void dibujar();
	void procesarEventos();
private:
	RenderWindow m_win;
	Escena *m_esc, *m_prox = nullptr;

}; 

#endif