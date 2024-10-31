#pragma once
#include <Vector3.h>

struct original final // キャラ全般
{
	Vector3 Size;
	Vector3 Radius;
	Vector3 position;
	Vector3 LeftTop;
	Vector3 RightTop;
	Vector3 LeftBottom;
	Vector3 RightBottom;
	Vector3 speed;
	const int Texture;
};

struct card final
{
	const int Block;
	const int card1;
	const int card2;
	const int card3;
};