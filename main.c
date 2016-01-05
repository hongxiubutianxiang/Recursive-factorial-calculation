/*
 * 功能：递归计算阶乘
 * 作者：David.Zhao
 * 时间：2015-12-24
 */

 #include <stdio.h>

 int fn_fact(int n){
   if(0 == n)
    return 1;
  else
    return n*fn_fact(n-1);
 }

 int main(){
   int n;
   printf("请输入要计算阶乘的整数:" );
   scanf("%d",&n );

   printf("%d!=%d\n",n,fn_fact(n) );
   getch();
   return 0;
 }
