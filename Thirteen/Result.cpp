#include "Result.h"
#include "Texture.h"
#include "Input.h"

// �^�C�g���V�[���̏�����
void InitResult();
// �^�C�g���V�[���̃��C������
void MainResult();
// �^�C�g���V�[���̏I��
SceneId FinishResult();

SceneId Result::UpdateResult()
{
	switch (scene.GetCurrentSceneStep())
	{
	case SceneStep::InitStep:
		InitResult();
		break;
	case SceneStep::MainStep:
		MainResult();
		break;
	case SceneStep::EndStep:
		return FinishResult();
		break;
	}

	return SceneId::Title;
}

void Result::DrawResult()
{
	// �`�揈��

}

void InitResult()
{
	// �`�揀��

}

void MainResult()
{
	// �Q�[������

}

SceneId FinishResult()
{
	// �����[�X�J��

}