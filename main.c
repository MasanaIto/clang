#include <stdio.h>
 
void hiroko(int *height)
{
    if (*height < 180)
        *height = 180;
}

int main(void)
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;
    
    hiroko(&sanaka);
    
    printf("佐藤くんの身長：%d\n", sato);
    printf("さなかくんの身長：%d\n", sanaka);
    printf("まさきくんの身長：%d\n", masaki);
    
    return 0;
}
