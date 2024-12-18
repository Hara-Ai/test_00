﻿#pragma once
#include <Novice.h>
#include <structData.h>
#include "Player.h"
//class Player;
class mapChip
{
public:

	///=======================================================================
	//注意
	///=======================================================================
	/*
	// Novice.cpp
	// スプライトの最大数
	static const int32_t kMaxSpriteCount = 9999;　になっていないとエラーがおきます
	*/


	// マップ生成に必要な変数
	static const int mapChipSizeX = 16;  // マップチップの数
	static const int mapChipSizeY = 9;  // マップチップの数
	const int chipSizeX = 120; // マップチップの横サイズ
	const int chipSizeY = 120; // マップチップの横サイズ

	// マップ情報
	int stageMap[mapChipSizeY][mapChipSizeX] =
	{
		{10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
		{10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 13, 10},
		{10, 11, 11, 11, 11, 11, 26, 11, 11, 11, 11, 11, 11, 13, 13, 10},
		{10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10},
		{10, 11, 21, 11, 24, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10},
		{10, 11, 11, 11, 11, 11, 11, 25, 11, 11, 11, 11, 11, 11, 11, 10},
		{10, 11, 22, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10},
		{10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10},
		{10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
	};

	const int cardNumber = 7;// カードの枚数

	allCard myTexture
	{
		// 画像の初期化
		{
			Novice::LoadTexture("./Resources/images/mapChip/block01.png")// ブロック
		},

		{
			Novice::LoadTexture("./Resources/images/player/enemy01.png")// 敵
		},

		{
			Novice::LoadTexture("./Resources/images/number/one.png"),    // カード1
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード2
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード3
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード4
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード5
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード6
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード7
		}
	};


	// カードにふれたかどうかの判定フラグ
	static const int FlagNunber = 7;// カードの枚数

	bool cardFlag[FlagNunber] = {};// カード
	bool BlockFlag = {};// 白ブロック


	//マップチップの表示
	void NoviceMapChip(const int mapSizeX, const int mapSizeY, int chipSizeX_, int chipSizeY_, int stageMap_[][16]);

	// 他のcppで変数の状態を取得するための関数
	static mapChip& GetInstance() 
	{
		static mapChip instance;
		return instance;
	}

	// カウントをアップさせる関数
	void isDetection(Player& player_);

};
