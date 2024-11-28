#pragma once
#include "Player.h"
#include "structData.h"

class Enemy
{
public:
	
	original enemy{
		{120, 120, 0}, // サイズ
		{enemy.Size.x / 2, enemy.Size.y / 2,0},      // 半径
		{90.0f, 90.0f, 0}, // ポジション
		{enemy.position.x - enemy.Radius.x, enemy.position.y - enemy.Radius.y, 0}, // 左上
		{enemy.position.x + enemy.Radius.x, enemy.position.y - enemy.Radius.y, 0}, // 右上
		{enemy.position.x - enemy.Radius.x, enemy.position.y + enemy.Radius.y, 0}, // 左下
		{enemy.position.x + enemy.Radius.x, enemy.position.y + enemy.Radius.y, 0}, // 右下
		{enemy.Size.x, enemy.Size.y, 0}, // スピード
		{Novice::LoadTexture("./Resources/images/player/enemy01.png")}
	};

	void Drow();
	void MovePattern1(Player& myPlayer);

};