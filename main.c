#include "alloc.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int opcode = 0;
char words[9];

int main(int argc, char *argv[]) 
{
	printf("����Ԥ���ڳ���Ĺ���Ŀ¼�ﴴ��һ����Ϊ encryptedwords.txt ���ļ�����������д��8���ֵ����ݣ�\n");
	printf("��ѡ�������\n1.����\n2.����\n����.�˳�\n");
	scanf("%d",&opcode);
	switch (opcode)
	{
		case 1:
			simpleencry();
			break;
		case 2:
			simpledecry();
			break;
		default:
			return 0;
	}
	return 0;
}
