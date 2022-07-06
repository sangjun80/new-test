#include "Player.h"
#include "InputManager.h"



Player::Player() { }
Player::Player(Transform _info) : Object(_info) { }
Player::~Player() { Release(); }





void Player::Initialize()
{
	strKey = "Player";
}

void Player::Update()
{
	if (InputManager::GetInstance()->GetKey() == KEY_UP)
	{
		Transinfo.Position.y += 1;
	}
	if (InputManager::GetInstance()->GetKey() == KEY_DOWN)
	{
		Transinfo.Position.y -= 1;
	}
	if (InputManager::GetInstance()->GetKey() == KEY_LEFT)
	{
		Transinfo.Position.x -= 1;
	}
	if (InputManager::GetInstance()->GetKey() == KEY_RIGHT)
	{
		Transinfo.Position.x += 1;
	}


}

void Player::Render()
{
	cout << "Player" << endl;
	cout << "POS X : " << Transinfo.Position.x << endl;
	cout << "POS Y : " << Transinfo.Position.y << endl;
}

void Player::Release()
{
}
