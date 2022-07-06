#pragma once
#include "Headers.h"


class Object;
class ObjectManager
{
private:
	static ObjectManager* Instance;
public:
	static ObjectManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new ObjectManager;

		return Instance;
	}
private:
	map<string, list<Object*>> Objectlist;
public:
	void AddObject(Object* _Object);
	list<Object*>* GetObjectlist(string _strkey);
private:
	ObjectManager();
public:
	~ObjectManager();
};

