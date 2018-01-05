#include<bits/stdc++.h>
using namespace std;

int uniqe_id(std::vector<int> &ID)
{
	sort(ID.begin(),ID.end());
	int n = ID.size();
	if(ID[0]!=ID[1])
		return ID[0];
	else if(ID[n-1]!=ID[n-2])
		return ID[n-1];
	else
	{
		for(int i=1;i<n-1;i++)
		{
			if(ID[i-1]!=ID[i] && ID[i]!=ID[i+1])
				return ID[i];
		}
	} 
}
int main()
{
	int n;
	cout<<"Enter the size of list of id's"<<endl;
	cin>>n;
	vector<int> ID(n);
	cout<<"Enter the elemnets"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ID[i];
	}
	cout<<uniqe_id(ID)<<endl;
}