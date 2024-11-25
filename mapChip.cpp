#include "mapChip.h"
//#include "Player.h"
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
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)card::GetInstance().myTexture.block, 1.0f, 1.0f, 0.0f, WHITE); // マップチップの生成
			}

			// カード1
			if (stageMap_[y][x] == 12 && card::GetInstance().cardFlag[0] == false)
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)card::GetInstance().myTexture.card[0], 1.0f, 1.0f, 0.0f, WHITE);
			}
			//取られた際
			if (stageMap_[y][x] == 12 && card::GetInstance().cardFlag[0] == true)
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)card::GetInstance().myTexture.block, 1.0f, 1.0f, 0.0f, WHITE);
			}
			
			// カード2
			if (stageMap_[y][x] == 13 && card::GetInstance().cardFlag[1] == false)
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)card::GetInstance().myTexture.card[1], 1.0f, 1.0f, 0.0f, WHITE);
			}
			//取られた際
			if (stageMap_[y][x] == 13 && card::GetInstance().cardFlag[1] == true)
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)card::GetInstance().myTexture.block, 1.0f, 1.0f, 0.0f, WHITE);
			}
			
			// カード3
			if (stageMap_[y][x] == 14 && card::GetInstance().cardFlag[2] == false)
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)card::GetInstance().myTexture.card[2], 1.0f, 1.0f, 0.0f, WHITE);
			}
			//取られた際
			if (stageMap_[y][x] == 14 && card::GetInstance().cardFlag[2] == true)
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)card::GetInstance().myTexture.block, 1.0f, 1.0f, 0.0f, WHITE);
			}
		}
	}
}

void mapChip::isDetection(Player& player_)
{
	if(stageMap[player_ .playerTilePosY][player_.playerTilePosX] == 12)// カード1に触れたら 
	{
		card::GetInstance().cardFlag[0] = true; // カードを消す
	}

	if (stageMap[player_.playerTilePosY][player_.playerTilePosX] == 13) // カード2に触れたら 
	{
		card::GetInstance().cardFlag[1] = true; // カードを消す
	}

	if (stageMap[player_.playerTilePosY][player_.playerTilePosX] == 14) // カード3に触れたら 
	{
		card::GetInstance().cardFlag[2] = true; // カードを消す
	}

}
