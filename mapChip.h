﻿#pragma once
#include <Novice.h>
#include <structData.h>

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
		{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 11, 11, 11, 11, 11, 13, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
		{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
	};

	

	

	//マップチップの表示
	void NoviceMapChip(const int mapSizeX, const int mapSizeY, int chipSizeX_, int chipSizeY_, int stageMap_[][16]);

	// 他のcppで変数の状態を取得するための関数
	static mapChip& GetInstance() 
	{
		static mapChip instance;
		return instance;
	}

};
