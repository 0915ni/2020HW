#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d %d",&a,&b);
	for(int i=2; i<=a; i++)
	{
		if(a%i==0)
		{
			c=i;
			for(int j=2; j<=b; j++)
			{
				if(b%j==0&&j==c)
				{
					d=a/c;
					e=b/c;
				}
			}
		}
	}
	printf("%d %d\n",d,e);

}
