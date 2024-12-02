#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

class Boton{
public:
	Boton();
	Boton(const std::string &texto); 
	void setPosition(const Vector2f &pos);
	void draw(RenderWindow &w);
	bool actualizar(const Vector2i &mouse);
private:
	Text m_texto;
	FloatRect m_caja;
	bool m_apretado;
	Font font;

	Color m_colorBordeMouseEncima;
	Color m_colorRellenoMouseEncima;

	Color m_colorRellenoMouseNoEncima;
	Color m_colorBordeMouseNoEncima;

	
};