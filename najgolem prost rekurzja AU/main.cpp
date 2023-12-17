//rekurzija da se najt razlikata od najvisokiot prost broj pogolem od nego
//so rekurzija go barame prostiot
#include <iostream>
using namespace std;
bool prost(int n, int i=2)
{
    if(n<=1)
    {
        return false;
    }
    else if(i*i>n)
    {
        return true;
    }
    else if(n%i==0)
    {
        return false;
    }
    else
    {
        return prost(n, i +1);
    }
}
int najgolem(int n)
{
    if(prost(n+1))
    {
        return n+1;
    }
    else
    {
        return najgolem(n+1);
    }
}
int main() {
    int n;
    cin>>n;
    int broj;
    broj=najgolem(n);
    cout<<broj<<" - "<<n<<" = "<<broj-n<<endl;
    return 0;
}
