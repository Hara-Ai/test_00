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

	// 画像
	allEnemyTexture myTexture
	{
		{Novice::LoadTexture("./Resources/images/player/enemy01.png")}
	};

	// 敵にふれたかどうかの判定フラグ
	static const int FlagNunber = 1;// 敵の枚数

	bool enemyFlag[FlagNunber] = {};// 敵

	void Drow();
	void MovePattern1(Player& myPlayer);

	// 他のcppで変数の状態を取得するための関数
	static Enemy& GetInstance()
	{
		static Enemy instance;
		return instance;
	}

};