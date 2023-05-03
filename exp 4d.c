#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	int i,flag,flag1,flag2;
	int l;
	printf("enter a string to check:");
	scanf("%s",&s);
	l=strlen(s);
	flag=1;
	for(i=0;i<l;i++){
		if(s[i]!='0' && s[i]!='1')
		{
			flag=0;
		}
	}
	if(flag!=1)
	printf("string is not valid\n");
	if(flag==1)
	{
		if(l%2!=0)
		{
		printf("the string doesnot satisfy the condition on 1m0n\n");
		printf("string not accepted\n");
		}
	    else
	    {
		flag1=1;
	    for(i=0;i<(l/2);i++)
		{
			if(s[i]!='0')
			{
				flag1=0;
			}
		}
		flag2=1;
		for(i=l/2;i<l;i++)
			{
				if(s[i]!='1')
				{
					flag2=0;
				}
			}
		if(flag1==1 && flag2==1)
		{
		printf("the string satisfies the condition on 1m0n\n");
		printf("string is accepted\n");
		}
		else
		{
		printf("the string doesnot satisfy the condition on 1m0n\n");
		printf("string not accepted\n");
		}
	}
	}
}
