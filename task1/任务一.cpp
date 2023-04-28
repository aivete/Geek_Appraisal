#include<stdio.h>
#include<math.h>

int main()
{
	double a , x , y , j , k , t , h = 0.001;
	int n = 0;
	
	printf("请输入a的值：");
	scanf("%lf", &a);
	
	x = 0;
	y = a;
	printf("n       X        Y\n");
	do{
		j = y;
		y = y + h*(-y);
		k = y;
		t = k - j;
		x = x + h;
		n++;
		printf("%d    ",n);
		printf("%lf  ",x);
		printf("%lf\n",k);
	}while( fabs(t) > 0.001*h);
	
	printf("计算结果为：%lf\n", y);
	printf("共进行了%d次运算\n", n);
	return 0;
	
}
