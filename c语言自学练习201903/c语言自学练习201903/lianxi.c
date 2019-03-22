#include <stdio.h>
#include <stdlib.h>
#include "math.h"//数学函数库
#include <conio.h> //getch putch函数需要
#include <string.h>

//表2 运算符优先级和结合律
//优先级	运算符	结合律
//1	后缀运算符：[]    ()    ·    ->    ++    --(类型名称){列表}	从左到右
//2	一元运算符：++    --    !    ~    +    -    *    &    sizeof_Alignof	从右到左
//3	类型转换运算符：(类型名称)	从右到左
//4	乘除法运算符：*    /    %	从左到右
//5	加减法运算符：+    -	从左到右
//6	移位运算符：<<    >>	从左到右
//7	关系运算符：<<=    >>=	从左到右
//8	相等运算符：==    !=	从左到右
//9	位运算符 AND：&	从左到右
//10	位运算符 XOR：^	从左到右
//11	位运算符 OR：|	从左到右
//12	逻辑运算符 AND：&&	从左到右
//13	逻辑运算符 OR：||	从左到右
//14	条件运算符：?:	从右到左
//15	赋值运算符：
//     =         +=        -=       *=       /=      %=       &=       ^=      |=   
//   <<=      >>=	从右到左
//16	逗号运算符：，	从左到右

//c语言复试学习  自学练习
////赋值类型转换
//void main()
//{
//	int a,b=322;
//	float x,y=8.88;
//	char cl='k',c2;
//	a=y;
//	x=b;
//	a=cl;
//	c2=b;
//	printf("%d,%f,%d,%c\n",a,x,a,c2);
//	

//	system("pause");
//	return;
//}

//自增自减
//void main()
//{
//	int i = 8;
//	printf("%d\n",++i);
//	printf("%d\n",--i);
//	printf("%d\n",i++);
//	printf("%d\n",i--);
//	printf("%d\n",-i++);
//	printf("%d\n",-i--);
//
//	system("pause");
//    return;
//}

//void main(){
//	int i = 5,j = 5,p,q;
//	p=(i++)+(i++);//+(i++)
//	q=(++j)+(++j);//+(++j)
//	printf("%d,%d,%d,%d\n",p,q,i,j);
//	system("pause");
//    return;
//}

//关系表达式
//void main(){
//	char c = 'k';
//	int i = 1,j=2,k=3;
//	float x = 3e+5,y=0.85;
//	printf("%d,%d\n",'a'+5<c,-i-2*j>=k+1);
//	printf("%d,%d\n",i+j+k==-2*j,k==j==i+5);
//	
//	system("pause");
//	return;
//}

//输入三个整数 输出最大值，最小值
//void main()
//{
//	int a,b,c,max,min;
//	printf("请输入三个整数：\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>b){
//		max=a;
//		min=b;}
//	else{
//		max=b;
//		min=a;}
//	if(max<c){
//		max=c;
//	}
//	else if(min>c){
//		min=c;
//	}
//	
//	printf("%d %d",max,min);
//
//	system("pause");
//	return;
//
//}

//计算器程序 输入运算数和运算符，输出计算结果
//void main()
//{
//	float a,b;
//	char c;
//	printf("请输入表达式：a+(-,*,/)b\n");
//	scanf("%f%c%f",&a,&c,&b);
//	switch(c)
//	{
//		case '+':printf("%f\n",a+b);break;
//		case '-':printf("%f\n",a-b);break;
//		case '*':printf("%f\n",a*b);break;
//		case '/':printf("%f\n",a/b);break;
//		default:printf("error");
//	}
//	system("pause");
// 	return;
//}

////判断闰年
//void main(){
//	int a,leap;
//	printf("请输入年份:\n");
//	scanf("%d",&a);
//	if(a%4==0){               //如果能被4整除
//		if(a%100==0){         //年份是100的倍数，需被400整除才为闰年
//			if(a%400==0){
//				leap=1;
//			}
//			else leap=0;
//		}
//		else
//			leap=1;
//	
//	}
//	else
//			leap=0;
//
//	if(leap){
//		printf("是闰年");
//	}
//	else {
//		printf("不是闰年");
//	}
//
//	system("pause");
//  	return;
//}

