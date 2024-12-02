#include "Reglas.h"


Reglas::Reglas() {

	font.loadFromFile("Bratsy Script Demo.ttf");
	std::string texto = "Algo una palabra \n Otra palabra";
	m_texto.setString(texto); 
	m_texto.setFont(font);
	m_texto.setCharacterSize(20);
	m_texto.setFillColor(Color::White);
	m_texto.setOutlineColor(Color::Black);
	m_texto.setOutlineThickness(10);
	m_texto.setOrigin(m_texto.getGlobalBounds().width / 2, m_texto.getGlobalBounds().height / 2);

	volver = Boton("Volver");
	volver.setPosition(Vector2f (800, 600));
}

void Reglas::dibujar(RenderWindow& w) {
	w.clear(Color::Black);

	w.draw(m_texto);

	w.display();
}

void Reglas::actualizar(Juego &j) {
	Vector2i mouse = Mouse::getPosition(*j.getWindow());
	if (volver.actualizar(mouse)) {

	}
}
