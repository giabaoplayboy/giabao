#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float tv, ls, kv;
	int nam;
	nam=0;
	cout<<"nhap vao so tien von, lai suat, ki vong:";
	cin>>tv>>ls>>kv;
	while(tv<0||ls<0||kv<0)
	{
		cout<<"ban da nhap sai"<<endl;
	}
	while(tv<kv)
	{
		tv+=(tv*ls)/100.0;
		nam++;
	}
	cout<<"sau "<<nam<<" nam ban nhan duoc so tien ki vong la: "<<kv;
	return 0;
}