//一个整数，加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？





//输入某年某月，判断这一天是这一年的第几天？  应考虑闰年  月份大于3时，加一天

//int getDaysByMonth(int m,int d,char flag)
//{
//	int c;
//	if(flag=='r'){//闰年 
//		if(m==2){//2月是29天
//			return (31+d);
//		}else if(m>2){
//			c=0;
//			m=m-1;
//			for(;m>0;m--)
//			{
//				if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
//					c+=31;
//				}else if(m==2){
//					c+=29;
//				}else{
//					c+=30;
//				}
//			}
//			return c+d;
//		}else{
//			return d;
//		}
//	}else{//平年 
//		if(m==2){//2月是28天
//			return (31+d);
//		}else if(m>2){
//			c=0;
//			m=m-1;
//			for(;m>0;m--)
//			{
//				if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
//					c+=31;
//				}else if(m==2){
//					c+=28;
//				}else{
//					c+=30;
//				}
//			}
//			return c+d;
//		}else{
//			return d;
//		}
//	}	
//}
//void main()
//{
//	int y,m,d,count=1;
//	printf("请输入年月日（例如2017-01-01）：");
//	scanf("%d-%d-%d",&y,&m,&d);
//	while(  ((((y%4==0 && y%100!=0)||(y%400==0)) && (m==2)) && d>29) || (y%400!=0 && y%4!=0 && m==2 && d>28) ||  ((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)&&d>31) || ((m==4 || m==6 || m==9 || m==11)&& d>30)){
//		printf("请输入年月日（例如2017-01-01）：");
//		scanf("%d-%d-%d",&y,&m,&d);
//	}
//	//先判断是否为闰年
//	if((y%4==0 && y%100!=0)||(y%400==0)){//闰年 
//		count=getDaysByMonth(m,d,'r');
//	}else{//平年 
//		count=getDaysByMonth(m,d,'n');
//	} 
//	printf("%d-%02d-%02d是今年的第%d天\n",y,m,d,count);
//	putchar('\n');
//}

//第五章 循环控制结构程序
//while语句  统计从键盘输入一行字符的个数
//void main(){
//	int n = 0;
//	printf("input a string:\n");
//	while(getchar()!='\n'){   //getchar()读取一个字符   当读取的字符不为空时，执行循环
//		n++;
//	}
//	printf("%d",n);
//	system("pause");
//  	return;
//}

//for 循环
//void main(){
//	int i,j;
//	for(i=1;i<=6;i++){
//		for(j=1;j<=i;j++){  //每一行
//			printf("*");   //putchar("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//    return;
//}

//1、2、3、4 数字，能组成多少个互不相容且无重复数字的三位数？都是多少？
//分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排序后再去掉不满足条件的排序
//void main(){
//	int i,j,m;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){  
//			for(m=1;m<=4;m++){ 
//				if(i!=j &&i!=m &&j!=m)
//				printf("%d%d%d\n",i,j,m);		
//			}  
//		}
//	}
//	system("pause");
//    return;
//}

//break continue
//显示输入的字符，如果按的是esc键，则退出循环；
//如果是enter键，不做任何处理，继续输入下一个字符。
//void main(){
//	char ch;
//	for( ; ; ){
//		ch=getch();    //字符输入函数 返回ASCII码
//		if(ch==27)		//ESC键的ASCII码为27
//			break;
//		if(ch==13)
//			continue;
//		putch(ch);       //显示输入的字符
//	}
//	getch();			//让程序停一下
//
//}

