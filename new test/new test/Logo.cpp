#include "SceneManager.h"
#include "InputManager.h"
#include "ObjectManager.h"
#include "Player.h"
#include "Logo.h"


Logo::Logo() { }
Logo::~Logo() { Release(); }

void Logo::Initialize()
{
	Object* pPlayer = new Player;
	pPlayer->Initialize();

	ObjectManager::GetInstance()->AddObject(pPlayer);

}

void Logo::Update()
{
	if (InputManager::GetInstance()->GetKey() == KEY_ENTER)
	{
		SceneManager::GetInstance()->SetScene(MENU);
	}

}

void Logo::Render()
{
	cout << "LOGO" << endl;
}

void Logo::Release()
{
}

