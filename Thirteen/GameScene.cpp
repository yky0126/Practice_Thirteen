#include "GameScene.h"
#include "Texture.h"
#include "Input.h"

// �^�C�g���V�[���̏�����
void InitGameScene();
// �^�C�g���V�[���̃��C������
void MainGameScene();
// �^�C�g���V�[���̏I��
SceneId FinishGameScene();

SceneId GameScene::UpdateGameScene()
{
	switch (scene.GetCurrentSceneStep())
	{
	case SceneStep::InitStep:
		InitGameScene();
		break;
	case SceneStep::MainStep:
		MainGameScene();
		break;
	case SceneStep::EndStep:
		return FinishGameScene();
		break;
	}

	return SceneId::GameScene;
}

void GameScene::DrawGameScene()
{
	// �`�揈��

}

void InitGameScene()
{
	// �`�揀��

}

void MainGameScene()
{
	// �Q�[������

}

SceneId FinishGameScene()
{
	// �����[�X�J��

}