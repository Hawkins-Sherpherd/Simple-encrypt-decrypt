#include "alloc.h"

int simpledecry()
{
	char words[9];
	int opbyte = 0;
	int encrycode = 0;
	FILE * _file = NULL;
	printf("«Î ‰»Î Encrycode£∫");
	scanf("%d",&encrycode);
	_file = fopen ("encryptedwords.txt","r");
	fgets(words,9,_file);
	printf("%s\n",words);
	while (opbyte != 8)
	{
		words[opbyte]-=encrycode;
		opbyte++;
	}
	printf("%s\n",words);
	_file = fopen ("encryptedwords.txt","w");
	fprintf(_file,words);
	return 0;
}