//把100到200之间的不能被3整除的数输出
//
//void main(){
//	int i;
//	for(i=100;i<=200;i++){
//		if(i%3==0){
//			continue;
//		}
//		else
//			printf("%d\n",i);
//	}
//	system("pause");
//    return;
//}
//void main(){
//	int i;
//	for(i=100;i<=200;i++){
//		if(i%3!=0){
//			printf("%d\n",i);
//		}			
//	}
//	
//}

//2015练习
//void main(){
//	
//	/* double x=2.5;
//	int a=7,y=4.7;
//	printf("%f",x+a%3*(int)(x+y)%2/4);*/
//	
//	/*
//	int x=5,a=5;
//	x+=a++;
//	printf("%d,%d",x,a);//10,6*/
//
//	/*//判断字符是否为0-9数字
//	char ch;
//	int a;
//	ch=getchar();
//	a=(ch>'9'||ch<'0')?0:1;
//	printf("%d",a);*/
//
	/*判断字符是否为0-9数字
	char c;
	c=getchar();
	if(c>='0'&& c<='9')
		printf("1");
	else 
		printf("0");*/
//
//
//
//
//
//
//
//
//	system("pause");
//	return;
//}
//
//void main(){
//
//		int s=0,i;
//		int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//		for(i=0;i<3;i++){
//			s+=*(*(a+i)+i);
//		}
//		printf("%d",s);
//		
//		system("pause");  //15
//
//}
//void main(){
	
	//switch语句
	//int a=1;
	//int i=0;
	//switch (a){
	//	case 1:i=1;
	//	case 2:i=2;break;
	//	default:i=3;
	//}
	//printf("%d",i);    //2

	//求最大公约数和最小公倍数
	 //int m, n, a, b, t, c;
  //   printf("Input two integer numbers:\n");
  //   scanf("%d%d", &a, &b);
  //   m=a;   
	 //n=b;
  //   while(b!=0)  /* 余数不为0，继续相除，直到余数为0 */ 
  //   { c=a%b; 
		//a=b;  
		//b=c;
	 //}
  //  printf("The largest common divisor:%d\n", a);
  //  printf("The least common multiple:%d\n", m*n/a);//两个数的乘积等于这两个数的最大公约数与最小公倍数的乘积
//}

//这个不对！
//double b;	//个人所得税率
//double tax;//  应缴纳的个人所得税
//void main(){
//
//	double result;//实发工资
//	double a,wage;//a:应交税所得额  c:速算扣除数
//    int c,x;
//	scanf("%d",&wage);//输入应发工资
//	
//	
//	a=wage-3500;
//	if(a<=0){
//		x=1;
//	}
//	else if(a>0&&a<=500){
//		x=2;
//	}
//	else if(a>500&&a<=2000){
//		x=3;
//	}
//	else if(a>2000&&a<=5000){
//		x=4;
//	}
//	else if(a>5000&&a<=20000){
//		x=5;
//	}
//	switch (x)
//	{
//		case 1:tax=a*0-0;break;
//		case 2:tax=a*0.05-0;break;
//		case 3:tax=a*0.1-25;break;
//		case 4:tax=a*0.15-125;break;
//		case 5:tax=a*0.2-375;break;	
//	}
//	//tax=a*b-c;
//	result=wage-tax;
//	printf("%f,%f\n",tax,result);
//
//
//	system("pause");
//}

//2015 三 3
//void main(){
//	int a,n,t,i,s=0;
//	printf("请输入a(10以内的正整数) n(前n项和)：");
//	scanf("%d %d",&a,&n);
//	t=a;
//	for(i=1;i<=n;i++){
//		t=t*10+a;
//		s+=t;
//	}
//	printf("%d",s);
//	system("pause");
//}

//三 4 没完成
//void main(){
//
//
//	int a[20],i,n,j,b[20];
//	for(i=0;i<20;i++){
//		scanf("%d",&n);
//		a[i]=n;
//		printf("%d,",a[i]);
//	}
//	//b[19-i]=a[i];
//
//	system("pause");
//}

