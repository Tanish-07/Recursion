//This is the program for the infinite recursion

#include<bits/stdc++.h>
using namespace std;
int cnt=1;
void fn()
{
	cout<<cnt;
	fn();
}
int main()
{
	fn();
}
