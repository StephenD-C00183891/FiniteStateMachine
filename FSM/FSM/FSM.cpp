// Command Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>


#include "InputHandler.h"

using namespace std;

int main()
{

	Animation fsm;
	int i = 0;

	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			this_thead::sleep_for(chrono::milliseconds dura(1000));
			i = 1;
		}
		else
		{
			fsm.climbing();
			this_thead::sleep_for(chrono::milliseconds dura(1000));
			i = 0;
		}
	}
}

