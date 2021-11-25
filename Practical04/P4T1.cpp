#include<iostream>
 namespace intsum
 {
 int add(int a, int b)
 {
 return a+b;
}}
namespace floatsum
 {
float add(float a,float b)
 {
return a+b;
}}
int main()
{
 std::cout<<"integer sum is :"<<intsum::add(5,6)<<std::endl;
 std::cout<<"floating sum is :"<<floatsum::add(5.6,6.4) <<std::endl;
 return 0;
}
