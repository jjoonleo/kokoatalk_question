#include <iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;



bool cmp(const pair<char, int>& a, const pair<char, int>& b)
{
	return a.second < b.second;
}


int main() {
	int n = 0;
	char c = 0;
	char cBig = 0;
	//vector<char>c;
	char m = 'M';
	int distance = 0;
	vector<pair<char, int>> v;

	printf("반복 횟수 입력");
	cin >> n;
	for (int i = 0; i < n; i++) {
		printf("문자 입력:");
		cin >> c;
		if (c >= 97)cBig = c - 32;
		if (m - cBig < 0)v.push_back(make_pair(c, c-m));
		else v.push_back(make_pair(c, m - c));
		
	}
	
	sort(v.begin(), v.end(),cmp);

	
	printf("M과 가장 가까운 문자는 %c입니다.", v[0].first);
	
}
