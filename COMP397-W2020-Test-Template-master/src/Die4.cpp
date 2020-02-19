#include "Die4.h"
#include "Game.h"

Die4::Die4(std::string imagePath, std::string imageName, GameObjectType type, glm::vec2 position, bool isCentered)
{
	TheTextureManager::Instance()->load("../Assets/textures/4.png",
		"4", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("4");
	setWidth(size.x * 0.5f);
	setHeight(size.y * 0.5f);
	setPosition(glm::vec2(382.0f, 305.0f));
	setType(DIE4);
}

Die4::~Die4()
{
}

void Die4::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("4", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Die4::update()
{
}

void Die4::clean()
{
}