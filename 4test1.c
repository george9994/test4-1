


#include <stdio.h>
#include <stdlib.h>
#include <string.h>





void main()
{


void creat(char txt[])
{
    for(int i=0;i<strlen(txt);i++)
    {
		txt[i]+=2;
    }
    printf("加密文字為:%s\n",txt);
}
void trans(char txt[])
{
    for(int i=0;i<strlen(txt);i++)
    {
        txt[i]-=2;
    }
    printf("解密後文字:%s\n",txt);
}

{
    char txt[1024];
    int choice;

    printf("****************************************************\n");
    printf("加密文字輸入1      翻譯加密文字輸入2\n");
    printf("退出程式輸入0\n");

    while(1)
    {
        printf("****************************************************\n");
        printf("輸入您的選擇:");
        scanf("%d",&choice);
        fflush(stdin);
        switch(choice)
        {

        case 1:
            printf("輸入文字:");
            gets(txt);
            creat(txt);
            break;
        case 2:
            printf("輸入加密文字:");
            gets(txt);
            trans(txt);
            break;
        case 0:
            printf("退出成功!\n");
            exit(0);
        default:
            printf("您的輸入有誤,請重新輸入!\n");
        }
        system("pause");
    }
}
}
