#pragma once

#include "InputHandler.h"
#include "InputManager.h"
#include "command.h"

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};

	void idle(Animation* a)
	{
		cout << "Going from Jumping to Idle" << endl;
		a->setCurrent(new Idle());
		delete this;
	};
};