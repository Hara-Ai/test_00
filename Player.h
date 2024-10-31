#pragma once
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
		{66,72,0}, //サイズ
		{player.Size.x / 2, player.Size.y / 2,0}, //半径
		{0 + player.Radius.x, 0 + player.Radius.y, 0}, //  ポジション
		{0 - player.Radius.x, 0 - player.Radius.y, 0}, //  左上
		{0 + player.Radius.x, 0 - player.Radius.y, 0}, //  右上
		{0 - player.Radius.x, 0 + player.Radius.y, 0}, //  左下
		{0 + player.Radius.x, 0 + player.Radius.y, 0}, //  右下
		{player.Size.x, player.Size.y, 0}, //スピード
		{Novice::LoadTexture("./Resources/images/player/ghost.png")}
	};

	int playerTilePosX = (int)player.position.x / (int)player.Size.x;//現在のプレイヤーのX座標
	int playerTilePosY = (int)player.position.y / (int)player.Size.y;//現在のプレイヤーのY座標



	void Drow();
	void Move();

};
