#include "mapChip.h"
#include <Novice.h>

void mapChip::NoviceMapChip(const int mapSizeX, const int mapSizeY, int chipSizeX_, int chipSizeY_, int stageMap_[][30])
{

	for (int y = 0; y < mapSizeY; y++)
	{
		for (int x = 0; x < mapSizeX; x++)
		{
			if (stageMap_[y][x] == 10) // なし
			{
				// 10の場合はブロックを作らない
			}

			if (stageMap_[y][x] == 11) // ブロック
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)cardTexture.Block, 1.0f, 1.0f, 0.0f, WHITE); // マップチップの生成
			}

			if (stageMap_[y][x] == 12) // カード1
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)cardTexture.card1, 1.0f, 1.0f, 0.0f, WHITE); // マップチップの生成
			}

			if (stageMap_[y][x] == 13) // カード2
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)cardTexture.card2, 1.0f, 1.0f, 0.0f, WHITE); // マップチップの生成
			}

			if (stageMap_[y][x] == 14) // カード3
			{
				Novice::DrawSprite(x * chipSizeX_, y * chipSizeY_, (int)cardTexture.card3, 1.0f, 1.0f, 0.0f, WHITE); // マップチップの生成
			}
		}
	}
}