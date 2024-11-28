#include "card.h"
#include "mapChip.h"
#include "Player.h"
#include "Novice.h"

void card::GetCardCount()
{
	// 増やす数字
	int CardUpNumber = 1;
	CardCount = CardCount + CardUpNumber;
	CardUpNumber--;
}
