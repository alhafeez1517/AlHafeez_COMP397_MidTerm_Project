#pragma once
#ifndef __DIE3__
#define __DIE3__

#include "DisplayObject.h"

class Die3 :public DisplayObject
{
public:
	Die3(std::string imagePath = "../Assets/textures/3.png",
		std::string imageName = "3",
		GameObjectType type = DIE3,
		glm::vec2 position = glm::vec2(0.0f, 0.0f), bool isCentered = true);
	~Die3();


	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined(__DIE3__)
