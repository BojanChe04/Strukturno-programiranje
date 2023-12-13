#include <iostream>
#include <iomanip>

using namespace std;

int najgolem(int a[][100], int n, int m)
{
    int p=INT_MIN;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (a[i][j]>p)
            {
                p=a[i][j];
            }
        }
    } 
    return p;
}

int najmal(int a[][100], int n, int m )
{
    int p=INT_MAX;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (a[i][j]<p)
            {
                p=a[i][j];
            }
        }
    } 
    return p;
}


int main ()
{
    //Transponirana matrica
    // int a[100][100];
    // int b[100][100];
    // int n,m;
    // cout<< "Kolku redici ke vneses? ";
    // cin>>n;
    // cout<<" Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // //-------------------------------------------------
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         b[j][i]=a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<m;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<<setw(5)<<b[i][j];
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Najgolem elemnt vo sekoja redica
    // int a[100][100];
    // int b[100][100];
    // int n,m;
    // cout<< "Kolku redici ke vneses? ";
    // cin>>n;
    // cout<<" Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // //-------------------------------------------------
    // cout<<endl;
    // int p=INT_MIN;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         if (a[i][j]>p)
    //         {
    //             p=a[i][j];
    //         }
    //     }
    //     cout<< "Vo "<<i<<"ta redica najgolem e: "<<p<<endl;
    // }
    // return 0;

    //Najgolemiot i najmaliot da si gi smenat mestata
    // int a[100][100];
    // int b[100][100];
    // int n,m;
    // cout<< "Kolku redici ke vneses? ";
    // cin>>n;
    // cout<<" Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // //-------------------------------------------------
    // cout<<endl;
    // int p=najgolem(a,n,m);
    // int q=najmal(a,n,m);
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         if (a[i][j]==p)
    //         {
    //             cout<<setw(5)<<q;
    //         }
    //         else if (a[i][j]==q)
    //         {
    //             cout<<setw(5)<<p;
    //         }
    //         else
    //         {
    //             cout<<setw(5)<<a[i][j];
    //         }
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Ogledalo vo horizontala i vertikala
    //     int a[100][100];
    // int b[100][100];
    // int n,m;
    // cout<< "Kolku redici ke vneses? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //-------------------------------------------------
    // for (int i=n-1;i>n/2;i--)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // for (int i=n/2;i>=0;i--)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //****************************************************
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=m-1;j>=0;j--)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Siftiranje na matrica
    // int k;
    // int a[100][100];
    // int b[100];
    // int c[100];
    // int n,m;
    // int br=0;
    // cout<< "Kolku redici ke vneses? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<< "Za kolku ke pomestuvas? ";
    // cin>>k;
    // //-------------------------------------------------
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         b[br++]=a[i][j];
    //     }
    // }
    // for (int i=0;i<br;i++)
    // {
    //     c[(i+k)%br]=b[i];
    // }
    // int p=0;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         a[i][j]=c[p++];
    //     }
    // }
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // return 0;


    //Na parnite da se smenat so zbirot od nivnite indeksi
    //     int k;
    // int a[100][100];
    // int b[100];
    // int c[100];
    // int n;
    // int br=0;
    // cout<< "Kolku ke vneses? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //-------------------------------------------------
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (a[i][j]%2==0)
    //         {
    //             a[i][j]=i+j;
    //         }
    //     }
    // }
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Da e i vo pod glavna i pod sporedna isto vremeno i da se zameni so apsolutna vrednost
    // int k;
    // int a[100][100];
    // int b[100];
    // int c[100];
    // int n;
    // int br=0;
    // cout<< "Kolku ke vneses? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //-------------------------------------------------
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if ((i>j) && (i+j>n-1))
    //         {
    //             a[i][j]=a[i][j]*(-1);
    //         }
    //     }
    // }
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Magicen kvadrat
    // int a[100][100];
    // int b[100];
    // int c[100];
    // int n;
    // int br=0;
    // cout<< "Kolku ke vneses? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //-------------------------------------------------
    // int sum;
    // int zname=1;
    // int suma=0;
    // int q=0;
    // for (int j=0;j<n;j++)
    // {
    //     suma=suma+a[q][j];
    // }
    // for (int i=0;i<n;i++)
    // {
    //     sum=0;
    //     for (int j=0;j<n;j++)
    //     {
    //         sum=sum+a[i][j];
    //     }
    //     if (sum!=suma)
    //     {
    //         zname=0;
    //     }
    // }
    // int znamence=1;
    // if (zname)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         sum=0;
    //         for (int i=0;i<n;i++)
    //         {
    //             sum=sum+a[i][j];
    //         }
    //         if (sum!=suma)
    //         {
    //             znamence=0;
    //         }
    //     }
    //     if (znamence)
    //     {
    //         cout<< "TRUE"<<endl;
    //         cout<<endl;
    //         for (int i=0;i<n;i++)
    //         {
    //             for (int j=0;j<n;j++)
    //             {
    //                 if ((i==j) || (i+j==n-1))
    //                 {
    //                     cout<<setw(5)<<suma;
    //                 }
    //                 else
    //                 {
    //                     cout<<setw(5)<<a[i][j];
    //                 }
    //             }
    //             cout<<endl;
    //         }
    //     }
    // }
    // else
    // {
    //     cout<< "FALSE" <<endl;
    // }
    // return 0;

    //Najgolemiot zbir na kolona i elementite na taa kolona da se zamenat so toj zbir
    // int a[100][100];
    // int n;
    // int br=0;
    // cout<< "Kolku ke vneses? ";
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //-------------------------------------------------
    // int sum;
    // int p=INT_MIN;
    // int q;
    // for (int j=0;j<n;j++)
    // {
    //     sum=0;
    //     for (int i=0;i<n;i++)
    //     {
    //         sum=sum+a[i][j];
    //     }
    //     if (sum>p)
    //     {
    //         p=sum;
    //         q=j;
    //     }
    // }
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (j==q)
    //         {
    //             cout<<setw(5)<<p;
    //         }
    //         else
    //         {
    //             cout<<setw(5)<<a[i][j];
    //         }
    //     }
    //     cout<<endl;
    // }
    // return 0;


    //NAJINTERESNA ZADACA 
    // double a[100][100];
    // int n;
    // int m;
    // cout<< "Kolku ke vneses reda? ";
    // cin>>n;
    // cout<< "Kolku ke vneses koloni? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //-------------------------------------------------
    // double p;
    // double q;
    // int br=0;
    // int z;
    // double b[100];
    // for (int j=0;j<m;j++)
    // {
    //     p=INT_MIN;
    //     q=INT_MAX;
    //     for (int i=0;i<n;i++)
    //     {
    //         if (a[i][j]>p)
    //         {
    //             p=a[i][j];
    //         }
    //         if (a[i][j]<q)
    //         {
    //             q=a[i][j];
    //         }
    //     }
    //     for (int z=0;z<n;z++)
    //     {
    //         b[br++]=(a[z][j]-q)/(p-q);
    //     }
    // }
    // int t=0;
    // for (int j=0;j<n;j++)
    // {
    //     for (int i=0;i<m;i++)
    //     {
    //         a[i][j]=b[t++];
    //     }
    // }
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<fixed<<setprecision(2)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Zadaca so CESNIOT KRST
    // int a[100][100];
    // int b[100];
    // int c[100];
    // int n;
    // int br=0;
    // cout<< "Kolku ke vneses redovi? ";
    // cin>>n;
    // int m;
    // cout<< "Kolku ke vneses koloni? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<< "a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<setw(5)<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // //-------------------------------------------------
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         if (a[i][j]==1)
    //         {
    //             if ((a[i][j]==a[i][j+1]) && (a[i][j]==a[i][j-1]) && (a[i][j]==a[i-1][j]) && (a[i][j]==a[i+1][j]) )
    //             {
    //                 br++;
    //                 i+=1;
    //                 j+=1;
    //             }
    //         }
    //     }
    // }
    // cout<<br<<endl;
    // return 0;

    
}