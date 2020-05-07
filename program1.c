#include<stdio.h>

int main(int argc,char *argv[])
{
	int i=0;
	char ch;
	FILE *fp;
	fp=fopen(argv[1],"r");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		{
			i++;
		}


		if(i==25)
		{
			i=0;
			getchar();
			printf("%c",ch);
		}
		else
		{
			printf("%c",ch);
		}
	}
	return 0;
}
