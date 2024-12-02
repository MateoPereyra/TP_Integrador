#include "Boton.h"

using namespace sf;

Boton::Boton() {
	
}


Boton::Boton(const std::string &texto) {

	font.loadFromFile("Bratsy Script Demo.ttf");

	m_apretado = false;
	m_texto.setString(texto);
	m_texto.setFont(font);
	m_texto.setCharacterSize(50);
	m_texto.setFillColor(Color::White);
	m_texto.setOutlineColor(Color::Black);
	m_texto.setOutlineThickness(10);
	m_texto.setOrigin(m_texto.getGlobalBounds().width / 2, m_texto.getGlobalBounds().height / 2);



	m_colorBordeMouseEncima = Color::Green;
	m_colorRellenoMouseEncima = Color({255, 0, 0});
	m_colorBordeMouseNoEncima = Color::Yellow;
	m_colorRellenoMouseNoEncima = Color::Magenta;
}

void Boton::setPosition(const Vector2f &pos) {
	m_texto.setPosition(pos); 
	m_caja = m_texto.getGlobalBounds();
}

void Boton::draw(RenderWindow &w) {
	w.draw(m_texto);
}

bool Boton::actualizar(const Vector2i &mouse) {

		if (m_caja.contains(static_cast<float>(mouse.x), static_cast<float>(mouse.y))) {

			m_texto.setFillColor(m_colorRellenoMouseEncima);
			m_texto.setOutlineColor(m_colorBordeMouseEncima);

			if (Mouse::isButtonPressed(Mouse::Left) and !m_apretado) {
				m_apretado = true;
				return true;
			}
			else if (!Mouse::isButtonPressed(Mouse::Left)) {
				m_apretado = false;
			}
		}
		else {
			m_texto.setFillColor(m_colorRellenoMouseNoEncima);
			m_texto.setOutlineColor(m_colorBordeMouseNoEncima);
		}
		return false;
}