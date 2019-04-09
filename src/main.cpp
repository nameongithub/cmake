#include<iostream>
using namespace std;
#include"one.h"
#include"two.h"
#include"sub.h"
#include"multi.h"
#include"div.h"
#include"mod.h"
int main(){
	cout<<"hello"<<endl;
	cout<<one()<<endl;
	cout<<two()<<endl;
	cout<<sub(34,2)<<endl;
	cout<<multi(34,3)<<endl;
	cout<<div(32,3)<<endl;
	cout<<mod(64,32)<<endl;
}
