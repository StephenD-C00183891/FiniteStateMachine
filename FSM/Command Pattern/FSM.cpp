// Command Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>


#include "Animation.h"
#include "State.h"
#include "Idle.h"

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
			std::this_thread::sleep_for(chrono::milliseconds (1000));
			i ++;
		}
		else if (i == 1)
		{
			fsm.idle();
			std::this_thread::sleep_for(chrono::milliseconds (1000));
			i ++;
		}
		else if (i == 2)
		{
			fsm.climbing();
			std::this_thread::sleep_for(chrono::milliseconds(1000));
			i ++;
		}
		else if (i == 3)
		{
			fsm.idle();
			std::this_thread::sleep_for(chrono::milliseconds(1000));
			i = 0;
		}
	}
}

