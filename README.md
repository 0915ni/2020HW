# 2020HW
20200226

[1.SOIT106_BASE_002：基礎題：找零錢](https://github.com/0915ni/2020HW#1soit106_base_002%E5%9F%BA%E7%A4%8E%E9%A1%8C%E6%89%BE%E9%9B%B6%E9%8C%A2)

[2.SOIT106_BASE_005：基礎題：因數個數](https://github.com/0915ni/2020HW#2soit106_base_005%E5%9F%BA%E7%A4%8E%E9%A1%8C%E5%9B%A0%E6%95%B8%E5%80%8B%E6%95%B8)

[3.SOIT106_BASE_010：基礎題：找倍數](https://github.com/0915ni/2020HW#3soit106_base_010%E5%9F%BA%E7%A4%8E%E9%A1%8C%E6%89%BE%E5%80%8D%E6%95%B8)

[4.SOIT106_BASE_012：基礎題：整數轉換為等級](https://github.com/0915ni/2020HW#4soit106_base_012%E5%9F%BA%E7%A4%8E%E9%A1%8C%E6%95%B4%E6%95%B8%E8%BD%89%E6%8F%9B%E7%82%BA%E7%AD%89%E7%B4%9A)

[5.SOIT106_ADVANCE_002：進階題：分式化簡](https://github.com/0915ni/2020HW#5soit106_advance_002%E9%80%B2%E9%9A%8E%E9%A1%8C%E5%88%86%E5%BC%8F%E5%8C%96%E7%B0%A1)

20200305

[6.SOIT106_ADVANCE_003：進階題：讀入整數反序列印](https://github.com/0915ni/2020HW/blob/gh-page/README.md#6soit106_advance_003%E9%80%B2%E9%9A%8E%E9%A1%8C%E8%AE%80%E5%85%A5%E6%95%B4%E6%95%B8%E5%8F%8D%E5%BA%8F%E5%88%97%E5%8D%B0)

[7.SOIT106_ADVANCE_005_C：進階題：A的B次方函數](https://github.com/0915ni/2020HW#7soit106_advance_005_c%E9%80%B2%E9%9A%8E%E9%A1%8Ca%E7%9A%84b%E6%AC%A1%E6%96%B9%E5%87%BD%E6%95%B8)

[8.SOIT106_ADVANCE_006：進階題：漸增數列相加](https://github.com/0915ni/2020HW#8soit106_advance_006%E9%80%B2%E9%9A%8E%E9%A1%8C%E6%BC%B8%E5%A2%9E%E6%95%B8%E5%88%97%E7%9B%B8%E5%8A%A0)

### 1.SOIT106_BASE_002：基礎題：找零錢
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d=",a);
	int F, f;
	F = a / 50;
	a = a % 50;
	f = a / 5;
	a = a % 5;
	printf("50*%d+5*%d+1*%d\n", F, f, a);
}
```
### 2.SOIT106_BASE_005：基礎題：因數個數
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int ans = 0;
	for(int i = 1; i <= a; i ++)
	{
		if(a % i == 0)
		{
			ans ++;
		}
	}
	printf("%d\n", ans);
}
```

### 3.SOIT106_BASE_010：基礎題：找倍數
```c
#include <stdio.h>
int main()
{
	int a;
	int ans = 0;
	
	while(scanf("%d", &a) == 1)
	{
		if(a % 3 == 0)
		{
			ans++;
		}
	}
	printf("%d\n", ans);
}
```

### 4.SOIT106_BASE_012：基礎題：整數轉換為等級
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a >= 90)
	{
		printf("A\n");
	}
	else if(a >= 80)
	{
		printf("B\n");
	}
	else if(a >= 60)
	{
		printf("C\n");
	}
	else
	{
		printf("F\n");
	}
}
```
## 20200305老師要考
### 5.SOIT106_ADVANCE_002：進階題：分式化簡 
```c
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d %d", &a, &b);
	for(int i = 2; i <= a; i ++)
	{
		if(a % i == 0)
		{
			c = i;
			for(int j = 2; j <= b; j ++)
			{
				if(b % j == 0 && j == c)
				{
					d = a / c;
					e = b / c;
				}
			}
		}
	}
	printf("%d %d\n", d, e);
	
}
```
## 20200312老師要考
### 6.SOIT106_ADVANCE_003：進階題：讀入整數反序列印
```c
#include <stdio.h>
int a[1000];
int main()
{
	int b;
	for(int i=0; i<1000; i++)
	{
		scanf("%d",&a[i]);
		b=i;
		if(a[i]==0)break;
	}
	for(int i=b-1; i>=0;i--)
	{
		printf("%d ",a[i]);
	} 
	printf("\n");
}
```

### 7.SOIT106_ADVANCE_005_C：進階題：A的B次方函數
```c
#include <stdio.h>
int MYPOWER(int a, int b)
{
	int c=1;
	for(int i=1; i<=b; i++)
	{
		c=c*a;
	}
	return c;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}

```

### 8.SOIT106_ADVANCE_006：進階題：漸增數列相加 
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ans=0;
	for(int i=1; i<=a; i++)
	{
		ans=ans+i*(i-1);
	}
	printf("%d\n",ans);
}
```
