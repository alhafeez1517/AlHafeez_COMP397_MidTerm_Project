#pragma once
#ifndef __DIE5__
#define __DIE5__

#include "DisplayObject.h"
class Die5 :public DisplayObject
{
public:
	Die5(std::string imagePath = "../Assets/textures/5.png",
		std::string imageName = "5",
		GameObjectType type = DIE5,
		glm::vec2 position = glm::vec2(0.0f, 0.0f), bool isCentered = true);
	~Die5();


	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined(__DIE5__)
