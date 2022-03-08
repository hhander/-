#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>





//int main()
//{
//	char arr1[] = { "hello bit" };
//	char arr2[] = { "#########" };
//	memset(arr1, '*',3);
//	printf("%s", arr1); 
//	return 0;
//}

//void swap(int* px,int* py)
//{
//	int ret = *py;
//	*py=*px;
//	*px=ret;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("初始结果%d%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后结果%d%d\n", a, b);
//	return 0;
//}




//
//int main()
//{
//	char arr1[] = { "hello bit" };
//	char arr2[] = { "#########" };
//	memset(arr1, '*',3);
//	printf("%s", arr1); 
//	return 0;
//}




//int Add(int x,int y)
// 
// 
// 
// 
// 
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 11;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//}



 
//int main()
//{
//	int a = 7;
//	int b = 6;
//	int c = 3;
//	if (a < b)
//	{
//		int ret = a;
//		a = b;
//		b = ret;
//	}
//	else if (a < c)
//	{
//		int ret = a;
//		a = c;
//		c = ret;
//	}
//	else if (b < c)
//	{
//		int ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}









//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,11,9,10 };
//	int max = arr[0];
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}





//int main()
//{
//	int i = 1;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}






//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请在一分钟之内输入爱你哟，不然电脑关机");
//		scanf("%s", &input);
//		if (0 == strcmp(input, "爱你哟"))
//		{
//			system("shutdown -a");
//			printf("me too\n");
//			break;
//		}
//		else
//			printf("快点\n");
//	}
//	return 0;
//}





//int main()
//{
//	system(" shutdown -s -t 60");
//	char input[20] = {0};
//again:
//	printf("请输入爱你哟，不然一分钟之内电脑关机");
//	scanf("%s", &input);
//	if (0 == strcmp(input, "爱你哟"))
//	{
//		system("shutdown -a");
//		printf("好的，取消了");
// //break;
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}






//int main()
//{
//	int num = 100;
//	int i = 2;
//	int count = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		for (i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//			{
//				break;
//			}
//		}
//		if (num == i)
//		{
//			count++;
//			printf("%d %d \n", num,count);
//		}
//	}
//	return 0;
//}







//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//			Sleep(50);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int input = 0;
//int guess = 0;
//void game()
//{
//	printf("猜数字\n");
//	int ret = rand()%100;
//	int count = 0;
//	/*printf("%d", ret);*/
//	while (count<7)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了你还剩机会次数%d\n",6-count);
//			count++;
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了你还剩机会次数%d\n", 6 - count);
//			count++;
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//	if (count >= 7)
//		printf("正确答案是%d\n", ret);
//}
//void menu()
//{
//	printf("******************\n");
//	printf("*******1>play*****\n");
//	printf("*******0>quit*****\n");
//	printf("******************\n");
//}
//
//int main()
//{
//	srand(time(NULL));
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("任意键退出游戏");
//			break;
//		}
//		default :
//		{
//			printf("输入错误");
//			break;
//		}
//		}
//	} while (input);
//	return 0;
//}





//RAND_MAX;
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;//*******随机生成一个数字 但是未重置 每次会一样srand((time(NULL)));//照着电脑时间重置数字
//	printf("猜数字\n");
//	/*printf("%d", ret);*/
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//}
//
//
//void menu()
//{
//	printf("*******************\n");
//	printf("******play>1*******\n");
//	printf("******quit>0*******\n");
//	printf("*******************\n");
//};
//int main()
//{
//	srand((time(NULL)));//照着电脑时间重置数字
//	int i = 0;
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf("%d", &i);
//		switch (i)  
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新输入\n");
//		}
//	} while (i == 1);
//return 0;
//}







//九九 素数
//int main() 
//{
//	int num = 1;
//	int i = 2;
//	for (num = 100; num <= 200; num++)
//	{
//		for (i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//				break;
//		}
//		if (num == i)
//		{
//			printf("%d", num);
//			printf("\n");
//		}
//	}
//	return 0;
//}







//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//			Sleep(50);
//		}
//		printf("\n");
//	}
//	return 0;
//}







//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("%d", max);
//		return 0;
//}








//int main()
//{
//	char arr1[] = { "welcome to my heart" };
//	char arr2[] = { "###################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		system("cls");
//		Sleep(50);
//		system("cls");
//		left++;
//		right--;
//	}
//	while (left > right)
//	{
//		printf("welcome to my heart");
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了是:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//}




