#pragma once
//�ΰ��ӿ��� �۵��ϰ� ���ο��� ������ ���� ��ü�帧�Դϴ� �ΰ��Ӿ�
class InGameScene : public Scene
{
	//�����̺� �Լ�����
private:
	Camera* MainCam;
	Grid* grid;
	Actor* PlayerAimUI;

	//����
	//�ۺ��� �Լ�����
public:
	//�⺻����Լ���
	InGameScene();
	~InGameScene();
	//�ʱ�ȭ
	virtual void Init();
	//����
	virtual void Release();
	//Loop
	virtual void Update();
	virtual void LateUpdate();
	virtual void PreRender();
	virtual void Render();
	//Window Resize
	virtual void ResizeScreen();
	
	//��ü�� ��ȣ�ۿ��Լ�



	//�����̺� ��������
private:


	//�ۺ��� ��������
public:

};
