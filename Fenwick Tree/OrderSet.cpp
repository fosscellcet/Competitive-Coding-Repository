#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector< pair <int,int> > q;
map < int,int> compress;
int aux[200004];
int decompress[200004];
int segtree[800004];
void update(int node,int l,int r,int i,int val)
{
    if(l==r)
    {
        segtree[node]=val;
        return;
    }
    int m = (l+r)/2;
    if(i<=m)
        update(2*node,l,m,i,val);
    else
        update(2*node+1,m+1,r,i,val);
    segtree[node]= segtree[2*node]+segtree[2*node+1];
}
int query_count(int node,int l,int r,int ql,int qr)
{
    if(qr<l || ql >r)
        return 0;
    if(ql<=l && qr>=r)
        return segtree[node];
    int m = (l+r)/2;
    int s1 = query_count(2*node,l,m,ql,qr);
    int s2 = query_count(2*node+1,m+1,r,ql,qr);
    return s1+s2;
}
int query_kth(int node,int l,int r,int k)
{
    if(l==r)
        return l;
    int elements = segtree[2*node];
    int m = (l+r)/2;
    if(elements>=k)
        return query_kth(2*node,l,m,k);
    else
        return query_kth(2*node+1,m+1,r,k-elements);
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        char a;
        int b;
        cin>>a>>b;
        q.push_back({a,b});
        aux[i]=b;
    }
    sort(aux,aux+n); 
    int pos=1;
    compress[aux[0]]=pos++;
    decompress[pos-1]=aux[0];
    for(i=1;i<q.size();i++)
        if(aux[i]!=aux[i-1]) 
            compress[aux[i]]=pos++,decompress[pos-1]=aux[i];
    n=pos-1; 
    int ans;
    for(pair <char,int> p:q)
    {
        char type= p.first;
        int k = p.second;
        if(type=='I') 
        {
            update(1,1,n,compress[k],1);
        }
        else if(type=='D') 
        {
            update(1,1,n,compress[k],0);
        }
        else if(type=='C') 
        {
            ans =query_count(1,1,n,1,compress[k]-1);
            cout<<ans<<"\n";
        }
        else
        {
            if(k>segtree[1])
             {
                 cout<<"invalid\n";
                 continue;
             }
            ans = query_kth(1,1,n,k);
            cout<<decompress[ans]<<"\n";
        }
    }
    return 0;
}