﻿#include "stdafx.h"
#include "PowerUp.h"

//vật phẩm
PowerUp::PowerUp()
{
	sf::RectangleShape::setSize(sf::Vector2f(25.f, 9.f));
	itsPower = 0;
}


PowerUp::~PowerUp()
{
}


void PowerUp::fallDown(double fallFactor) //vật phẩm di chuyển xuống
{
	sf::RectangleShape::move(0, (1.5 * fallFactor) );
}

void PowerUp::draw(sf::RenderWindow & theWindow, double fallFactor) //vẽ vật phẩm
{
	theWindow.draw(*this);
	fallDown(fallFactor);
}

void PowerUp::setPower(int theInt)
{
	itsPower = theInt;
}
