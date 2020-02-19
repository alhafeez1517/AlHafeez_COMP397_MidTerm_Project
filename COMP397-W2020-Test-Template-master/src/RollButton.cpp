#include "RollButton.h"
#include "Game.h"
#include <iostream>

RollButton::RollButton()
	:Button(
		"../Assets/textures/rollButton.png",
		"rollbutton",
		ROLL_BUTTON, glm::vec2(300.0f, 400.0f)), m_isClicked(false)
{

}

RollButton::~RollButton()
{

}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			m_isClicked = true;
			std::cout << "Roll Button Clicked" << std::endl;

		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
