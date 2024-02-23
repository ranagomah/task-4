#include <iostream>

using namespace std;
int main(){
double x,y;
cin>>x>>y;
double result1 = x/y;
int result2 = x/y;

 double reminder=( result1- result2)*y;
 cout<<reminder;


     return 0;
}