//2014 字符串拼接
//int main(void)
//{
//    char dest[30] = "Hello";
//    char src[] = "World";
// 
//    strcat(dest, src);
//    printf("dest:[%s]\n", dest);
//	
//	 system("pause");
//    return 0;
//}

//void main(){
//	int m=7;
//	//printf("%d\n",m/2+1);   //4
//	//printf("%d\n",m/2.0+1); //0?  m/2.0+1是浮点型 %d是整型，类型不同 输出为0
//	//printf("%f\n",(float)m/2+1); //4.5
//	//printf("m=%d\n",m);  //7
//	
//
//	system("pause");
//}

//二 计算1*2+3*4+...+n*(n+1)
//void main(){
//	int n,i,sum=0;
//	printf("请输入n的值:\n");
//	scanf("%d",&n);
//	for(i=1;i<n+1;i+=2){
//		sum+=i*(i+1);
//	}
//	printf("%d",sum);
//	system("pause");
//}
//三 水仙花数 三位数
//void main(){
//	int a,i,j,k;
//	for(i=1;i<10;i++){
//		for(j=0;j<10;j++){
//			for(k=0;k<10;k++){
//				a=i*i*i+j*j*j+k*k*k;
//				if(i*100+j*10+k==a)
//					printf("%d\n",a);
//			}
//		}
//	}
//	system("pause");
//}
//四 冒泡排序 从小到大
//void output(int a[],int n)
//{
//	int i;
//	for (i=0;i<n;i++)
//	{
//		printf("%4d",a[i]);
//	}
//	printf("\n");
//}
//void main()
//{
//	int a[10];
//	int i,j,t,n=10;
//	printf("Input 10 numbers：\n");  
//	for (i=0;i<n;i++)         
//	{
//		scanf("%d",&a[i]);     //从键盘输入10个整数  存入a[10]数组
//	}
//	printf("The array is：\n");
//	output(a,10);				//调用函数 输出数组中所有元素 
//	printf("sorting...\n");
//	for(i=1;i<=n-1;i++)			//冒泡排序
//	{	for(j=1;j<=n-i;j++)
//		{
//			if(a[j-1]>a[j])
//			{
//				t=a[j];
//				a[j]=a[j-1];
//				a[j-1]=t;
//			}
//		}
//	output(a,10);			//一趟完成之后 输出一次
//	}
//	printf("The result is:\n");
//	output(a,10);
//	system("pause");
//}

//五 求一个3*3的矩阵矩阵对角线元素之和  注意包括：主对角线 副对角线
//void main(){
//	int i,j,sum=0,sum1=0;
//	int a[3][3];
//	printf("请输入9个整数存入二维数组：\n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf ("a[%d][%d]:", i, j);
//			scanf("%d",&a[i][j]);     //利用双重for循环控制输入二维数组a
//		}
//		printf("\n");
//	}
//
//	//sum=a[0][0]+a[1][1]+a[2][2];
//	for( i=0; i<=2; i++)
//	{
//		for( j=0; j<=2; j++)
//		{
//			if(i==j)
//			sum = sum+a[i][j];
//			if(i+j==2)
//			sum1= sum1+a[i][j];
//		}
//	}
//
//	printf("主对角线和为：%d\n",sum);
//	printf("副对角线和为：%d\n",sum1);
//	printf("总和为：%d\n",sum+sum1);
//	system("pause");
//}

//六 某商场打折促销商品，根据【购买数量x】给予不同的折扣。。。
//void main(){
//	int count,price,m;
//	float discount,money;
//	printf("请输入购买数量：\n");
//	scanf("%d",&count);
//	printf("请输入商品单价：\n");
//	scanf("%d",&price);
//	if(count<0){
//		m=0;
//	}
//	else if(count<5){
//		m=1;
//	}
//	else if(5<=count&&count<10){
//		m=2;
//	}
//	else if(10<=count&&count<20){
//		m=3;
//	}
//	else if(count>=20){
//		m=4;
//	}
//	switch(m){
//	case 0:printf("请输入正确的数量");break;
//	case 1:discount=1;break;
//	case 2:discount=0.1;break;
//	case 3:discount=0.2;break;
//	case 4:discount=0.3;break;
//	}
//	printf("折扣：%f\n",discount);
//	money=price*count*discount;
//	printf("%f",money);
//	system("pause");
//}