//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}






//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	int i = 1;
//	double ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%lf", ret);
//	return 0;
//}






//int main()
//{
//	int flag = 1;
//	int i = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//			Sleep(50);
//		}
//		printf("\n");
//	}
//	return 0;
//}






//int main()
//{
//	int i = 1;
//	for (i = 1; i < 10; i++)
//	{
//		Sleep(20);
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//			Sleep(20);
//		}
//		Sleep(200);
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;//第一次正 第二次负
//	}
//	printf("%lf", sum);
//	return 0;
//}






//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) 
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}









//int main()
//{
//	int num = 100;
//	int count = 0;
//	int i = 2;
//	for (num = 100; num <= 200; num++)//如果这个数除以（这个数-1）到1
//	{
//		for (i = 3; i < num; i+=2)
//		{
//			if (num % i == 0) 
//				break;
//		}
//		if (num == i)
//			printf("%d", i);
//	}
//	return 0;
//}
//




//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year<=2100;year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d/n", year);
//			count++;
//		}
//    }
//	printf("%d", count);
//	return 0;
//}






//int main()
//{
//	int a = 24;
//	int b = 18;
//	scanf("%d%d", &a, &b);
//	while (a % b != 0)
//	{
//		int y = a % b;
//		a = b;
//		b = y;
//	}
//		printf("最大公约数%d：", b);
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int z = a;//赋值给z,保持a之前的数字。
//		a = b;
//		b = z;
//	}
//	if (a < c)
//	{
//		int z = a;
//		a = c;
//		c = z;
//	}
//	if (b < c)
//	{
//		int z = b;
//		b = c;
//		c = z;
//	}
//	printf("%d%d%d",a,b,c);
//	return 0;
//}







//练习5
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	printf("请输入密码：");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", &password);
//		if (strcmp(password, "xww123..") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//			printf("密码错误请重试");
//	}
//	if (i == 3)
//		printf("密码错误三次，请稍后再试");
//	return;
//}




//练习4
//int main()
//{
//	char arr1[] = { "welcome to my house" };
//	char arr2[] = { "###################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(30);
//		system("cls");
//		left++;
//		right--;
//	}
//	while (left > right)
//	{
//		printf("welcome to my house");
//		break;
//	}
//
//	return 0;
//}






//练习3.1 在数组中查找某个元素的下标（二分法）
//int main()
//{
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int k = 7;
//int mid = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//int left = 0;
//int right = sz - 1;
//while (left <= right)
//{ 
//	mid = (left + right) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{ 
//		left = mid + 1;
//	}
//	else
//	{ 
//		printf("找到了是%d", mid);
//	    break;
//	}
//}
//if (left > right)
//        printf("找不到");
//return 0;
//}










//练习3 在数组中查找某个元素的下标（逐个排查法）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	scanf("%d", &k);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		if (arr[i] == k)
//		{
//			printf("下标是：%d", i);
//			break;
//		}
//		else
//			i++;
//	}
//	if (i >= sz)
//		printf("查不到");
//	return 0;
//}







//练习2
//int main()
//{
//	double ret = 1;
//	double sum = 1;
//	int n = 1;
//	for (n = 1; n<=10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("1!+...+10！=%lf", sum);
//	return 0;
//}









//练习1
//int main()
//{
//	double ret = 1;
//	int i = 1;
//	int n = 10;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d!=%lf", n,ret);
//	return 0;
//}





//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };
//	int right = strlen(arr1) - 1;//字符串元素不止看到的那些 还有隐藏的\0 所以用sizeof的时候元素为sizeof-1 下表-2
//	int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(10);//延迟多少毫秒
// 
// 
// 
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	if (left > right)
//		printf("%s", arr1);
//	return 0;










//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int mid = 1;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//return 0;
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =7 /*7*/;
//	scanf("%d", &k);
//	int sz = 0;
//	sz = sizeof(arr)/ sizeof(arr[0]);
//	/*printf("%d", sz);*/
//	int i = 0;
//	int left = 0;
//	int mid = 0;
//	int right = sz - 1;//(因为sz代表元素个数，right表示下下标)
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid = (left + right)要放在循环中，不然mid无法改变
//		if (arr[mid] > k)//mid 下标表示的元素大于需要寻找的元素
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else//找到了就输出
//		{
//			printf("找到了是%d", mid);
//			break;//找到了跳出循环
//		}
//     }
//	if (left > right)//说明这个元素集合里面没有需要寻找的元素
//		printf("找不到");
//		return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 13;
//	scanf("%d", &k);
//	int i = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	for (i = 0; i < sz; i++)
//	{
//		if(arr[i] == k)
//		{
//			printf("找到了是:%d\n", i);
//		break;
////		}
////	}
////	if (i == sz)
////		printf("找不到");
////	return 0;
//}







