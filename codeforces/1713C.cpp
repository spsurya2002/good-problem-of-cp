#include<bits/stdc++.h>
#define ll long long
#define N 448  
#define MOD1 998244353
using namespace std;
int closest_to_the_left(int a[],int n,int b)
{int i=0,j=n-1;while(j>i+1){int mid=(i+j)/2;if(b>=a[mid])i=mid;else j=mid;}return a[i];}

void print(int n,int table[])
{
      if(n==0) return;
      if(n==1) {cout<<0<<" ";return;}
      if(n==2) {cout<<1<<" "<<0<<" ";return;}
      int d=2*(n-1);
      int x=closest_to_the_left(table,N,d);
      cout<<x<<endl;
      print( x-n+1, table);
      for(int i=n-1;i>=x-n+1;i--)
      cout<<i<<" ";
}


int main()
{
    int table[N];for(int i=0;i<N;i++)table[i]=i*i;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
       print (n,table);
       
    }
    
   
}















































   
 
   
    
   
    
    
