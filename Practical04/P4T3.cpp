#include<iostream>
using namespace std;
namespace intsum
{
int add(int a, int b)
{
return a+b;
}}
 namespace floatsum
{
float add (float a, float b)
{
return a+b;
}
}
int main()
{
cout<<" integer sum is "<< intsum::add(5,6)<<endl;
cout<<"floating sum is "<< floatsum::add (1.2,3.2)<<endl;
return 0;
}