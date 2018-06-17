//单位转换程序，输入值和原单位，新单位，返回新单位下的值。
//重量单位：Kg, g, lb, gr,......
//压力单位：Pa, MPa, psi,......
//长度单位：m, km, ft, in,......
//其它单位：md, cp,......
//还有很多单位转换，有些单位是其它单位组合出来的
#include<iostream>
 using namespace std;
 const double inch=0.39;
 const double foot=0.03;
 int main()
 {
   int cm;
  double myinch,myfoot;
   cout<<"输入你的身高（CM）";
  cin>>cm;
  myinch=inch*cm;
  myfoot=foot*cm;
  cout<<"你的身高是"<<cm<<"cm "<<"相当于 "<<myinch<<"相当于"<<myfoot<<endl;
  return 0;
 }
