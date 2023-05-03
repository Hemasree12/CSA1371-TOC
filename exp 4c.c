#include<stdio.h>
#include<string.h>
void main(){
	char s[100];
	int i,flag,flag1,a,b;
	int l,count1,count2;
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
		i=0;count1=0;
		while(s[i]=='0')
		{
			count1++;
			i++;
		}
		while(s[i]=='1')
		{
			i++;
		}
		flag1=1;
		count2=0;while(i<l)
		{
			if(s[i]=='0')
			{
				count2++;
			}
			else
			{
				flag1=0;
			}
			i++;
		}
		if(flag1==1)
		{
			if(count1==count2){
				printf("the string satisfies the condition on 1m0n\n");
				printf("string is accepted\n");
			}
			else
			{
				printf("the string doesnot satisfy the condition on 1m0n\n");
				printf("string not accepted\n");
			}
		}
		else
		{
			printf("the string doesnot satisfy the condition on 1m0n\n");
			printf("string is not accepted\n");
		}
	}
}
