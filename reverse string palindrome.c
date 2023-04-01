#include<stdio.h>
#include<string.h>
void main()
{
	char s[50],rs[50];
	int len=0,p=0,i;
	printf("enter string : ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	printf("string length of %s is %d\n",s,len);
	for(i=len-1;i>=0;i--)
	{
		rs[len-i-1]=s[i];
	}
	for(i=0;i<len;i++)
	{
		if(s[i]!=rs[i])
		{
		 p=0;
	    }
		else
		{
		 p=1;
	    }
	}
	if(p==1)
	{
		printf("ENTERED STRING %s IS A PALINDROME ",s);
	}
	else
	{
		printf("ENTERED STRING %s IS NOT A PALINDROME",s);
	}
}

