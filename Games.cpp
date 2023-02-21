#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int home[n];
    int away[n];

    int i;
    for(i=0;i<n;i++)
    {
        cin>>home[i];
        cin>>away[i];
    }

    int sum=0,j,k;
   for(i=0;i<n;i++)
   {
       for(j=i;j<n-1;j++)
       {
           if(home[i]==away[j+1]){sum++;}
       }

       for(k=i;k<n-1;k++)
       {
           if(away[i]==home[k+1]){sum++;}
       }
   }

   cout<<sum;






    return 0;
}
