#include "Title.h"
#include "Texture.h"
#include "Input.h"

// �^�C�g���V�[���̏�����
void InitTitle();
// �^�C�g���V�[���̃��C������
void MainTitle();
// �^�C�g���V�[���̏I��
SceneId FinishTitle();

SceneId Title::UpdateTitle()
{
	switch (scene.GetCurrentSceneStep())
	{
	case SceneStep::InitStep:
		InitTitle();
		break;
	case SceneStep::MainStep:
		MainTitle();
		break;
	case SceneStep::EndStep:
		return FinishTitle();
		break;
	}

	return SceneId::Title;
}

void Title::DrawTitle()
{
	// �`�揈��

}

void InitTitle()
{
	// �`�揀��

}

void MainTitle()
{
	// �Q�[������

}

SceneId FinishTitle()
{
	// �����[�X�J��

}