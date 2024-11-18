#pragma once
#include "structData.h"
#include <Novice.h>

class card
{
public:

	///==========================================================================
	// 画像の変数の初期化
	///==========================================================================

	allMapChip myTexture
	{
		// 画像の初期化
		{
			Novice::LoadTexture("./Resources/images/mapChip/block01.png")// ブロック
		},

		{
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード1
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード2
			Novice::LoadTexture("./Resources/images/mapChip/card01.png"),// カード3
		}
	};
	

	// フラグ
	static const int FlagNunber = 3;// カードの枚数

	bool cardFlag[FlagNunber] = {};// カード
	bool BlockFlag = {};// 白ブロック 

	// 他のcppで変数の状態を取得するための関数
	static card & GetInstance()
	{
		static card instance;
		return instance;
	}

};

