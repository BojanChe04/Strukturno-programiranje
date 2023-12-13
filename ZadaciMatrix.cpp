#include <iostream>
#include <iomanip>

using namespace std;

int max(int a[][100],int n,int m)
{
    int maks=INT_MIN;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (a[i][j]>maks)
            {
                maks=a[i][j];
            }
        }
    }
    return maks;
}

int min(int a[][100],int n,int m)
{
    int mini=INT_MAX;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (a[i][j]<mini)
            {
                mini=a[i][j];
            }
        }
    }
    return mini;
}

int main ()
{
    //Да се напише програма која за матрица внесена од тастатура ќе ја пресмета разликата на 
    //збирот на елементите на непарните колони и збирот на елементите на парните редици. Матрицата не мора да биде квадратна.
    // int a[100][100];
    // int n,m;
    // int sum1=0;
    // int sum2=0;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         if ((j+1)%2)
    //         {
    //             sum1=sum1+a[i][j];
    //         }
    //         if (!((i+1)%2))
    //         {
    //             sum2=sum2+a[i][j];
    //         }
    //     }
    // }
    // cout<< "Sumata na elementite na neparnite koloni e: "<<sum1<<endl;
    // cout<< "Sumata na elementite na parnite redici e: "<<sum2<<endl;
    // cout<< "Razlikata na sumata na neparnite koloni i parnite redici e: "<<sum1-sum2<<endl;
    // return 0;

    //Osnovata za matrici
    // int a[100][100];
    // int n,m;
    // int sum1=0;
    // int sum2=0;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<< "Elementi na glavna dijagonala: "<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (i==j)
    //         {
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<< "Elementi NAD glavna dijagonala: "<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (i<j)
    //         {
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<< "Elementi POD glavna dijagonala: ";
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (i>j)
    //         {
    //             cout<<a[i][j]<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<< "Elementi na sporedna dijagonala: "<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (i+j==n-1)
    //         {
    //             cout<<a[i][j]<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<< "Elementi NAD sporedna dijagonala: "<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (i+j<n-1)
    //         {
    //             cout<<a[i][j]<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<< "Elementi POD sporedna dijagonala: ";
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (i+j>n-1)
    //         {
    //             cout<<a[i][j]<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Да се напише програма која за матрица внесена од тастатура ќе ги замени елементите од главната дијагонала со разликата 
    //од максималниот и минималниот елемент во матрицата. Резултантната матрица да се испечати на екран.
    // int a[100][100];
    // int n,m;
    // int sum1=0;
    // int sum2=0;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // int maks=max(a,n,m);
    // int mini=min(a,n,m);
    // int razlika=maks-mini;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         if (i==j)
    //         {
    //             cout<<razlika<<setw(6);
    //         }
    //         else{
    //             cout<<a[i][j]<<setw(6);
    //         } 
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //calculate the sum of elements in a specific row of a square matrix.  in c++
    // int a[100][100];
    // int n,m;
    // int sum1=0;
    // bool flag;
    // int sum=0;
    // int red;
    // int sum2=0;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // cout<< "Od koj red od matricata sakas suma? ";
    // cin>>red;
    //     for (int j = 0; j < m; j++) {
    //     sum = sum + a[red-1][j]; // Sum the elements in the row
    // }
    // cout<<endl;
    // cout<< "Sumata od redot : "<<red<<" e "<<sum<<endl;
    // return 0;

    //kolku elementi se pozitivni na glavnata matrica
    // int a[100][100];
    // int n,m;
    // bool flag;
    // int br=0;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         if (i==j)
    //         {
    //             if (a[i][j]>0)
    //             {
    //                 br++;
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<< "Na glavnata dijagonala pozitivni se: "<<br<<" elementi. "<<endl;
    // return 0;   

    //Koj e najgolem element vo redot
    // int a[100][100];
    // int n,m;
    // bool flag;
    // int maks;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     maks=INT_MIN;
    //     for (int j=0;j<m;j++)
    //     {
    //         if (a[i][j]>maks)
    //         {
    //             maks=a[i][j];
    //         }
    //     }
    //     cout<< "Vo red "<<i<<" najgolem e "<<maks<<endl;
    // }
    // return 0;  

    //broj na parni elementi vo kolona
    // int a[100][100];
    // int n,m;
    // int br=0;
    // int maks;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // for (int j=0;j<m;j++)
    // {
    //     br=0;
    //     for (int i=0;i<n;i++)
    //     {
    //         if (!(a[i][j]%2))
    //         {
    //             br++;
    //         }
    //     }
    //     cout<< "Vo kolona "<<j<<" brojot na parni elementi e "<<br<<endl;
    // }
    // return 0;

    //zbir na parni elementi vo sekoj red
    // int a[100][100];
    // int n,m;
    // int sum;
    // int maks;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     sum=0;
    //     for (int j=0;j<m;j++)
    //     {
    //         if (!(a[i][j]%2))
    //         {
    //             sum=sum+a[i][j];
    //         }
    //     }
    //     cout<< "Vo red "<<i<<" bzbirot na parni elementi e "<<sum<<endl;
    // }
    // return 0;

    //zbir na pozitivni elementi od glavna dijagonala
    // int a[100][100];
    // int n,m;
    // int sum=0;
    // int maks;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         if (i==j)
    //         {
    //             if (a[i][j]>0)
    //             {
    //                 sum=sum+a[i][j];
    //             }
    //         }
    //     }
    // }
    // cout<< "Zbirot na pozitivnite elementi na glavnata dijagonala e "<<sum<<endl;
    // return 0;

    //Dali nad glavnata dijagonala e simetricna so podglavnata dijagonala
    // int a[100][100];
    // int n,m;
    // int maks;
    // int simetricna=1;
    // cout<< "Vnesi kvadratna matrica ! "<<endl;
    // cout<< "Kolku redici ke vnesuvas? ";
    // cin>>n;
    // cout<< "Kolku koloni ke vnesuvas? ";
    // cin>>m;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<"a["<<i<<"]["<<j<<"] = ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout<<setw(0);
    //     for (int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j]<<setw(6);
    //     }
    //     cout<<endl;
    // }
    // cout<<setw(0);
    // cout<<endl;
    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<m;j++)
    //     {
    //         if (i<j)
    //         {
    //             if (a[i][j]!=a[j][i])
    //             {
    //                 simetricna=0;
    //                 break;
    //             }
    //         }
    //     }
    //     if (!simetricna)
    //     {
    //         break;
    //     }
    // }
    // if (simetricna)
    // {
    //     cout<< "Matricata e SIMETRICNA vo odnos na glavnata dijagonala "<<endl;
    // }
    // else
    // {
    //     cout<< "Matricata NE E SIMETRICNA vo odnos na glavnata dijagonala "<<endl;
    // }    
    // return 0;
}   
