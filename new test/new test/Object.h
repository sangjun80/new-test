#pragma once
#include "Headers.h"


class Object
{
protected:
	Transform Transinfo;
	string strKey;
public:
	string GetKey() { return strKey; }
public:
	virtual void Initialize()PURE;
	virtual void Update()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	Object();
	Object(Transform _info);
	virtual	~Object();
};

