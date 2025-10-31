#include <stdio.h>

int main(void)
{
    int stl='a'-'A';
    char s;
    char l;
    
    printf("アルファベットの小文字を入力");
    scanf("%c",&s);
    
    l=s-stl;
    printf("大文字は%c",l);

    return 0;
}