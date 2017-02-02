#pragma once

#include "State.h"
#include "Idle.h"
#include "Animation.h"

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};

	void idle(Animation* a)
	{
		cout << "Going from Climbing to Idle" << endl;
		a->setCurrent(new Idle());
		delete this;
	};
};