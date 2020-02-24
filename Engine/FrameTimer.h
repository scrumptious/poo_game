#pragma once
#include <chrono>
using std::chrono::steady_clock;

class FrameTimer
{
public:
	FrameTimer();
	float Mark();
private:
	steady_clock::time_point last;
};

