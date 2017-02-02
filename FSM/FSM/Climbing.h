#pragma once

#include "InputHandler.h"
#include "InputManager.h"
#include "command.h"

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};

	void idle(Animation* a)
	{
		cout << "Going from Jumping to Idle" << endl;
		a->setCurrent(new Idle());
		delete this;
	};
};