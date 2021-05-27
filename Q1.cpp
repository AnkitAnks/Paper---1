#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size"<<"\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array Elements"<<"\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];
     if (n < 2)
        cout<<" Invalid Input ";

    int f,s;
    f=INT_MAX;
    s=INT_MAX;


    for (int i = 0; i < n ; i ++)
    {
        if (arr[i] < f)
        {
            s = f;
            f = arr[i];
        }

        else if (arr[i]<s&&arr[i]!=f)
            s = arr[i];
    }
    if (s== INT_MAX)
        cout << "No second minimum"<<"\n";
    else
        cout << "The smallest element is " << f << " and second "
            "Smallest element is " << s << endl;

}
