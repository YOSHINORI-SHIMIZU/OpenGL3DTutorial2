/*
	@file StatusScene.cpp
*/
#include "StatusScene.h"
#include "GLFWEW.h"

/*
	�v���C���[�̓��͂���������.
*/
void StatusScene::ProcessInput()
{
	GLFWEW::Window& window = GLFWEW::Window::Instance();
	if (window.GetGamePad().buttonDown & GamePad::START) {
		SceneStack::Instance().Replace(std::make_shared<StatusScene>());
	}

	SceneStack::Instance().Pop();
}