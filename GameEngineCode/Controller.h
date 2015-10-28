#pragma once
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Component.h"
#include "GameObject.h"
#include "Transform.h"
#include <stdio.h>

class Controller :
	public Component
{

	
public:
	Controller();
	~Controller();
	void Update();
	void Update(Transform* t);
	void serialize(FILE** fpp);
};

#endif