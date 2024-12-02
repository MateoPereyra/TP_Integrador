#ifndef ESCENA_H
#define ESCENA_H
#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
//#include "Juego.h"

using namespace sf;

class Juego;

class Escena {
public:
	Escena();
	~Escena();
	virtual void actualizar(Juego &j) = 0;
	virtual void dibujar(RenderWindow &w) = 0;
};

#endif