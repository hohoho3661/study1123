#pragma once
// User : ����� ���� ���
#include "GameError.h"
#include "Constants.h"

#include "Graphics.h"

#include "SingleTon.h"

#include "InputManager.h"
#include "Timer.h"


//
#define GRAPHICS	Graphics::getSingleton()
#define DEVICE		Graphics::getSingleton()->get3DDevice()


#define INPUT		InputManager::GetInstance()




// extern ����
extern D3DXVECTOR2 mousePos;