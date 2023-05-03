#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt", "w");
    ///檔案指標 fout = 開啟檔案("檔名", "用什麼模式")
    printf("Hello World\n");
    fprintf(fout, "Hello World\n");
}
