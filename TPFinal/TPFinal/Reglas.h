#ifndef REGLAS_H
#define REGLAS_H
#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Juego.h"
#include "Escena.h"

using namespace sf;

class Escena;

class Reglas : public Escena {
public:
	Reglas();
	void dibujar(RenderWindow& w);
	void actualizar(Juego &j);
private:
	Boton volver;
	Text m_texto;
	Font font; 
};

#endif