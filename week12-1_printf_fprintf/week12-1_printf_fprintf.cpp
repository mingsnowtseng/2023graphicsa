#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt", "w");
    ///�ɮ׫��� fout = �}���ɮ�("�ɦW", "�Τ���Ҧ�")
    printf("Hello World\n");
    fprintf(fout, "Hello World\n");
}
