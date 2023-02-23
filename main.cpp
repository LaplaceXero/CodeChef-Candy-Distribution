#include <iostream>
using namespace std;

int main() {
	
	int testCases{};
	int N;  //number of candies
	int M;  //number of friends
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>N >>M;
	    
	    if(((N%M) == 0) & (((N/M)%2) == 0))
	        cout <<"Yes" <<"\n";
	        
	    else
	        cout <<"No" <<"\n";
	}
	return 0;
}
