#include<stdio.h>
int main()
{
	//��1��100��9�ĸ���
	int i=0;
	int count=0;
	printf("1��100�к�9������\n");
	for(i=1;i<=100;i++)
	{
		if(i%10==9)//��λ�Ϻ���9 
		{
			count++;
			printf("%d ",i);
		}
		if(i/10==9)//ʮλ�Ϻ���9 
		{
			count++;
			printf("%d ",i);
		}
	 } 
	 printf("\n");
	 printf("count=%d",count);
	return 0;
}
