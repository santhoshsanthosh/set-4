#include<stdio.h>
int main()
{
  char s[32],count=0,i;
  for(i=0;s[i]!=NULL;i++)
	{
	if(s[i]==' ')
	count++;
	}
	printf("%d",count);
	return 0;
}

