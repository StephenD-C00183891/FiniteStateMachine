#pragma once

#include "command.h"
#include "InputHandler.h"

class Idle : public State
{
public:
	Idle() { };
	~Idle() { };

	void jumping(Animation* a);
	void climbing(Animation* a);
};