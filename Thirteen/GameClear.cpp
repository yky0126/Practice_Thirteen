#include "GameClear.h"
#include "Texture.h"
#include "Input.h"

// �^�C�g���V�[���̏�����
void InitGameClear();
// �^�C�g���V�[���̃��C������
void MainGameClear();
// �^�C�g���V�[���̏I��
SceneId FinishGameClear();

SceneId GameClear::UpdateGameClear()
{
	switch (scene.GetCurrentSceneStep())
	{
	case SceneStep::InitStep:
		InitGameClear();
		break;
	case SceneStep::MainStep:
		MainGameClear();
		break;
	case SceneStep::EndStep:
		return FinishGameClear();
		break;
	}

	return SceneId::Title;
}

void GameClear::DrawGameClear()
{
	// �`�揈��

}

void InitGameClear()
{
	// �`�揀��

}

void MainGameClear()
{
	// �Q�[������

}

SceneId FinishGameClear()
{
	// �����[�X�J��

}