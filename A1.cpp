#include<bits/stdc++.h>
using namespace std;
//function that will find whether its possible to find movies.
bool Movie_find(int travel_length,vector<int> &movie_length)
{
	int max_time = *max_element(movie_length.begin(),movie_length.end());
	vector<int> hash_movie(max_time+1,0);
	int n = movie_length.size();
	for(int i=0;i<n;i++)
	{
		hash_movie[movie_length[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		int value = travel_length- movie_length[i];
		if(value==movie_length[i])
		{
			if(hash_movie[movie_length[i]]>1)
				return true;
		}
		else
		{	
			if(value>=0 && hash_movie[value]>0)
			{
				return true;
			}

		}
		
		
	}
	return false;
}

int main()
{
	//Declaring the variables
	int travel_length,n;
	//Getting the input
	cout<<"Enter the Travel length and Number of Movies"<<endl;
	cin>>travel_length>>n;
	vector<int> movie_length(n);
	cout<<"Enter the elemnets"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>movie_length[i];
	}
	cout<<Movie_find(travel_length,movie_length)<<endl;

}