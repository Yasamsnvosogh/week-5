#include <iostream>

using namespace std;

 main() {
	float h,k,m,b,n,z,s,p;
	cout<<"please enter a namber for h :";
	cin>>h;
	if(h<6){
		k=h*(0);
		cout<<"k :"<<k;
	}
	else if (h>=6 && h<8){
		m=h*(0.95);
		cout<<"m :"<<m;
	}
	else if (h>=8 && h<10){
		b=h*(0.9);
		cout<<"b :"<<b;
	}
	else if (h>=10 && h<14){
		n=h*(0.85);
		cout<<"n :"<<n;
	}
	else if (h>=14 && h<18){
		z=h*(0.8);
		cout<<"z :"<<z;
	}
	else if (h>=18 && h<25){
		k=h*(0.75);
		cout<<"s :"<<s;
	}
	else if (h>25){
		p=h*(0.65);
		cout<<"p :"<<p;
	}
}