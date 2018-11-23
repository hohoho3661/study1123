#include "GameSys.h"
#include "User.h"
#include "Scene.h"
#include "GameMain.h"
#include "PaintTestScene.h"
#include "VertexBufferTest.h"
#include "WVPtest.h"
#include "SRTTest.h"
#include "TextureTest.h"

GameMain::GameMain()
{
}

GameMain::~GameMain()
{
	ReleaseAll();
}

void GameMain::Init(HWND hWnd)
{
	GameBase::Init(hWnd);

	pScene = new TextureTest;
	pScene->Init();
}

void GameMain::Update()
{
	pScene->Update();
}

void GameMain::Render()
{
	pScene->Render();
}

void GameMain::ReleaseAll()
{
	GameBase::ReleaseAll();
	
	SafeDelete(pScene);

	INPUT->Release();
}

void GameMain::ResetAll()
{
}