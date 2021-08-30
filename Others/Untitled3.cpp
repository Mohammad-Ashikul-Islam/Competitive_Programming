#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *p,numbers[5];
	p = numbers;
	*p = 10;
	p++;          *p = 20;
	p = &numbers[2];       *p = 30;
	p = numbers + 3;     *p = 40;
	p = numbers;    *(p+4) = 50;
	for(int i=0; i<5; i++)
	cout << p[i] << endl;  
	return 0;
}
