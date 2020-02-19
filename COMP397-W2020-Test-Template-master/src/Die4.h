#pragma once
#ifndef __DIE4__
#define __DIE4__

#include "DisplayObject.h"

class Die4 :public DisplayObject
{
public:
	Die4(std::string imagePath = "../Assets/textures/4.png",
		std::string imageName = "4",
		GameObjectType type = DIE4,
		glm::vec2 position = glm::vec2(0.0f, 0.0f), bool isCentered = true);
	~Die4();


	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined(__DIE4__)
