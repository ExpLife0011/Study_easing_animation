// ��������ball
#ifndef __BALL
#define __BALL
#include <Windows.h>

class ball
{
private:
	POINT pos;		// Բ��λ��
	unsigned int r;	// �뾶����
	COLORREF col;	// ��ɫ
	int id;			// Ψһ��ʶ����
public:
	ball();
	BOOL init(POINT pos,unsigned int r, COLORREF col);	// �����ʼ��

	// �������Բ�������
	POINT SetPos(POINT newPos);							// ������λ��ΪnewPos������oldPos;
	POINT GetPos();										// ����pos;
	unsigned int SetR(unsigned int newR);				// �����°뾶�����ؾɰ뾶
	unsigned int GetR();								// ���ذ뾶R
	COLORREF SetCol(COLORREF newCol);					// ��������ɫ�����ؾ���ɫ
	COLORREF GetCol();									// ������ɫcol
	void SetId(int id);					
	int GetId();
	// ��Ϊ���ֺ���
	BOOL draw(HDC hdc,COLORREF col,bool isErase);		// ��������hdc����
};
#endif
