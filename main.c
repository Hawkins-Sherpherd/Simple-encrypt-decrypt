#include "alloc.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int opcode = 0;
char words[9];

int main(int argc, char *argv[]) 
{
	printf("（请预先在程序的工作目录里创建一个名为 encryptedwords.txt 的文件，并在里面写入8个字的内容）\n");
	printf("请选择操作：\n1.加密\n2.解密\n其它.退出\n");
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
