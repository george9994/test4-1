


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
    printf("�[�K��r��:%s\n",txt);
}
void trans(char txt[])
{
    for(int i=0;i<strlen(txt);i++)
    {
        txt[i]-=2;
    }
    printf("�ѱK���r:%s\n",txt);
}

{
    char txt[1024];
    int choice;

    printf("****************************************************\n");
    printf("�[�K��r��J1      ½Ķ�[�K��r��J2\n");
    printf("�h�X�{����J0\n");

    while(1)
    {
        printf("****************************************************\n");
        printf("��J�z�����:");
        scanf("%d",&choice);
        fflush(stdin);
        switch(choice)
        {

        case 1:
            printf("��J��r:");
            gets(txt);
            creat(txt);
            break;
        case 2:
            printf("��J�[�K��r:");
            gets(txt);
            trans(txt);
            break;
        case 0:
            printf("�h�X���\!\n");
            exit(0);
        default:
            printf("�z����J���~,�Э��s��J!\n");
        }
        system("pause");
    }
}
}
