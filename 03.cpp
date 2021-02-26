#include <stdio.h>
int main()
{
	int a;
	int ans=0;

	while(scanf("%d",&a)==1)
	{
		if(a%3==0)
		{
			ans++;
		}
	}
	printf("%d\n",ans);
}
