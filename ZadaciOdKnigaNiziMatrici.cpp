#include <iostream>
#include <limits>

using namespace std;

bool rastecki(int nova[], int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(nova[i]>nova[j])
            {
                return false;
            }
        }
    }
    return true;
}

void nizamin(int niza[], int n)//n = size 
{
    int j;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (niza[j]<niza[i])
            {
                swap(niza[j],niza[i]);
            }
        }
    }
}

void nizamax(int niza[], int n)//n = size 
{
    int j;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (niza[j]>niza[i])
            {
                swap(niza[j],niza[i]);
            }
        }
    }
}

int max(int a[], int n)
{
    int maks=numeric_limits<int>::min();
    for (int i=0;i<n;i++)
    {
        if (a[i]>maks)
        {
            maks=a[i];
        }
    }
    return maks;
}

int maxindex(int a[], int n)
{
    int maks=numeric_limits<int>::min();
    int maksindeks;
    for (int i=0;i<n;i++)
    {
        if (a[i]>maks)
        {
            maks=a[i];
            maksindeks=i;
        }
    }
    return maksindeks;
}

void nizamaks(int niza[], int n)//n = size 
{
    int j;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (niza[j]>niza[i])
            {
                swap(niza[j],niza[i]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<"niza["<<i<<"] = "<<niza[i]<<endl;
    }
}

void ogledala(int a[], int n)
{
    int br=0;
    int b[100];
    if (n%2==0)
    {
        for (int i=0;i<n;i++)
        {
            if (a[i]==a[n-(i+1)])
            {
                 b[br++]=a[i];
            }
        }
        cout<<double((br*100.)/n)<<"% (";
        for (int i=0;i<br;i++)
        {
            cout<<b[i]<<", ";
        }
        cout<< "se ogledalni i ednakvi -> "<<br<<endl;
    }
    else if (n%2==1)
    {
        for (int i=0;i<n;i++)
        {
            if (a[i]==a[n-(i+1)])
            {
                 b[br++]=a[i];
            }
        }
        cout<<double((br*100.)/n)<<"% (";
        for (int i=0;i<br;i++)
        {
            cout<<b[i]<<", ";
        }
        cout<< "se ogledalni i ednakvi -> "<<br<<endl;
    }
}


int main()
{
    //Voved vo NIZI
    // int a[50];
    // int n;
    // int i;
    // cout<< "Kolku elementi ke vnesuvas vo nizata? ";
    // cin>>n;
    // for (i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // cout<<endl;
    // cout<< "Novata dobiena niza e: "<<endl;
    // for (i=0;i<n;i++)
    // {
    //     cout<<i<<" "<<a[i]<<endl;
    // }
    // int sum=0;
    // for (i=0;i<n;i++)
    // {
    //     sum=sum+a[i];
    // }
    // double prosek=sum/(n*1.0);
    // int j=0;
    // cout<< "Novata dobiena niza e: "<<endl;
    // for (i=0;i<n;i++)
    // {
    //     if(a[i]>=prosek)
    //     {
    //         cout<<j<<" "<<a[i]<<endl;
    //         j++;
    //     }
    // }
    // return 0;

    //Interesna
    // int niza[100];
    // int rez[100];
    // int n;
    // int br=0;
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<"niza["<<i<<"] = ";
    //     cin>>niza[i];
    // }
    // for(int i=0; i<n; i++)
    // {
    //     rez[i]=niza[i];
    // }
    // cout<<endl;
    // for (int i = 0; i < n; ++i) {
    //     if(rez[i]%2==0)
    //     {
    //         cout<<"rez["<<br<<"] = ";
    //         cout<<rez[i]<<endl;
    //         br++;
    //     }
    // }
    // for (int i = 0; i < n; ++i) 
    // {
    //     if(rez[i]%2!=0)
    //     {
    //         cout<<"rez["<<br<<"] = ";
    //         cout<<rez[i]<<endl;
    //         br++;
    //     }
    // }
    // return 0;
    
    //Vnesi broj i indeks i na toa mesto da se zameni vo novata niza
    // int niza[100];
    // int n;
    // int broj,indeks;
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<"niza["<<i<<"] = ";
    //     cin>>niza[i];
    // }
    // cout<<endl;
    // cout<< "Vnesi broj: ";
    // cin>>broj;
    // cout<< "Vnesi indeks: ";
    // cin>>indeks;
    // for(int i=0; i<n; i++)
    // {
    //     if (i==indeks)
    //     {
    //         cout<<"niza["<<indeks<<"] = "<<broj<<endl;
    //     }
    //     else
    //     {
    //         cout<<"niza["<<i<<"] = "<<niza[i]<<endl;
    //     }
    // }
    // return 0;

    // Zadaca vnesuvame indeks i broj i se dodava na nizata na toa mesto i da se kreira nova niza
    // int niza[100];
    // int n;
    // int rez[100];
    // bool flag=false;
    // int broj,indeks;
    // cout<< "Kolku elementi ke vnesuvas? ";
    // cin>>n;
    // cout<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<"niza["<<i<<"] = ";
    //     cin>>niza[i];
    // }
    // cout<<endl;
    // cout<< "Vnesi broj: ";
    // cin>>broj;
    // cout<< "Vnesi indeks: ";
    // cin>>indeks;
    // cout<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     rez[i]=niza[i];
    // }
    // //-----------------------------------------------------------
    // for(int i=0; i<n; i++)
    // {
    //     if (i==indeks)
    //     {
    //         cout<<"rez["<<indeks<<"] = "<<broj<<endl; 
    //         cout<<"rez["<<i+1<<"] = "<<rez[i]<<endl;
    //         flag=true;
    //     }
    //     else
    //     {
    //         if (flag)
    //         {
    //             cout<<"rez["<<i+1<<"] = "<<rez[i]<<endl;
    //         }
    //         else
    //         {
    //             cout<<"rez["<<i<<"] = "<<rez[i]<<endl;
    //         }
    //     }    
    // }
    // return 0;

    // Zadaca za kolokvium
    // int niza[100];
    // int rez[100];
    // int n;
    // int br=0;
    // cout<< "Kolku elementi ke vnesete? ";
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<"niza["<<i<<"] = ";
    //     cin>>niza[i];
    // }
    // for(int i=0; i<n; i++)
    // {
    //     rez[i]=niza[i];
    // }
    // cout<<endl;
    // for (int i = 0; i < n; ++i) {
    //     if(rez[i]%2==0)
    //     {
    //         cout<<"rez["<<br<<"] = ";
    //         cout<<rez[i]<<endl;
    //         br++;
    //     }
    // }
    // for (int i = 0; i < n; ++i) 
    // {
    //     if(rez[i]%2!=0)
    //     {
    //         cout<<"rez["<<br<<"] = ";
    //         cout<<rez[i]<<endl;
    //         br++;
    //     }
    // }
    // return 0;

    // int niza[100];
    // int j;
    // int n;
    // cout<< "Kolku elementi ke vneses? ";
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<"niza["<<i<<"] = ";
    //     cin>>niza[i];
    // }
    // cout<<endl;
    // nizamin(niza,n);
    // cout<<endl;
    // nizamax(niza,n);
    // return 0;

    // Zadaca za kolokvium so Bojana
    // int niza[100];
    // int rez[100];
    // int paren[100];
    // int nova[100];
    // int neparen[100];
    // int n;
    // int br=0,br1=0;
    // cout<< "Kolku elementi ke vnesete? ";
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<"niza["<<i<<"] = ";
    //     cin>>niza[i];
    // }
    // for(int i=0; i<n; i++)
    // {
    //     rez[i]=niza[i];
    // }
    // cout<<endl;
    // for (int i = 0; i < n; ++i) {
    //     if(rez[i]%2==0)
    //     {
    //         paren[br]=rez[i];
    //         br++;
    //     }
    // }
    // for (int i = 0; i < n; ++i) 
    // {
    //     if(rez[i]%2!=0)
    //     {
    //         neparen[br1]=rez[i];
    //         br1++;
    //     }
    // }
    // nizamax(paren,br);
    // nizamax(neparen,br1);
    // for (int i=0;i<br;i++)
    // {
    //     nova[i]=paren[i];
    // }
    // for (int i=br;i<n;i++)
    // {
    //     nova[i]=neparen[i-br];
    // }
    // for (int i=0;i<n;i++)
    // {
    //     cout<<"niza["<<i<<"] = "<<nova[i]<<endl;
    // }
    // return 0;

    //145
    // int niza[100];
    // int nova[100];
    // int n,br=0;
    // bool flag;
    // cout<< "Kolku elementi ke vnesuvas? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<"niza["<<i<<"] = ";
    //     cin>>niza[i];
    // }
    // cout<<endl;
    // //--------------------------------------------------------------------
    // for (int i=0;i<n;i++)
    // {
    //     flag=true;
    //     for (int j=i+1;j<n;j++)
    //     {
    //         if (niza[i]==niza[j])
    //         {
    //             flag=false;
    //             break;
    //         }
    //     }
    //     if (flag)
    //     {
    //         nova[br++]=niza[i];
    //     }
    // }
    // for (int i=0;i<br;i++)
    // {
    //     cout<<"nova["<<i<<"] = "<<nova[i]<<endl;
    // }
    // return 0;

    //Da sporedi dve nizi dali se ednakvi
    // int a[100];
    // int b[100];
    // bool flag=true;
    // int n1,n2;
    // cout<< "Kolku elementi ke vnesuvas vo prvata niza? ";
    // cin>>n1;
    // for (int i=0;i<n1;i++)
    // {
    //     cout<< "a["<<i<<"] = ";
    //     cin>>a[i];
    // }
    // cout<< "Kolku elementi ke vnesuvas vo vtorata niza? ";
    // cin>>n2;
    // for (int i=0;i<n2;i++)
    // {
    //     cout<< "b["<<i<<"] = ";
    //     cin>>b[i];
    // }
    // if (n1!=n2)
    // {
    //     cout<< "Nizite ne se ednakvi, bidejki prvo se so razlicna golemina."<<endl;
    //     return 0;
    // }
    // else
    // {
    //     for (int i=0;i<n1;i++)
    //     {
    //         if (a[i]!=b[i])
    //         {
    //             flag=false;
    //             break;
    //         }
    //     }
    // }
    // if (flag)
    // {
    //     cout<< "Nizite se ednakvi. "<<endl;
    // }
    // else
    // {
    //     cout<< "Nizite se razlicni. "<<endl;
    // }
    // return 0;

    //Да се напише програма која ќе провери дали дадена низа од n елементи која се чита од стандарден влез е строго растечка, 
    //строго опаѓачка или ниту строго растечка ниту строго опаѓачка. Резултатот да се испечати на екран.
    // int a[100];
    // int b[100];
    // int pogolemi=0;
    // int pomali=0;
    // int n;
    // cout<< "Kolku elementi ke vnesuvas vo prvata niza? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     cout<< "a["<<i<<"] = ";
    //     cin>>a[i];
    // }
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=i+1;j<n;j++)
    //     {
    //         if (a[j]>a[i])
    //         {
    //             pogolemi++;
    //         }
    //         else
    //         {
    //             pomali++;
    //         }
    //     }
    // }
    // if (pogolemi==n)
    // {
    //     cout<< "Nizata e strgo rastecka. "<<endl;
    // }
    // else if (pomali==n)
    // {
    //     cout<< "Nizata e strogo opagjacka. "<<endl;
    // }
    // else
    // {
    //     cout<< "Nizata ne e nitu strogo rastecka nitu strogo opagjacka. "<<endl;
    // }
    // return 0;

    // Eden sat resavajne od labaratoriska
    //Ogledala 
    // int n,brojac=1;
    // int a[100];
    // int n1;
    // cout<< "Kolku nizi ke vnesuvate? ";
    // cin>>n;
    // for (int i=1;i<n;i++)
    // {
    //     cout<< "Kolku elementi ke ima vo "<<brojac<<" niza? ";
    //     cin>>n1;
    //     for (int j=0;j<n1;j++)
    //     {
    //          cout<< "a["<<j<<"] = ";
    //          cin>>a[j];
    //     }
    //     cout<<endl;
    //     ogledala(a,n1);
    //     brojac++;
    // }

    //Maksimalnata vrednost od podnizata i procentot na iskroisteni elementi 
    // int a[100];
    // int b[100];
    // int c[100];
    // int n;
    // int br=0;
    // int br2=0;
    // int br1;
    // int sum;
    // cout<< "Kolku elementi ke vnesuvas vo prvata niza? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     cout<< "a["<<i<<"] = ";
    //     cin>>a[i];
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     sum=0;
    //     br1=0;
    //     for (int j=i;j<n;j++)
    //     {
    //         sum=sum+a[j];
    //         br1++;
    //     }
    //     b[br++]=sum;
    //     c[br2++]=br1;

    // }
    // int maksi=maxindex(b,br);
    // int maksimum=max(b,br);
    // double procent=((c[maksi]*100.)/n);
    // int temp=n-c[maksi];
    // cout<< "Maksimalnata suma na podnizata e: "<<maksimum<<endl;
    // cout<< "A procentot na elementite iznesuva: "<<procent<<"% zosto iskoristeni se: "<<c[maksi]<<" elementi "<<endl;
    // cout<< "Iskoristeni se slednive elementi: ";
    // for (int i=temp;i<n;i++)
    // {
    //     cout<<a[i]<<", ";
    // }
    // cout<< ". "<<endl;
    // return 0;

    //Pecatenje na site podnizi na dadena niza
    // int a[100];
    // int n;
    // cout<< "Kolku elemnti ke ima vo nizata? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     cout<< "a["<<i<<"] = ";
    //     cin>>a[i];
    // }
    // cout<<endl;
    // for (int i=0; i <n; i++)
    // {
    //     for (int j=i; j<n; j++)
    //     {
    //         for (int k=i; k<=j; k++)
    //         {
    //             cout << a[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    // return 0;

    //upgrade na prethodna
    // int a[100];
    // int n;
    // int b[100];
    // int br;
    // cout<< "Kolku elemnti ke ima vo nizata? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     cout<< "a["<<i<<"] = ";
    //     cin>>a[i];
    // }
    // cout<<endl;
    // for (int i=0; i <n; i++)
    // {
    //     for (int j=i; j<n; j++)
    //     {
    //         br=0;
    //         for (int k=i; k<=j; k++)
    //         {
    //             b[br++]=a[k];
    //         }
    //         for (int i=0;i<br;i++)
    //         {
    //             cout<< "b["<<i<<"] = "<<b[i]<<endl;
    //         }
    //         cout<<endl;
    //     }
    // }
    // return 0;

    // Zadaca od kniga 15
    // int a[100];
    // int c[100];
    // int n;
    // int counter=INT_MIN;
    // int b[100];
    // int br;
    // cout<< "Kolku elemnti ke ima vo nizata? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     cout<< "a["<<i<<"] = ";
    //     cin>>a[i];
    // }
    // cout<<endl;
    // for (int i=0; i <n; i++)
    // {
    //     for (int j=i; j<n; j++)
    //     {
    //         br=0;
    //         for (int k=i; k<=j; k++)
    //         {
    //             b[br++]=a[k];
    //         }
    //         if (rastecki(b,br))
    //         {
    //             if (br>counter)
    //             {
    //                 counter=br;
    //                 for (int i=0;i<counter;i++)
    //                 {
    //                     c[i]=b[i];
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout<< "Najgolemata rastecka podniza e: "<<endl;
    // for (int i=0;i<counter;i++)
    // {
    //     cout<< "c["<<i<<"] = "<<c[i]<<endl;
    // }
    // return 0;

    //Zadaca od labaratoriska vezba 
    // int a[100];
    // int c[100];
    // int n;
    // int counter=INT_MIN;
    // int b[100];
    // int br;
    // int maxsum=INT_MIN;
    // int sum;
    // cout<< "Kolku elemnti ke ima vo nizata? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     cout<< "a["<<i<<"] = ";
    //     cin>>a[i];
    // }
    // cout<<endl;
    // for (int i=0; i <n; i++)
    // {
    //     for (int j=i; j<n; j++)
    //     {
    //         br=0;
    //         sum=0;
    //         for (int k=i; k<=j; k++)
    //         {
    //             b[br++]=a[k];
    //             sum=sum+a[k];
    //         }
    //         if (sum>maxsum)
    //         {
    //             maxsum=sum;
    //             counter=br;
    //             for (int i=0;i<counter;i++)
    //             {
    //                 c[i]=b[i];
    //             }
    //         }
    //     }
    // }
    // cout<< "Najgolemata suma sto se dobiva od podnizata na dadenata niza e: "<<maxsum<<endl;
    // cout<< "Elementite na dobienata suma od podnizata se: "<<endl;
    // for (int i=0;i<counter;i++)
    // {
    //     cout<< "c["<<i<<"] = "<<c[i]<<endl;
    // }
    // cout<< "I procentot od vkupniot broj sto se iskoristeni iznesuva: "<<double((counter*100.)/n)<<"% ."<<endl;
    // return 0;

    //Zadaca od kniga 177
    int a[100];
    int c[100];
    int n;
    int counter;
    int b[100];
    int br;
    bool flag;
    int vrednost;
    int maxsum=INT_MIN;
    int sum;
    cout<< "Kolku elemnti ke ima vo nizata? ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<< "a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<endl;
    cout<< "Vnesi vrednost v(v>0): ";
    cin>>vrednost;
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            br=0;
            sum=0;
            for (int k=i; k<=j; k++)
            {
                b[br++]=a[k];
                sum=sum+a[k];

            }
            if (sum>maxsum && sum<vrednost)
            {
                maxsum=sum;
                counter=br;
                for (int i=0;i<counter;i++)
                {
                    c[i]=b[i];
                }
            }
        }
    }
    cout<< "Najgolemata suma sto se dobiva od podnizata na dadenata niza e: "<<maxsum<<endl;
    cout<< "Elementite na dobienata suma od podnizata se: "<<endl;
    for (int i=0;i<counter;i++)
    {
        cout<< "c["<<i<<"] = "<<c[i]<<endl;
    }
    cout<< "I procentot od vkupniot broj sto se iskoristeni iznesuva: "<<double((counter*100.)/n)<<"% ."<<endl;
    return 0;

    
}