//2013
//一 4
//void main(){
//
//	char c1='B',c2='O',c3='Y',c4='\101',c5='\116';
//	printf("a%cb%c\tc%c\tabc\n",c1,c2,c3);//aBbO    cY    abc
//	printf("\t\b%c%c\n",c4,c5);           //AN
//	system("pause");
//}
//3判断 char型变量 ch  是否为大写字母
//void main(){
//
//	char ch;
//	ch=getchar();
//	if(ch>='A'&&ch<='Z'){
//		printf("是大写字母");
//	}
//	else
//		printf("不是大写字母");
//	system("pause");
//}

//5
//void main(){
//	int a=3,b=4,c=5,d;
//	d=!(a+b)+c-1&&b+c/2;
//	printf("%d",d);//1       运算等级：! 运算符（* / + -） 关系运算符(< >) &&和||   ?:  =  
//	system("pause");
//}

//二
//#define pi 3.14
//void main(){
//	float r=1.5,h=3.0;
//	float c,s,s1,v,v1;
//	c=r*2*pi;
//	s=r*r*pi;
//	s1=4.0*pi*r*r;
//	v=4.0/3.0*pi*r*r*r;
//	v1=s*h;
//	printf("圆周长为：%.2f\n 圆面积为：%.2f\n 圆球表面积为：%.2f\n 圆球体积：%.2f\n 圆柱体积：%.2f\n",c,s,s1,v,v1);
//	system("pause");
//}

//三 百分制成绩
//void main(){
//	int a;
//	printf("请输入成绩:\n");
//	scanf("%d",&a);
//	if(a>100 || a<0){
//		printf("请输入正确的成绩\n");
//	}
//	else if(a>=90){
//		printf("成绩为A");
//	}
//	else if(a>=80){
//		printf("成绩为B");
//	}
//	else if(a>=70){
//		printf("成绩为C");
//	}
//	else if(a>=60){
//		printf("成绩为D");
//	}
//	else{
//		printf("成绩为E");
//	}
//	system("pause");
//}

//用选择法对10个整数从小到大排序
/*工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，
存放在序列的起始位置，直到全部待排序的数据元素排完。*/
//void main(){
//	int i,j,min,temp;
//	int a[10];
//	for(i=0;i<10;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("数组为：");
//	for(i=0;i<10;i++){
//		printf(" %d ",a[i]);
//	}
//	printf("\n");
//
//	for(i=0;i<10;i++)
//	{
//		min=i;
//		for(j=i+1;j<10;j++)
//		{
//			if(a[min]>a[j])
//				min=j;
//		}
//	   temp=a[i];  //最小元素a[min]
//       a[i]=a[min];
//	   a[min]=temp;
//	}
//	for(i=0;i<10;i++){
//		printf(" %d ",a[i]);
//	}
//	system("pause");
//}
//五 写一个函数，使给定的一个二维数组(3*3)转置，即行列互换
//main{
//给出二维数组a[3][3]
//转置函数声明
//转制函数调用
//}
//转置函数定义  void switchArray(int array[3][3])
//void main(){
//	int tran(int a[3][3]);
//	
//	int l[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	tran(l);
//	system("pause");
//}
//int tran(int a[3][3]){
//	int i,j;
//	int b[3][3];
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			b[i][j]=a[j][i];
//		}
//	}
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%2d",b[i][j]);
//		}
//		printf("\n");
//	}
//}

