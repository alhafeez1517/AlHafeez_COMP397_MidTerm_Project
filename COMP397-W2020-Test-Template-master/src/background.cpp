#include "background.h"
#include "Game.h"
#include "Config.h"

background::background(std::string imagePath, std::string imageName, GameObjectType type, glm::vec2 position, bool isCentered)
{
	TheTextureManager::Instance()->load("../Assets/textures/background.png",
		"background", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("background");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH, Config::SCREEN_HEIGHT));
	setType(BACKGROUND);
	isCentered = false;
}

background::~background()
{
}

void background::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("background", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void background::update()
{
}

void background::clean()
{
}
