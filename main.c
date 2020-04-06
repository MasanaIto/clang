#include <stdio.h>
 
int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];
    
    printf("コピー先ファイル名：");
    scanf("%s\n", fname);
    
    if ((fp = fopen(fname, "w")) == NULL)
        printf("\aコピー先ファイルをオープンできません。\n");
    else {
        while ((ch = fgetc(stdin)) != EOF)
            fputc(ch, fp);
        fclose(fp);
    }

    return 0;
}
