#include <iostream>
using namespace std;
int NZD(int a,int b)//evklivdov algoritam
{
    int temp;
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int NZS(int a,int b)
{
    return (a*b)/NZD(a,b);
}

int main ()
{
    int a[100];
    int n;
    cout<< "Kolku elementi ke vnesuvas? ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    //---------------------------------
    int nzd=NZD(a[0],a[1]);
    for (int i=0;i<n;i++)
    {
        nzd=NZD(nzd,a[i]);
    }
    int nzs=NZD(a[0],a[1]);
    for (int i=0;i<n;i++)
    {
        nzs=NZS(nzs,a[i]);
    }
    cout<< "NZD e "<<nzd<<endl;
    cout<< "NZS e "<<nzs<<endl;
    return 0;
}