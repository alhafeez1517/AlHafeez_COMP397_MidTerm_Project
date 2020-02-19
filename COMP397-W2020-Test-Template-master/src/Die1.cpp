#include "Die1.h"
#include "Game.h"

Die1::Die1(std::string imagePath, std::string imageName, GameObjectType type, glm::vec2 position, bool isCentered)
{
	TheTextureManager::Instance()->load("../Assets/textures/1.png",
		"1", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("kiwi");
	setWidth(size.x * 0.5f);
	setHeight(size.y * 0.5f);
	setPosition(glm::vec2(382.0f, 305.0f));
	setType(DIE1);
}

Die1::~Die1()
{
}

void Die1::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("1", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void Die1::update()
{
}

void Die1::clean()
{
}
