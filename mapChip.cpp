#include "mapChip.h"
#include "Enemy.h"
#include "card.h"
#include <Novice.h>

void mapChip::NoviceMapChip(const int mapSizeX, const int mapSizeY, int chipSizeX_, int chipSizeY_, int stageMap_[][16])
{
	//Player myPlayer_;

	// マップチップの生成
	for (int y = 0; y < mapSizeY; y++)
	{
		for (int x = 0; x < mapSizeX; x++)
		{
			// なし
			if (stageMap_[y][x] == 10) 
			{
				// 10の場合はブロックを作らない
			}

			// 背景ブロック
			if (stageMap_[y][x] == 11) 
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)myTexture.block, 1.0f, 1.0f, 0.0f, WHITE); // マップチップの生成
			}

			// ボス
			if (stageMap_[y][x] == 12)// 13はボスの当たり判定追加のため作成
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)myTexture.enemy, 2.0f, 2.0f, 0.0f, WHITE);
			}

			for (int i = 0; i < cardNumber; i++) // カードの数が7枚の場合
			{ 
				if (stageMap_[y][x] == 21 + i) 
				{
					if (cardFlag[i] == false)
					{
						Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)myTexture.card[i], 1.0f, 1.0f, 0.0f, WHITE);
					}
					else 
					{
						Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)myTexture.block, 1.0f, 1.0f, 0.0f, WHITE);
					}
				}
			}
		}
	}
}

void mapChip::isDetection(Player& player_)
{
	///====================
	// プレイヤーと敵の当たり判定処理
	///====================

	if (stageMap[player_.playerTilePosY][player_.playerTilePosX] == 12// 敵本体に触れたら 
		||stageMap[player_.playerTilePosY][player_.playerTilePosX] == 13// もしくは敵の本体以外の当たり判定に触れたら 
	   )
	{
		// 敵と当たった時の処理はここに書く
		Enemy::GetInstance().enemyFlag[0] = true; // カードを消す

	}


	///====================
	// プレイヤーとマップチップの当たり判定処理
	///====================

	for (int i = 0; i < cardNumber; i++) // カードの数が7枚の場合
	{
		if (stageMap[player_.playerTilePosY][player_.playerTilePosX] == 21 + i// カード1に触れたら 
			|| card::GetInstance().CardCount >= card::GetInstance().cardMaximumCount)// カードを取れる上限まで行ったら
		{
			//一度しか通らなくさせるためフラグが折れる前に一度だけ実行
			if (cardFlag[0 + i] == false && card::GetInstance().CardCount < card::GetInstance().cardMaximumCount)
			{
				card::GetInstance().GetCardCount();
			}
			cardFlag[0 + i] = true; // カードを消す
		}
	}

	// デバック
	Novice::ScreenPrintf(0, 100, "%f\n", card::GetInstance().CardCount);
}
