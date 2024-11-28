#pragma once
#include "structData.h"
#include <Novice.h>

class card
{
public:

	///==========================================================================
	// 画像の変数の初期化
	///==========================================================================

	allCard myTexture
	{
		// 画像の初期化
		{
			Novice::LoadTexture("./Resources/images/mapChip/block01.png")// ブロック
		},

		{
			Novice::LoadTexture("./Resources/images/number/one.png"),// カード1
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

	// スキルカードにどれだけ当たったか判定する変数
	float CardCount = 0;
	// 取れるカードの上限
	float cardMaximumCount = 3;

	// 他のcppで変数の状態を取得するための関数
	static card & GetInstance()
	{
		static card instance;
		return instance;
	}

	void GetCardCount();

};