//网上答案
//void main(){
//
//	void switchArray(int [3][3]);
//	int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//	int i,j;
//	switchArray(array);
//
//	system("pause");
//}
//
//void switchArray(int array[3][3]){
//    int newArray[3][3];
//    int i,j;
//    for(i=0;i<3;i++){
//        for(j=0;j<3;j++){
//            newArray[j][i] = array[i][j];
//        }
//    }
//    for(i=0;i<3;i++){
//        for(j=0;j<3;j++){
//            printf("%d ",newArray[i][j] );
//        }
//    printf("\n");
//    }
//	
//}
//2012 
//一 2
//int main(){
//	int x=1,a=0,b=0;
//	switch(x){
//	case 0:b++;
//	case 1:a++;
//	case 2:a++;b++;
//	}
//	printf("a=%d,b=%d",a,b);  //a=2,b=1
//	system("pause");
//
//}
//3
//int fun(){
//	static int a=0;  //可以作为一个全局变量 保存被修改的值
//	a+=3;
//	printf("%4d",a);
//}
//void main(){
//	int i;
//
//	for(i=0;i<3;i++)fun();
//	printf("\n");			//3 6 7  | 如果上面改成 int a=0;则输出3 3 3
//	system("pause");     
//}
//4

//函数练习
//void main()
//{
//int n;
//printf("input number\n");
//scanf("%d",&n);
//s(n);
//printf("n=%d\n",n);
//system("pause"); 
//}
//int s(int n)
//{
//int i;
//for(i=n-1;i>=1;i--)
//n=n+i;
//printf("n=%d\n",n);
//}                 //n=15 n=5

//
//数组a中存放了一个学生5门课程的成绩，求平均成绩。
//float aver(float a[5])
//{
//int i;
//float av,s=a[0];
//for(i=1;i<5;i++)
//s=s+a[i];
//av=s/5;
//return av;
//}
//void main()
//{
//float sco[5],av;
//int i;
//printf("\ninput 5 scores:\n");
//for(i=0;i<5;i++)
//scanf("%f",&sco[i]);
//av=aver(sco);						//数组名就是数组的首地址。因此在数组名作函数参数时所进行的传送只是地址的传送， 也就是说把实参数组的首地址赋予形参数组名。
//printf("average score is %5.2f",av);
//system("pause"); 
//}

//void nzp(int a[5])
//{
//int i;
//printf("\nvalues of array a are:\n");
//for(i=0;i<5;i++)
//{
//if(a[i]<0) a[i]=0;
//printf("%d ",a[i]);
//}
//}
//void main()
//{
//int b[5],i;
//printf("\ninput 5 numbers:\n");
//for(i=0;i<5;i++)
//  scanf("%d",&b[i]);
//printf("initial values of array b are:\n");
//for(i=0;i<5;i++)
// printf("%d ",b[i]);
//nzp(b);
//printf("\nlast values of array b are:\n");
//for(i=0;i<5;i++)
//printf("%d ",b[i]);
//system("pause"); 
//}

//[例5.9]用递归法计算n!用递归法计算n!可用下述公式表示：
//n!=1 (n=0,1)
//n×(n-1)! (n>1)
//按公式可编程如下：
//long ff(int n)
//{
//long f;
//if(n<0) printf("n<0,input error");
//else if(n==0||n==1) f=1;
//else f=ff(n-1)*n;
//return(f);
//}
//void main()
//{
//int n;
//long y;
//printf("\ninput a inteager number:\n");
//scanf("%d",&n);
//y=ff(n);
//printf("%d!=%ld",n,y);
//system("pause"); 
//}

