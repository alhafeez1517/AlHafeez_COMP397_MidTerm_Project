#pragma once
#ifndef __BACKGROUND__
#define __BACKGROUND__

#include "DisplayObject.h"
#include "Config.h"

class background :public DisplayObject
{
public:
	background(std::string imagePath = "../Assets/textures/background.png",
		std::string imageName = "background",
		GameObjectType type = BACKGROUND,
		glm::vec2 position = glm::vec2(Config::SCREEN_WIDTH, Config::SCREEN_HEIGHT), bool isCentered = false);
	~background();


	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined(__BACKGROUND__)


