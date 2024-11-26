﻿#pragma once
#include <Vector3.h>
#include <Novice.h>
#include "structData.h"

class Player
{
public:

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };


	int MoveCount  = 0; //移動するたびにカウントしていく変数

	original player
	{
		{120,120,0},                                   // サイズ
		{player.Size.x / 2, player.Size.y / 2,0},      // 半径
		{30, 30, 0}, // ポジション
		{player.position.x - player.Radius.x, player.position.y - player.Radius.y, 0}, // 左上
		{player.position.x + player.Radius.x, player.position.y - player.Radius.y, 0}, // 右上
		{player.position.x - player.Radius.x, player.position.y + player.Radius.y, 0}, // 左下
		{player.position.x + player.Radius.x, player.position.y + player.Radius.y, 0}, // 右下
		{player.Size.x, player.Size.y, 0},             // スピード
		{Novice::LoadTexture("./Resources/images/player/ghost.png")} // テクスチャ
	};

	int playerTilePosX = (int)player.position.x / (int)player.Size.x; //現在のプレイヤーのX座標
	int playerTilePosY = (int)player.position.y / (int)player.Size.y; //現在のプレイヤーのY座標

	void Drow();
	void Move();
	//void isC();
	// 他のcppで変数の状態を取得するための関数
	static Player& GetInstance()
	{
		static Player instance;
		return instance;
	}

};
