#pragma once
#ifndef __DIE2__
#define __DIE2__

#include "DisplayObject.h"

class Die2 :public DisplayObject
{
public:
	Die2(std::string imagePath = "../Assets/textures/2.png",
		std::string imageName = "2",
		GameObjectType type = DIE2,
		glm::vec2 position = glm::vec2(0.0f, 0.0f), bool isCentered = true);
	~Die2();


	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined(__DIE2__)

