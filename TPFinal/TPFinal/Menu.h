#pragma once
#include "Juego.h"
#include "Escena.h"


class Menu : public Escena {
public:
	Menu();
	void actualizar(Juego &j);
	void dibujar(RenderWindow &w);
private: 
	Boton iniciar, reglas, salir;
	Texture textureFondo;
	Sprite fondoMenu;
	Font font;
	Text m_texto; 
};
