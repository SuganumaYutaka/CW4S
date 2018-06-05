/*==============================================================================
	
	GameLoop.h - �Q�[�����[�v
														Author : Yutaka Suganuma
														Date   : 2018/6/5
==============================================================================*/
#pragma once

/*------------------------------------------------------------------------------
	�C���N���[�h�t�@�C��
------------------------------------------------------------------------------*/
#include <Windows.h>

/*------------------------------------------------------------------------------
	���C�u�����̃����N
------------------------------------------------------------------------------*/
#pragma comment(lib, "winmm.lib")

/*------------------------------------------------------------------------------
	�}�N����`
------------------------------------------------------------------------------*/
#define SCREEN_WIDTH	(1200)				//�E�C���h�E�̕�
#define SCREEN_HEIGHT	(675)				//�E�C���h�E����

#define SAFE_RELEASE(p) { if(p){ (p)->Release(); (p) = NULL;}}		//�Z�[�t�����[�X�}�N��

/*------------------------------------------------------------------------------
	�N���X��`
------------------------------------------------------------------------------*/
class GameLoop
{
public:
	GameLoop(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
	~GameLoop();

	void Ran(void);

	static LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	
private:
	HINSTANCE m_hInstance;				//�C���X�^���X
	HWND m_hWnd;						//�E�C���h�E�̃n���h��
	BOOL m_bWindow;						//�t���X�N���[���t���O
	MSG m_Msg;							//���b�Z�[�W
	int m_nFPS;							//FPS

	void Init( void);
	void Uninit( void);
	void Update( void);
	void Draw( void);
};

