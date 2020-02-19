#include "Die2.h"
#include "Game.h"

Die2::Die2(std::string imagePath, std::string imageName, GameObjectType type, glm::vec2 position, bool isCentered)
{
	TheTextureManager::Instance()->load("../Assets/textures/2.png",
		"2", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("2");
	setWidth(size.x * 0.5f);
	setHeight(size.y * 0.5f);
	setPosition(glm::vec2(382.0f, 305.0f));
	setType(DIE2);
}

Die2::~Die2()
{
}

void Die2::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("2", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Die2::update()
{
}

void Die2::clean()
{
}
