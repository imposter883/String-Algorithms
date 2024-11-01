/* This Algorithm is used for string matching,
The time complexity of this algorithm is O(n^2).*/

#include<bits/stdc++.h>
using namespace std;

int kmp(string str1, string str2){
	int n=str1.length(),m=str2.length();

	for(int i=0; i<n-m+1; i++){
		int j=0;

		while(j<m && str1[i+j]==str2[j]){
			j++;
		}

		if(j==m){
			return i;
		}
	}
	return -1;
}
int main(){
	string str1,str2;
	cin>>str1>>str2;

	int index = kmp(str1,str2);

	if(index==-1){
		cout<<"Not Found"<<endl;
	}else{
		cout<<"Found at"<<" "<<index<<endl;
	}

	return 0;
}
