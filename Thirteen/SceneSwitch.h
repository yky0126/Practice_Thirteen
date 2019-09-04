#pragma once
#ifndef SCENESWITCH_H_
#define SCENESWITCH_H_

enum SceneId
{
	Title,
	GameScene,
	GameClear,
	Result,
	SceneIdMax
};

enum SceneStep
{
	InitStep,
	MainStep,
	EndStep
};

class Scene
{
public:
	// �V�[��ID�擾�֐�
	SceneId GetCurrentSceneId();

	// �V�[���X�e�b�v�擾�֐�
	SceneStep GetCurrentSceneStep();

	// �w�肵���X�e�b�v�ɐ؂�ւ���
	void ChangeSceneStep(SceneStep next_step);

	// �V�[�������̎��s
	void UpdateScene();

	// �V�[���I�u�W�F�N�g�̕`��
	void DrawScene();
};

#endif