#include "Menu.h"

Menu::Menu(){


	//Carga de botones
	iniciar = Boton("Iniciar");
	reglas = Boton("Reglas");
	salir = Boton("Salir");
	iniciar.setPosition(Vector2f (150, 400));
	reglas.setPosition(Vector2f (150, 500));
	salir.setPosition(Vector2f (150, 600));

	textureFondo.loadFromFile("fondo.jpg");
	fondoMenu.setTexture(textureFondo);
}

void Menu::actualizar(Juego &j){
	Vector2i mouse = Mouse::getPosition(*j.getWindow());

	if (iniciar.actualizar(mouse)) {

	}

	if (reglas.actualizar(mouse)) {
		j.cambiarEscena(new Reglas());
	}

	if (salir.actualizar(mouse)) {
		(*j.getWindow()).close();
	}
}

void Menu::dibujar(RenderWindow& w) {
	w.clear();

	w.draw(fondoMenu);
	iniciar.draw(w);
	reglas.draw(w);
	salir.draw(w);

	w.display();
}
