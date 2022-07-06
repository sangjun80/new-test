#include "ObjectManager.h"
#include "Object.h"



ObjectManager* ObjectManager::Instance = nullptr;
ObjectManager::ObjectManager() { }
ObjectManager::~ObjectManager() {  }


void ObjectManager::AddObject(Object* _Object)
{
	map<string, list<Object*>>::iterator iter = Objectlist.find(_Object->GetKey());
	if (iter == Objectlist.end())
	{
		list<Object*> Templist;
		Templist.push_back(_Object);

		Objectlist.insert(make_pair(_Object->GetKey(), Templist));
	}
	else
	{
		iter->second.push_back(_Object);
	}
}

list<Object*>* ObjectManager::GetObjectlist(string _strkey)
{
	map<string, list<Object*>>::iterator iter = Objectlist.find(_strkey);
	if (iter == Objectlist.end())
	{
		return nullptr;
	}

	return &iter->second;

}
