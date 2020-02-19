#include "Die3.h"
#include "Game.h"

Die3::Die3(std::string imagePath, std::string imageName, GameObjectType type, glm::vec2 position, bool isCentered)
{
	TheTextureManager::Instance()->load("../Assets/textures/3.png",
		"3", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("3");
	setWidth(size.x * 0.5f);
	setHeight(size.y * 0.5f);
	setPosition(glm::vec2(382.0f, 305.0f));
	setType(DIE3);
}

Die3::~Die3()
{
}

void Die3::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("3", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Die3::update()
{
}

void Die3::clean()
{
}
