#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 


string JoinString(vector<string>& v, string delemeter)
{
	string ans = "";
	int i=0;
	for(string& s : v)
	{
		ans += s;
		i++;
		if(i<v.size())
			ans += delemeter;
	}
	return ans;
}


string JoinString(string arr[], int length, string delemeter)
{
	string ans = "";
	for(int i=0; i<length; i++)
	{
		ans += arr[i];
		if(i<length-1)
		{
			ans += delemeter;
		}
	}
	return ans;
}


int main()
{
	vector<string> v {"Yousef", "Farida"};
	
	string arr[3] = {"Yousef", "Dida", "Farida"};
	
	cout<<JoinString(v, "-->")<<endl;
	cout<<JoinString(arr, 3, "-->")<<endl;
	
	return 0;
}