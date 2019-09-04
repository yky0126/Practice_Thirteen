#ifndef SOUND_H_
#define SOUND_H_

#include <SoundsManager.h>
#include <tchar.h>

SoundLib::SoundsManager m_soundsManager;


enum SoundType {
	TYPE_NONE,
	BGM,
	SE
};

struct SoundKey{

	const char* Key;

	SoundType Type;

};

// ������
// SoundsManager�C���X�^���X�������1�x�̂ݍs���B


bool isSuccess = m_soundsManager.Initialize();


class SoundPlay
{

public:

	bool SoundState();

};

class SoundVolume
{

public:

	bool VolumeSet();

};

class SoundPitch 
{

public:

	float SoundRatio();

};

class Foo 
{

public:

	void Play() {
		bool isSuccess = m_soundsManager.Start(_T("bgm"), this);
	}

	void OnPlayedToEnd(std::basic_string<TCHAR> key) {
		// �Đ��I����ɍs������
	}
};

#endif