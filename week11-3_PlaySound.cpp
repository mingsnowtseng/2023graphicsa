///Week11-3_PlaySound.cpp �i�O���o������� �]���䤣�� PlaySoundA
///C:\Users\Administrator\Desktop\week11-3_PlaySound.o:week11-3_PlaySound.cpp:(.text+0x2e):
///  undefined reference to `PlaySoundA@12'
///PlaySoundA() ���b winmm �̭� �ҥH, step02-1 �n��ʧ� winmm �[�� lib �G�y��
/// ���: OpenCV �n 3�G�y, GLUT �n 5�G�y�C PlaySound �n 1�G�y
/// Setting-Compiler... �� Linker Settings �n�[�W winmm
#include <windows.h>
int main()
{                         ///�n���ݦP�B SND_SYNC, ���M�|��������
    PlaySound("do_re_mi\\do.wav", NULL, SND_SYNC);
    PlaySound("do_re_mi\\do.wav", NULL, SND_SYNC);
    PlaySound("do_re_mi\\do.wav", NULL, SND_SYNC);
    PlaySound("do_re_mi\\re.wav", NULL, SND_SYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\mi.wav", NULL, SND_SYNC);
}
///Build log �|�g: Checking for existence: C:\Users\Administrator\Desktop\week11-3_PlaySound.exe
///Executing: '"C:\Program Files (x86)\CodeBlocks/cb_console_runner.exe" "C:\Users\Administrator\Desktop\week11-3_PlaySound.exe"' (in 'C:\Users\Administrator\Desktop')
/// ��������ؿ�, �O�b C:\Users\Administrator\Desktop �ڭ̪� do.wav re.wav mi.wav �b �۹�ؿ���
