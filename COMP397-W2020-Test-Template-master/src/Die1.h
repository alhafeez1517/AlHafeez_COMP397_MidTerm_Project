#pragma once
#ifndef __DIE1__
#define __DIE1__

#include "DisplayObject.h"

class Die1 :public DisplayObject
{
public:
	Die1(std::string imagePath = "../Assets/textures/1.png",
		std::string imageName = "1",
		GameObjectType type = DIE1,
		glm::vec2 position = glm::vec2(0.0f, 0.0f), bool isCentered = true);
	~Die1();


	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined(__DIE1__)

