#include "Level1Scene.h"
#include "Game.h"
#include "Config.h"
#include "TextureManager.h"
#include <iostream>

Level1Scene::Level1Scene()
{
	start();
	/*TheTextureManager::Instance()->load
	("../Assets/textures/backgroung.png", "background", TheGame::Instance()->getRenderer());*/
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pRollButton->draw();
	m_pNumber1->draw();
	m_pNumber2->draw();
	drawDie();
	//m_pBackground->draw();
	//m_pBackground->setPosition(glm::vec2(640.0f, 480.0f));

}

void Level1Scene::update()
{

	m_pRollButton->setMousePosition(m_mousePosition);
	m_pRollButton->ButtonClick();

	checkRollButton();
	
	
	
}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(true);
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(false);
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
#pragma region Image Serialization
	m_pDie1 = new Die1();
	m_pDie2 = new Die2();
	m_pDie3 = new Die3();
	m_pDie4 = new Die4();
	m_pDie5 = new Die5();
	m_pDie6 = new Die6();
	m_pBackground = new background();
#pragma endregion

	m_pRollButton = new RollButton();
	m_pRollButton->setMouseButtonClicked(false);
	m_pUtil = new Util();

	SDL_Color red = { 255, 0, 0, 0 };
	m_pNumber1 = new Label
	(number1Text, "digital7", 40, red, glm::vec2(120.0f, 310.0f), false);
	m_pNumber1->setParent(this);
	addChild(m_pNumber1);

	m_pNumber2 = new Label
	(number2Text, "digital7", 40, red, glm::vec2(475.0f, 310.0f), false);
	m_pNumber2->setParent(this);
	addChild(m_pNumber2);
	
	
}

void Level1Scene::checkRollButton()
{
	if (m_pRollButton->ButtonClick())
	{
		m_pDie1->clean();
		m_pDie2->clean();
		m_pDie3->clean();
		m_pDie4->clean();
		m_pDie5->clean();
		m_pDie6->clean();
		
		generateNumber();
		std::cout << getNumber1() << std::endl;
		std::cout << getNumber2() << std::endl;
		//drawDie();
		

		m_pRollButton->setMouseButtonClicked(false);
	}
}

void Level1Scene::generateNumber()
{
	int tempNumb1 = m_pUtil->RandomRange(1, 6);
	int tempNumb2= m_pUtil->RandomRange(1, 6);
	setNumber1(tempNumb1);
	setNumber2(tempNumb2);


	
	
}

void Level1Scene::drawDie()
{
	switch (getNumber1())
	{
	
	case 1:
	

		number1Text = std::to_string(getNumber1());
		m_pNumber1->setText(number1Text);

		m_pDie1->setPosition(glm::vec2(120.0f, 170.0f));
		m_pDie1->draw();

		break;
	case 2:
	

		number1Text = std::to_string(getNumber1());
		m_pNumber1->setText(number1Text);

		m_pDie2->setPosition(glm::vec2(120.0f, 170.0f));
		m_pDie2->draw();
		break;
	case 3:
	

		number1Text = std::to_string(getNumber1());
		m_pNumber1->setText(number1Text);

		m_pDie3->setPosition(glm::vec2(120.0f, 170.0f));
		m_pDie3->draw();
		break;
	case 4:

		
		number1Text = std::to_string(getNumber1());
		m_pNumber1->setText(number1Text);

		m_pDie4->setPosition(glm::vec2(120.0f, 170.0f));
		m_pDie4->draw();
		break;
	case 5:

		

		number1Text = std::to_string(getNumber1());
		m_pNumber1->setText(number1Text);

		m_pDie5->setPosition(glm::vec2(120.0f, 170.0f));
		m_pDie5->draw();
		break;
	case 6:

		

		number1Text = std::to_string(getNumber1());
		m_pNumber1->setText(number1Text);

		m_pDie6->setPosition(glm::vec2(120.0f, 170.0f));
		m_pDie6->draw();
		break;
	}

	switch (getNumber2())
	{
	
	case 1:
		
		number2Text = std::to_string(getNumber2());
		m_pNumber2->setText(number2Text);
		m_pDie1->setPosition(glm::vec2(490.0f, 170.0f));
		m_pDie1->draw();
		break;
	case 2:
		
		number2Text = std::to_string(getNumber2());
		m_pNumber2->setText(number2Text);
		m_pDie2->setPosition(glm::vec2(490.0f, 170.0f));
		m_pDie2->draw();
		break;
	case 3:
		
		number2Text = std::to_string(getNumber2());
		m_pNumber2->setText(number2Text);
		m_pDie3->setPosition(glm::vec2(490.0f, 170.0f));
		m_pDie3->draw();
		break;
	case 4:
	
		number2Text = std::to_string(getNumber2());
		m_pNumber2->setText(number2Text);
		m_pDie4->setPosition(glm::vec2(490.0f, 170.0f));
		m_pDie4->draw();
		break;
	case 5:
	
		number2Text = std::to_string(getNumber2());
		m_pNumber2->setText(number2Text);
		m_pDie5->setPosition(glm::vec2(490.0f, 170.0f));
		m_pDie5->draw();
		break;
	case 6:
		
		number2Text = std::to_string(getNumber2());
		m_pNumber2->setText(number2Text);
		m_pDie6->setPosition(glm::vec2(490.0f, 170.0f));
		m_pDie6->draw();
		break;
	}


}

int Level1Scene::getNumber1()
{
	return number1;
}



int Level1Scene::getNumber2()
{
	return number2;
}

void Level1Scene::setNumber1(int numb1)
{
	number1 = numb1;
}

void Level1Scene::setNumber2(int numb2)
{
	number2 = numb2;
}


glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

