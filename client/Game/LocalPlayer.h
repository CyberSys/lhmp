#pragma once
#include <Interfaces/PlayerInterface.h>

class LocalPlayer : PlayerInterface
{
public:
	LocalPlayer(std::string modelName);
	~LocalPlayer();

	void Spawn();

	void SetPosition(Vector3D position) override;
	Vector3D GetPosition() override;

	void SetRotation(unsigned short rotation) override;
	unsigned short GetRotation() override;

	void SetModel(const std::string& modelName) override;
	std::string GetModel() override;

	void SetHealth(float health) override;
	float GetHealth() override;

	void SetAnimationState(char state) override;
	char GetAnimationState() override;

	void SetIsCrouching(bool isCrouching) override;
	bool GetIsCrouching() override;

	void Tick();

private:
	bool mIsSpawned;
	MafiaSDK::C_Player* mPlayer;
	Vector3D mPosition;
	Vector3D mRotation;
	std::string mModelName;
	float mHealth;
	char mAnimationState;
};