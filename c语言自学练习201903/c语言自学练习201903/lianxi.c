#include <stdio.h>
#include <stdlib.h>
#include "math.h"//��ѧ������
#include <conio.h> //getch putch������Ҫ
#include <string.h>


//c���Ը���ѧϰ  ��ѧ��ϰ
////��ֵ����ת��
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

//�����Լ�
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

//��ϵ���ʽ
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

//������������ ������ֵ����Сֵ
//void main()
//{
//	int a,b,c,max,min;
//	printf("����������������\n");
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

//���������� ����������������������������
//void main()
//{
//	float a,b;
//	char c;
//	printf("��������ʽ��a+(-,*,/)b\n");
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

////�ж�����
//void main(){
//	int a,leap;
//	printf("���������:\n");
//	scanf("%d",&a);
//	if(a%4==0){               //����ܱ�4����
//		if(a%100==0){         //�����100�ı������豻400������Ϊ����
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
//		printf("������");
//	}
//	else {
//		printf("��������");
//	}
//
//	system("pause");
//  	return;
//}

//һ������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�





//����ĳ��ĳ�£��ж���һ������һ��ĵڼ��죿  Ӧ��������  �·ݴ���3ʱ����һ��

//������ ѭ�����ƽṹ����
//while���  ͳ�ƴӼ�������һ���ַ��ĸ���
//void main(){
//	int n = 0;
//	printf("input a string:\n");
//	while(getchar()!='\n'){   //getchar()��ȡһ���ַ�   ����ȡ���ַ���Ϊ��ʱ��ִ��ѭ��
//		n++;
//	}
//	printf("%d",n);
//	system("pause");
//  	return;
//}

//for ѭ��
//void main(){
//	int i,j;
//	for(i=1;i<=6;i++){
//		for(j=1;j<=i;j++){  //ÿһ��
//			printf("*");   //putchar("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//    return;
//}

//1��2��3��4 ���֣�����ɶ��ٸ��������������ظ����ֵ���λ�������Ƕ��٣�
//�����������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е��������ȥ������������������
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
//��ʾ������ַ������������esc�������˳�ѭ����
//�����enter���������κδ�������������һ���ַ���
//void main(){
//	char ch;
//	for( ; ; ){
//		ch=getch();    //�ַ����뺯�� ����ASCII��
//		if(ch==27)		//ESC����ASCII��Ϊ27
//			break;
//		if(ch==13)
//			continue;
//		putch(ch);       //��ʾ������ַ�
//	}
//	getch();			//�ó���ͣһ��
//
//}

//��100��200֮��Ĳ��ܱ�3�����������
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

//2015��ϰ
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
//	/*//�ж��ַ��Ƿ�Ϊ0-9����
//	char ch;
//	int a;
//	ch=getchar();
//	a=(ch>'9'||ch<'0')?0:1;
//	printf("%d",a);*/
//
	/*�ж��ַ��Ƿ�Ϊ0-9����
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
	
	//switch���
	//int a=1;
	//int i=0;
	//switch (a){
	//	case 1:i=1;
	//	case 2:i=2;break;
	//	default:i=3;
	//}
	//printf("%d",i);    //2

	//�����Լ������С������
	 //int m, n, a, b, t, c;
  //   printf("Input two integer numbers:\n");
  //   scanf("%d%d", &a, &b);
  //   m=a;   
	 //n=b;
  //   while(b!=0)  /* ������Ϊ0�����������ֱ������Ϊ0 */ 
  //   { c=a%b; 
		//a=b;  
		//b=c;
	 //}
  //  printf("The largest common divisor:%d\n", a);
  //  printf("The least common multiple:%d\n", m*n/a);//�������ĳ˻������������������Լ������С�������ĳ˻�
//}

//������ԣ�
//double b;	//��������˰��
//double tax;//  Ӧ���ɵĸ�������˰
//void main(){
//
//	double result;//ʵ������
//	double a,wage;//a:Ӧ��˰���ö�  c:����۳���
//    int c,x;
//	scanf("%d",&wage);//����Ӧ������
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

//2015 �� 3
//void main(){
//	int a,n,t,i,s=0;
//	printf("������a(10���ڵ�������) n(ǰn���)��");
//	scanf("%d %d",&a,&n);
//	t=a;
//	for(i=1;i<=n;i++){
//		t=t*10+a;
//		s+=t;
//	}
//	printf("%d",s);
//	system("pause");
//}

//�� 4 û���
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

//2014 �ַ���ƴ��
//int main(void)
//{
//    char dest[30] = "Hello";
//    char src[] = "World";
// 
//    strcat(dest, src);
//    printf("dest:[%s]\n", dest);
//	
//	system("pause");
//    return 0;
//}

//void main(){
//	int m=7;
//	//printf("%d\n",m/2+1);   //4
//	//printf("%d\n",m/2.0+1); //0?  m/2.0+1�Ǹ����� %d�����ͣ����Ͳ�ͬ ���Ϊ0
//	//printf("%f\n",(float)m/2+1); //4.5
//	//printf("m=%d\n",m);  //7
//	
//
//	system("pause");
//}

