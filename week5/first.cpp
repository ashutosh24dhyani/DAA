#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
char freq[26];
void countSortMaxFreq(char arr[],int n){
	for(int i=0;i<26;i++)
		freq[i]=0;
	for(int i=0;i<n;i++){
		++freq[(int)(arr[i])-97];
	}
	
}

void solve()
{
        int n;
        cin >> n;
		char arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		
		countSortMaxFreq(arr,n);
		int max= *max_element(freq,freq+26);
		int index = max_element(freq,freq+26)-freq;
	//cout << "Index = " << index << endl;
		char alph = 'a' + (char)(index);
		if(max>1)
			cout << alph << "-" << max << endl;
		else
			cout << "No Duplicate Present" << endl;
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	int i=1;
	while(i<=t)
	{
	   //cout<<"Case #"<<i<<": ";
	    solve();
	    i++;
	}
	return 0;
}
