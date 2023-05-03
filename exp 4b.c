#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int i,flag,flag1,a,b;
	int l;
	printf("enter the string to check:");
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
	if(flag==1){
		flag1=1;
		a=0,b=l-1;
		while(a!=(l/2))
		{
			if(s[a]!=s[b])
			{
				flag1=0;
			}
			a=a+1;
			b=b-1;
		}
		if(flag1==1)
		{
			printf("the string is palindrome\n");
			printf("string is accepted\n");
		}
			else
			{
				printf("the string is not a aplindrome\n");
				printf("string is not accepted\n");
			
		}
	}
}