//�� ����1*2+3*4+...+n*(n+1)
//void main(){
//	int n,i,sum=0;
//	printf("������n��ֵ:\n");
//	scanf("%d",&n);
//	for(i=1;i<n+1;i+=2){
//		sum+=i*(i+1);
//	}
//	printf("%d",sum);
//	system("pause");
//}
//�� ˮ�ɻ��� ��λ��
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
//�� ð������ ��С����
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
//	printf("Input 10 numbers��\n");  
//	for (i=0;i<n;i++)         
//	{
//		scanf("%d",&a[i]);     //�Ӽ�������10������  ����a[10]����
//	}
//	printf("The array is��\n");
//	output(a,10);				//���ú��� �������������Ԫ�� 
//	printf("sorting...\n");
//	for(i=1;i<=n-1;i++)			//ð������
//	{	for(j=1;j<=n-i;j++)
//		{
//			if(a[j-1]>a[j])
//			{
//				t=a[j];
//				a[j]=a[j-1];
//				a[j-1]=t;
//			}
//		}
//	output(a,10);			//һ�����֮�� ���һ��
//	}
//	printf("The result is:\n");
//	output(a,10);
//	system("pause");
//}

//�� ��һ��3*3�ľ������Խ���Ԫ��֮��  ע����������Խ��� ���Խ���
//void main(){
//	int i,j,sum=0,sum1=0;
//	int a[3][3];
//	printf("������9�����������ά���飺\n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf ("a[%d][%d]:", i, j);
//			scanf("%d",&a[i][j]);     //����˫��forѭ�����������ά����a
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
//	printf("���Խ��ߺ�Ϊ��%d\n",sum);
//	printf("���Խ��ߺ�Ϊ��%d\n",sum1);
//	printf("�ܺ�Ϊ��%d\n",sum+sum1);
//	system("pause");
//}

//�� ĳ�̳����۴�����Ʒ�����ݡ���������x�����費ͬ���ۿۡ�����
//void main(){
//	int count,price,m;
//	float discount,money;
//	printf("�����빺��������\n");
//	scanf("%d",&count);
//	printf("��������Ʒ���ۣ�\n");
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
//	case 0:printf("��������ȷ������");break;
//	case 1:discount=1;break;
//	case 2:discount=0.1;break;
//	case 3:discount=0.2;break;
//	case 4:discount=0.3;break;
//	}
//	printf("�ۿۣ�%f\n",discount);
//	money=price*count*discount;
//	printf("%f",money);
//	system("pause");
//}

//2013
//һ 4
//void main(){
//
//	char c1='B',c2='O',c3='Y',c4='\101',c5='\116';
//	printf("a%cb%c\tc%c\tabc\n",c1,c2,c3);//aBbO    cY    abc
//	printf("\t\b%c%c\n",c4,c5);           //AN
//	system("pause");
//}
//3�ж� char�ͱ��� ch  �Ƿ�Ϊ��д��ĸ
//void main(){
//
//	char ch;
//	ch=getchar();
//	if(ch>='A'&&ch<='Z'){
//		printf("�Ǵ�д��ĸ");
//	}
//	else
//		printf("���Ǵ�д��ĸ");
//	system("pause");
//}

//5
//void main(){
//	int a=3,b=4,c=5,d;
//	d=!(a+b)+c-1&&b+c/2;
//	printf("%d",d);//1       ����ȼ���! �������* / + -�� ��ϵ�����(< >) &&��||   ?:  =  
//	system("pause");
//}

//��
//#define pi 3.14
//void main(){
//	float r=1.5,h=3.0;
//	float c,s,s1,v,v1;
//	c=r*2*pi;
//	s=r*r*pi;
//	s1=4.0*pi*r*r;
//	v=4.0/3.0*pi*r*r*r;
//	v1=s*h;
//	printf("Բ�ܳ�Ϊ��%.2f\n Բ���Ϊ��%.2f\n Բ������Ϊ��%.2f\n Բ�������%.2f\n Բ�������%.2f\n",c,s,s1,v,v1);
//	system("pause");
//}

//�� �ٷ��Ƴɼ�
//void main(){
//	int a;
//	printf("������ɼ�:\n");
//	scanf("%d",&a);
//	if(a>100 || a<0){
//		printf("��������ȷ�ĳɼ�\n");
//	}
//	else if(a>=90){
//		printf("�ɼ�ΪA");
//	}
//	else if(a>=80){
//		printf("�ɼ�ΪB");
//	}
//	else if(a>=70){
//		printf("�ɼ�ΪC");
//	}
//	else if(a>=60){
//		printf("�ɼ�ΪD");
//	}
//	else{
//		printf("�ɼ�ΪE");
//	}
//	system("pause");
//}

//��ѡ�񷨶�10��������С��������
/*����ԭ����ÿһ�δӴ����������Ԫ����ѡ����С������󣩵�һ��Ԫ�أ�
��������е���ʼλ�ã�ֱ��ȫ�������������Ԫ�����ꡣ*/
//void main(){
//	int i,j,min,temp;
//	int a[10];
//	for(i=0;i<10;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("����Ϊ��");
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
//	   temp=a[i];  //��СԪ��a[min]
//       a[i]=a[min];
//	   a[min]=temp;
//	}
//	for(i=0;i<10;i++){
//		printf(" %d ",a[i]);
//	}
//	system("pause");
//}
//�� дһ��������ʹ������һ����ά����(3*3)ת�ã������л���
//main{
//������ά����a[3][3]
//ת�ú�������
//ת�ƺ�������
//}
//ת�ú�������  void switchArray(int array[3][3])
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

//���ϴ�
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
//һ 2
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
//	static int a=0;  //������Ϊһ��ȫ�ֱ��� ���汻�޸ĵ�ֵ
//	a+=3;
//	printf("%4d",a);
//}
//void main(){
//	int i;
//
//	for(i=0;i<3;i++)fun();
//	printf("\n");			//3 6 7  | �������ĳ� int a=0;�����3 3 3
//	system("pause");     
//}
//4



