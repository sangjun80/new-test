#include "Menu.h"
#include "SceneManager.h"
#include "InputManager.h"


Menu::Menu() { }
Menu::~Menu() { Release(); }


void Menu::Initialize()
{
}

void Menu::Update()
{
	if (InputManager::GetInstance()->GetKey() == KEY_ENTER)
	{
		SceneManager::GetInstance()->SetScene(STAGE);
	}
}

void Menu::Render()
{
	cout << "MENU" << endl;
}

void Menu::Release()
{
}
