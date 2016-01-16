#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s,z="",kk="";
    long long m[100001],n[100001],k,i,j,br=1;
    cin>>s;
    cin>>k;
    for(i=0; i<k; i++)
    {
        cin>>m[i];
    }
    for(i=0; i<k; i++)
    {
        z=s;
        br=1;
        kk=z.substr(m[i]-1,n[i]-m[i]+1);
        for(j=1; j<kk.size(); j++)
        {
            if(kk[j-1]>kk[j])br++;
        }
        cout<<br<<endl;
        //cout<<kk<<endl;
    }
    return 0;
}
