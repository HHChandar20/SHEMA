#include "GameManager.hpp"

int main(void)
{
	GameManager* gameManager = new GameManager();
	while(!gameManager->getShouldClose())
	{
		gameManager->Update();
	}

}