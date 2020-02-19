#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "RollButton.h"
#include "Util.h"
#include "Die1.h"
#include "Die2.h"
#include "Die3.h"
#include "Die4.h"
#include "Die5.h"
#include "Die6.h"
#include "Label.h"
#include "background.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	void checkRollButton();
	void generateNumber();
	void drawDie();

	int getNumber1();
	int getNumber2();
	void setNumber1(int numb1);
	void setNumber2(int numb2);
	
	std::string number1Text;
	std::string number2Text;

	// getters
	glm::vec2 getMousePosition();

private:
	// game objects
	background* m_pBackground;
	RollButton* m_pRollButton;
	Die1* m_pDie1;
	Die2* m_pDie2;
	Die3* m_pDie3;
	Die4* m_pDie4;
	Die5* m_pDie5;
	Die6* m_pDie6;

	Label* m_pNumber1;
	Label* m_pNumber2;
	// private data member
	glm::vec2 m_mousePosition;
	
	Util* m_pUtil;
	int number1=0;
	int number2=0;
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
