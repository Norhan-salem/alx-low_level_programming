#include<stdio.h>
int main(void)
{

	for(int i='a';i<='z';i++)
	{
		if((i!='e')&&(i!='q'))
		{
			putchar(i);
		}
	}
	putchar('\n');
}
