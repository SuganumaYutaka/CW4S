/*==============================================================================

    DirectX9.h - DirectX9の設定
														Author : Yutaka Suganuma
														Date   : 2018/6/05
==============================================================================*/
#pragma once

/*------------------------------------------------------------------------------
	インクルードファイル
------------------------------------------------------------------------------*/
#include <d3dx9.h>
#define DIRECTINPUT_VERSION (0x0800)
#include <dinput.h>
#include <XAudio2.h>

/*------------------------------------------------------------------------------
	ライブラリのリンク
------------------------------------------------------------------------------*/
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "dinput8.lib")

