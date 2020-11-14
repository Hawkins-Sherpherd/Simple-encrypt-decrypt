#include "alloc.h"

int simpleencry()
{
	char words[9];
	int opbyte = 0;
	int encrycode = 0;
	FILE *_file = NULL;
	srand((unsigned)time(NULL));
	encrycode = rand() % 2+8;
	_file = fopen("encryptedwords.txt","r");
	fgets(words,9,(FILE*)_file);
	printf("%s\n",words);
	while (opbyte != 8)
	{
		words[opbyte]+=encrycode;
		opbyte ++;
	}
	printf("%s, encrycode = %d",words,encrycode);
	_file = fopen("encryptedwords.txt","w");
	fprintf(_file,words);
	return 0;
}
