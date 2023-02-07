#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    int eggDrop(int limit, vector < int > patient) 
    {

   		sort(patient.begin() , patient.end());
   		int n = patient.size();
   		 int ans = 0;
   		for(int i = 0; i < n; i++)
   		{
   			int sum = patient[i];
   			int cnt = 0;
   			cout << "a";
   			while(sum <= limit and cnt < 1)
   			{
   				cnt++;
   				i++;
   				sum += patient[i];
   			}
   				i--;
   			ans++;
   		}
   		return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        
        cin>>n;
        int k;
        cin >> k;
        vector < int > patient(k);
        for(int i = 0; i < k; i++)
        	cin >> patient[i];
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, patient)<<endl;
    }
    return 0;
}
  // } Driver Code Ends