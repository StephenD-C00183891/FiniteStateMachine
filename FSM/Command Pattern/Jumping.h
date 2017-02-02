#pragma once

#include "State.h"
#include "Idle.h"
#include "Animation.h"

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