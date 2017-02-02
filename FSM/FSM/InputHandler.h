#pragma once

#include "command.h"
#include <iostream>

using namespace std;

class State
{
public:
	virtual void idle(Animation* a)
	{
		cout << "State::Idling" << endl;
	}

	virtual void jumping(Animation* a)
	{
		cout << "State::Jumping" << endl;
	}

	virtual void climbing(Animation* a)
	{
		cout << "State::Climbing" << endl;
	}
};