#include "Die6.h"
#include "Game.h"

Die6::Die6(std::string imagePath, std::string imageName, GameObjectType type, glm::vec2 position, bool isCentered)
{
	TheTextureManager::Instance()->load("../Assets/textures/6.png",
		"6", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("6");
	setWidth(size.x * 0.5f);
	setHeight(size.y * 0.5f);
	setPosition(glm::vec2(382.0f, 305.0f));
	setType(DIE6);
}

Die6::~Die6()
{
}

void Die6::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("6", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Die6::update()
{
}

void Die6::clean()
{
}