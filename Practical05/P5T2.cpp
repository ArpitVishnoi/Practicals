#include<iostream>
using namespace std;
int main(){

int no=45;
long int salary=97000;

float rate=98.34;
double money=46E12;

char c='h';
wchar_t test1=L'D';

bool cond=true;
cout<<"Int:"<<sizeof(int) <<endl;
cout<<"size of no :"<<sizeof(no) <<endl;
cout<<"long Int :"<< sizeof(long int) <<endl;
cout<<"size of salary: "<<sizeof(salary) <<endl;
cout<<"Float: "<< sizeof(float) <<endl; 
cout<<"size of rate :"<<sizeof(rate) <<endl;
cout<<"Double :"<< sizeof(double) <<endl;
cout<<"size of money :"<<sizeof(money) <<endl; 
cout<<"Char : "<< sizeof(char) <<endl;
cout<<"size of c:"<<sizeof(c) <<endl;
cout<<"Wchar :"<< sizeof(wchar_t) <<endl;
cout<<"size of test1:"<<sizeof(test1) <<endl;
cout<<"Booleab: "<< sizeof(bool) <<endl;  
cout<<"size of cond:"<<sizeof(cond) <<endl;
return 0;
}