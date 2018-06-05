/*==============================================================================
	
	GameLoop.h - ゲームループ
														Author : Yutaka Suganuma
														Date   : 2018/6/5
==============================================================================*/
#pragma once

/*------------------------------------------------------------------------------
	インクルードファイル
------------------------------------------------------------------------------*/
#include <Windows.h>

/*------------------------------------------------------------------------------
	ライブラリのリンク
------------------------------------------------------------------------------*/
#pragma comment(lib, "winmm.lib")

/*------------------------------------------------------------------------------
	マクロ定義
------------------------------------------------------------------------------*/
#define SCREEN_WIDTH	(1200)				//ウインドウの幅
#define SCREEN_HEIGHT	(675)				//ウインドウ高さ

#define SAFE_RELEASE(p) { if(p){ (p)->Release(); (p) = NULL;}}		//セーフリリースマクロ

/*------------------------------------------------------------------------------
	クラス定義
------------------------------------------------------------------------------*/
class GameLoop
{
public:
	GameLoop(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
	~GameLoop();

	void Ran(void);

	static LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	
private:
	HINSTANCE m_hInstance;				//インスタンス
	HWND m_hWnd;						//ウインドウのハンドル
	BOOL m_bWindow;						//フルスクリーンフラグ
	MSG m_Msg;							//メッセージ
	int m_nFPS;							//FPS

	void Init( void);
	void Uninit( void);
	void Update( void);
	void Draw( void);
};

