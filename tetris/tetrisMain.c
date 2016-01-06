/* Name: tetrisMain.c  ver 1.1
 * Content: main �Լ��� ����
 * Implementation: YSW
 * 
 * Last modified 2008/01/01
 */
#include <Windows.h>
#include "keyCurControl.h"
#include "blockStageControl.h"

#define START_CURPOS_X         (5*2)
#define START_CURPOS_Y         (0)

int main(void)
{
    /* ���� �ӵ� ���� */
    InitKeyDelayRate(20);

    /* Ŀ�� ������ ���� */
    RemoveCursor();

    /* �� ����� ������ġ ���� */
    InitNewBlockPos(START_CURPOS_X, START_CURPOS_Y);
    
    /* ��� ���� */
    ChooseBlock();
    
    /* ������ �۾� ���� */
    while(1)
    {
        /* ����� �Ʒ��� �� ĭ �̵� */
        BlockDown();
        
        /* ���̸� Ű �Է� ó�� */
        ProcessKeyInput();
    }
    
    return 0;
}

/* end of file */