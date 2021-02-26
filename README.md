# 2020HW

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
## 老師要考
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

### 6.
```c
```

### 7.
```c
```

### 8.
```c
```