//指针
//对于一个内存单元来说，单元的地址即为指针， 其中存放的数据才是该单元的内容。
//在Ｃ语言中， 允许用一个变量来存放指针，这种变量称为指针变量。
//因此， 一个指针变量的值就是某个内存单元的地址或称为某内存单元的指针。
// 严格地说，一个指针是一个地址， 是一个常量。而一个指针变量却可以被赋予不同的指针值，是变。 
//但在常把指针变量简称为指针。为了避免混淆，我们中约定：“指针”是指地址， 是常量，“指针变量”是指取值为地址的变量。 定义指针的目的是为了通过指针去访问内存单元。
//int *p1;表示p1是一个指针变量，它的值是某个整型变量的地址。或者说p1指向一个整型变量。
//(1)指针变量初始化的方法 
//int a; int *p=&a;
//(2)赋值语句的方法 int a;
//int *p;
//p=&a;
//main(){
//	int a=10,b=20,s,t,*pa,*pb;
//	pa=&a;
//	pb=&b;
//	s=*pa+*pb;
//	t=*pa**pb;
//	printf("a=%d\nb=%d\na+b=%d\na*b=%d\n",a,b,a+b,a*b);   //a=10 b=20 a+b=30 a*b=200 s=30 t=200 
//	printf("s=%d\nt=%d\n",s,t);
//	system("pause"); 
//}
//main(){
//int a,b,c,*pmax,*pmin;
//printf("input three numbers:\n");
//scanf("%d%d%d",&a,&b,&c);
//if(a>b){
//	pmax=&a;
//	pmin=&b;}
//else{
//	pmax=&b;
//	pmin=&a;}
//if(c>*pmax) pmax=&c;
//if(c<*pmin) pmin=&c;
//printf("max=%d\nmin=%d\n",*pmax,*pmin);
//system("pause"); 
//}

//
//main(){
//int a[5],i,*pa;
//pa=a;
//for(i=0;i<5;i++){
//	*pa=i;
//	pa++; //将指针pa指向a[]的下一个单元
//}
//
//pa=a;
//for(i=0;i<5;i++){
//	printf("a[%d]=%d\n",i,*pa);
//	pa++;
//}
//system("pause");
//}
//主函数
//定义整型数组和指针
//将指针pa指向数组a
//循环
//将变量i的值赋给由指针pa指向的a[]的数组单元
//将指针pa指向a[]的下一个单元
//......
//指针pa重新取得数组a的首地址
//循环
//用数组方式输出数组a中的所有元素
//将指针pa指向a[]的下一个单元
//......

//float aver(float *pa);//aver函数声明
//main(){
//float sco[5],av,*sp;
//int i;
//sp=sco;              //指针指向sco首地址
//printf("\ninput 5 scores:\n");
//for(i=0;i<5;i++) scanf("%f",&sco[i]);
//av=aver(sp);                             //函数调用
//printf("average score is %5.2f",av);
//system("pause");
//}
//float aver(float *pa)
//{
//int i;
//float av,s=0;
//for(i=0;i<5;i++) s=s+*pa++;    
//av=s/5;
//return av;
//}
//下面通过例子来说明用指针形式实现对函数调用的方法。
//int max(int a,int b){
//if(a>b)return a;
//else return b;
//}
//main(){
//int max(int a,int b);   //1.从上述程序可以看出用，函数指针变量形式调用函数的步骤如下：1. 先定义函数指针变量，如后一程序中第9行 int (*pmax)();定义pmax为函数指针变量。
//int(*pmax)();
//int x,y,z;
//pmax=max;              //2. 把被调函数的入口地址(函数名)赋予该函数指针变量，如程序中第11行 pmax=max;
//printf("input two numbers:\n");
//scanf("%d%d",&x,&y);
//z=(*pmax)(x,y);         //3. 用函数指针变量形式调用函数，如程序第14行 z=(*pmax)(x,y);　调用函数的一般形式为： (*指针变量名) (实参表)
//printf("maxmum=%d",z);
//}

////
//int fun(int n){//判断n是否是素数 
//    int i;
//    for(i=2;i<n;i++)
//        if(n%i==0) return 0;
//    return 1;
//}
//int main()
//{ 
//    int n;
//    scanf("%d",&n);
//    if(fun(n))
//        printf("%d是素数！\n",n);
//    else 
//        printf("%d不是素数！\n",n);
//    
//	system("pause");
//	return 0; 
//}

 
