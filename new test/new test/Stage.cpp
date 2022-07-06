#include "Stage.h"
#include "SceneManager.h"
#include "InputManager.h"
#include "Player.h"
#include "ObjectManager.h"


Stage::Stage() { }
Stage::~Stage() { Release(); }


void Stage::Initialize()
{
	list<Object*>* PlayerList = ObjectManager::GetInstance()->GetObjectlist("Player");

	if (PlayerList != nullptr)
		pPlayer = PlayerList->front();


	if (pPlayer != nullptr)
		pPlayer->Initialize();

}

void Stage::Update()
{
	if (pPlayer != nullptr)
		pPlayer->Update();
}

void Stage::Render()
{
	cout << "STAGE" << endl;

	if (pPlayer != nullptr)
		pPlayer->Render();
}

void Stage::Release()
{
	delete  pPlayer;
	pPlayer = nullptr;
}

