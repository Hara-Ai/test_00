#include <Novice.h>
#include "mapChip.h"
#include "Player.h"
#include "Enemy.h"

const char kWindowTitle[] = "test_00";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	float kWindowWidth = 1920; // ウィンドウの横幅
	float kWindowHeight = 1080; // ウィンドウの縦幅

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, (int)kWindowWidth, (int)kWindowHeight);

	// インスタンス生成
	mapChip myMapChip;
	Player  myPlayer;
	Enemy   myEnemy;

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0)
	{
		// フレームの開始
		Novice::BeginFrame();
		Novice::GetHitKeyStateAll(keys);


		// キー入力を受け取る
		memcpy(preKeys, keys, 256);

		///
		/// ↓更新処理ここから
		///

		myPlayer.Move();
		myEnemy.Move(myPlayer);

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		// マップチップの描画
		myMapChip.NoviceMapChip(myMapChip.mapChipSizeX, myMapChip.mapChipSizeY, myMapChip.chipSizeX, myMapChip.chipSizeY, myMapChip.stageMap, myMapChip.blockImges);

		//プレイヤーの描画
		myPlayer.Drow();

		//敵の描画
		myEnemy.Drow();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0)
		{
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
