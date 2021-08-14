#include<bits/stdc++.h>
using namespace std;

int main() {
	int T,n;
	string s,o;
	cin>>T;
	while (T--)
	{
	    cin>>n;
	    cin>>o;
	    int score=0;
	    for (int i=0;i<n;i++)
	    {
	        cin>>s;
	        if (s=="CONTEST_WON")
	        {
	            int rank;
	            cin>>rank;
	            if (rank<20)
	                score+=(320-rank);
	            else
	                score+=300;
	        }
	        else if (s=="TOP_CONTRIBUTOR")
	        {
	            score+=300;
	        }
	        else if (s=="BUG_FOUND")
	        {
	            int sev;
	            cin>>sev;
	            score+=sev;
	        }
	        else if (s=="CONTEST_HOSTED")
	        {
	            score+=50;
	        }
	    }
	    if (o=="INDIAN")
	        cout<<(score/200)<<endl;
	    else
	        cout<<(score/400)<<endl;
	}
	return 0;
}