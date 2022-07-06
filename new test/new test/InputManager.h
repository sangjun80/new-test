#pragma once
#include "Headers.h"



class InputManager
{

private:
	static InputManager* Instance;
public:
	static InputManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new InputManager;

		return Instance;
	}

private:
	DWORD Key;
public:
	DWORD GetKey() { return Key; }

private:
	InputManager();
public:
	~InputManager();
public:
	void InputKey();
};

