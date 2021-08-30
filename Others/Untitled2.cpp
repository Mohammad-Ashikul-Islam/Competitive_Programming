#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *ara,n;
	cout << "How Many? ";
	cin >> n;
	ara = new (nothrow) int [n];
	cout << "\nEnter The Numbers: \n";
	for(int i=0; i<n; i++) cin >> ara[i];
	cout << "\nSee Your Number: \n";
	for(int i=0; i<n; i++)
	cout << ara[i] << " ";
	delete [] ara;
	return 0;
}
