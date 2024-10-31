#pragma once
#include <Vector3.h>

struct original final // キャラ全般変数
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

struct allMapChip final //マップチップ
{
	const int Block; bool BlockFlag;
	const int card1; bool card1Flag;
	const int card2; bool card2Flag;
	const int card3; bool card3Flag;
};