#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;

    cout<<"Enter -1 to terminate the stream"<<"\n";
    int i=1;
    while(1)
    {
        int x;
         cout<<"Enter the  " <<i<<" element of the stream"<<"\n";
        cin>>x;
        if(x==-1) break;
        v.push_back(x);
        sort(v.begin(),v.end());
        int n=v.size();
        if(n%2==0)
        {
            cout<<"Median after reading " <<i<<" element of the stream: "<<(v[n/2]+v[(n/2)-1])/2<<"\n";
        }
         else
        {
            cout<<"Median after reading " <<i<<"element of the stream: "<<v[n/2]<<"\n";
        }
        i++;
    }
}
