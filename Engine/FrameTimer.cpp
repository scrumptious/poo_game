#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

float FrameTimer::Mark()
{
	steady_clock::time_point old = last;
	last = steady_clock::now();
	duration<float> diff = last - old;
	return diff.count();
}
