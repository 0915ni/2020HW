# 2020HW
[1.SOIT106_BASE_002：基礎題：找零錢](https://github.com/0915ni/2020HW#1soit106_base_002%E5%9F%BA%E7%A4%8E%E9%A1%8C%E6%89%BE%E9%9B%B6%E9%8C%A2)

[2.SOIT106_BASE_005：基礎題：因數個數](https://github.com/0915ni/2020HW#2soit106_base_005%E5%9F%BA%E7%A4%8E%E9%A1%8C%E5%9B%A0%E6%95%B8%E5%80%8B%E6%95%B8)

[3.SOIT106_BASE_010：基礎題：找倍數](https://github.com/0915ni/2020HW#3soit106_base_010%E5%9F%BA%E7%A4%8E%E9%A1%8C%E6%89%BE%E5%80%8D%E6%95%B8)

[4.SOIT106_BASE_012：基礎題：整數轉換為等級](https://github.com/0915ni/2020HW#4soit106_base_012%E5%9F%BA%E7%A4%8E%E9%A1%8C%E6%95%B4%E6%95%B8%E8%BD%89%E6%8F%9B%E7%82%BA%E7%AD%89%E7%B4%9A)

[5.SOIT106_ADVANCE_002：進階題：分式化簡](https://github.com/0915ni/2020HW#5soit106_advance_002%E9%80%B2%E9%9A%8E%E9%A1%8C%E5%88%86%E5%BC%8F%E5%8C%96%E7%B0%A1)

[6.]()

[7.]()

[8.](https://github.com/0915ni/2020HW#8)

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
