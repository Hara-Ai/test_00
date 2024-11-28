#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

float playerEasing(float x)
{
	return 1 - cosf((x * (float)M_PI) / 2);
}

