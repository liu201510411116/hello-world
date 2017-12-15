#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,a,b,c;
	printf("【-----------主菜单-----------】\n");
	printf("----------1.加法运算题---------\n");
	printf("----------2.减法运算题---------\n");
	printf("----------3.乘法运算题---------\n");
	printf("----------4.除法运算题---------\n");
	printf("----------0.退出程序---------\n");
	printf("请选择:");
	scanf("%d", &n);
	switch(n)
	{
		a=rand()%100+1;
		b=rand()%100+1;
		printf("%d+%d=\n",a,b);
		scanf("%d",&c);
		if(a+b==c)
		{
			printf("回答正确!\n");
		}
		else
		{
			printf("回答错误!\n");
			break;
		}
		
	case 1:
		{
			a=rand()%100+1;
			b=rand()%100+1;
			printf("%d+%d=\n",a,b);
			scanf("%d",&c);
			if(a+b==c)
			{
				printf("回答正确!\n");
			}
			else
			{
				printf("回答错误!\n");
			}
			break;
		}
		
	case 2:
		{
			a=rand()%100+1;
			b=rand()%100+1;
			printf("%d-%d=\n",a,b);
			scanf("%d",&c);
			if(a-b==c)
			{
				printf("回答正确!\n");
			}
			else
			{
				printf("回答错误!\n");
			}
			break;
		}
		
	case 3:
		{
			a=rand()%100+1;
			b=rand()%100+1;
			printf("%d*%d=\n",a,b);
			scanf("%d",&c);
			if(a*b==c)
			{
				printf("回答正确!\n");
			}
			else
			{
				printf("回答错误!\n");
			}
			break;
		}
	case 4:
		{
			a=rand()%100+1;
			b=rand()%100+1;
			printf("%d/%d=\n",a,b);
			scanf("%d",&c);
			if(a/b==c)
			{
				printf("回答正确!\n");
			}
			else
			{
				printf("回答错误!\n");
			}
			break;
		}
		
	}
	
}
