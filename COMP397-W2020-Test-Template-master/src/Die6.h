#pragma once
#ifndef __DIE6__
#define __DIE6__

#include "DisplayObject.h"
class Die6 :public DisplayObject
{
public:
	Die6(std::string imagePath = "../Assets/textures/6.png",
		std::string imageName = "6",
		GameObjectType type = DIE6,
		glm::vec2 position = glm::vec2(0.0f, 0.0f), bool isCentered = true);
	~Die6();


	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined(__DIE5__)