//int main()
//{
//	int sum = 0;
//	int n = 0;
//	int i = 1;
//	double ret = 1;
//	for (n=1; n <= 5; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d",sum);
//	return 0;



//int main()
//{
//	int n = 1;
//	int i = 1;
//	double ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf(" % d != % lf", n, ret);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
// }


//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (; i < 10; i++)
//	{
//		for (/*n=0*///初始化; n < 10; n++)
//		{
//			printf("hehe%d\n", n);
//		}
//	}
//	return 0;
//}




//int main()
//{
//	for (; ;)
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i=0; i<10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}



//int main()
//{
//	int ans = 0;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", password);
//	printf("请确认密码Y/N");
//	getchar();
//	ans = getchar();
//	if (ans = 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", &password);
//	printf("请确认密码1/0:<");
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		if (n = 1)
//			printf("确认成功");
//			break;
//	case 0:
//		if (n = 0)
//			printf("取消确认");
//		break;
//	default:
//		printf("请输入1/1");
//	}
//	return 0;




//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		if (i == 57)
//			break;
//		printf("hehe:%d\n", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d %d", m, n);
//	return 0;
//}
//
//




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("hehe");
//			break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i >= 0 && i <= 100)
//	{
//		if (0 != i % 2)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (0 == a % 2)//判断a是否为偶数
//		printf("偶数");
//	else
//		printf("奇数");
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//		else
//			printf("haha");
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年");
//	else if (age >= 18 && age < 36)//不可以使用18<=age<36
//		printf("青年");
//	else
//		printf("成年");
//	//else
//	//	printf("成年");
//	return 0;
//}

//struct stu
//{
//	char name[30];
//	short age;
//	char sex[10];
//	char id[30];
//};
//int main()
//{
//	struct stu A = { "谢威威",23,"男","16010111" };
//	struct stu* pA = &A;
//	/*printf("%s %d %s %s", pA->name, pA->age, pA->sex, pA->id);*/
//	pA->age = 22;
//	//printf("%d", A.age);
//	strcpy(pA->id,1666666);
//	printf("%d\n", A.id);
//	///*/*printf("%s\n %d\n %s\n %s\n",A.name,A.age,A.sex,A.id);*/*/
//	return 0;
//}

  


//struct Book
//{
//	char name[30];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "
//
//	printf("%s\n %d\n",pb->name, pb->price);
//	pb->price = 15;  
//	strcpy(b1.name, "钢铁");
//	printf("%s\n %d\n", b1.name , b1.price);
//	/*printf("书：%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	b1.price = 15;
//	printf("降价后%d\n", b1.price);*/
//	return 0;
//}

//int main()
//{
//	printf("%d", sizeof(char*));
//	return 0;
//}
////int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	*pd = 5.51;
//	printf("%lf", a);
//	return 0;
//}




//int main()
//{
//	char ch = 'e';
//	char* p = &ch;
//	/**p = 'a';*/
//	printf("%d", sizeof(p));
//	return 0;
//}


//int main()
// 
// 
// 
///
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d", sizeof());
//	return 0;
//}




//#define Max(x,y) (x>y?x:y);
// Max(x, y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = pow(2,32);
//	printf("%d\n", max);
//	return 0;
//}







//extern int Add(int x, int y);
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}



//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//} 
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//
//#include<math.h>
//int main()
//{
//	float a = 0.2;
//	printf("%f\n", pow(a, 15));
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", num1, num2);
//	max = (num1 > num2 ? num1 : num2);
//	printf("%d\n", max);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%f\n", pow(2, 3));
//	return 0;
//}



//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max = Max(num1, num2);
//	printf("最大值                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 是：%d\n", max);
//}




//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 - num2;
//	if (sum < 0)
//		printf("%d\n", num2);
//	else
//		printf("%d\n", num1);
//	return 0;
//}
