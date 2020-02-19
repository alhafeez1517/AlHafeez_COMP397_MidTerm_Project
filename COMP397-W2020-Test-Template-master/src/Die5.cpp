#include "Die5.h"
#include "Game.h"

Die5::Die5(std::string imagePath, std::string imageName, GameObjectType type, glm::vec2 position, bool isCentered)
{
	TheTextureManager::Instance()->load("../Assets/textures/5.png",
		"5", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("5");
	setWidth(size.x*0.5f);
	setHeight(size.y*0.5f);
	setPosition(glm::vec2(382.0f, 305.0f));
	setType(DIE5);
}

Die5::~Die5()
{
}

void Die5::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("5", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Die5::update()
{
}

void Die5::clean()
{
}