#include<stdio.h> 
main()
{
	int i=2,j,n,a=0;
	scanf("%d",&n);
	while(n>a)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break; 
		}
		if(i==j)
		{
		printf("%d ",i);
		++a;
	    }
	++i;
    }
    return 0;
}
