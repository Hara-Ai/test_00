#pragma once
#include "structData.h"
#include <Novice.h>

class card
{
public:

	///==========================================================================
	// 画像の変数の初期化
	///==========================================================================

	
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

