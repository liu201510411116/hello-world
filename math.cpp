#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,a,b,c;
	printf("��-----------���˵�-----------��\n");
	printf("----------1.�ӷ�������---------\n");
	printf("----------2.����������---------\n");
	printf("----------3.�˷�������---------\n");
	printf("----------4.����������---------\n");
	printf("----------0.�˳�����---------\n");
	printf("��ѡ��:");
	scanf("%d", &n);
	switch(n)
	{
		a=rand()%100+1;
		b=rand()%100+1;
		printf("%d+%d=\n",a,b);
		scanf("%d",&c);
		if(a+b==c)
		{
			printf("�ش���ȷ!\n");
		}
		else
		{
			printf("�ش����!\n");
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
				printf("�ش���ȷ!\n");
			}
			else
			{
				printf("�ش����!\n");
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
				printf("�ش���ȷ!\n");
			}
			else
			{
				printf("�ش����!\n");
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
				printf("�ش���ȷ!\n");
			}
			else
			{
				printf("�ش����!\n");
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
				printf("�ش���ȷ!\n");
			}
			else
			{
				printf("�ش����!\n");
			}
			break;
		}
		
	}
	
}
