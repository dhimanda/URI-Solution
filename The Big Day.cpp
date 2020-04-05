/// Coded by Dhiman Sarker Bappy (Dhimanda) - RMSTU
// URI Online Problem
// Problem Link :  https://www.urionlinejudge.com.br/judge/en/challenges/view/503/2

#include<bits/stdc++.h>
using namespace std;
#define    in_file     freopen("input.txt", "r", stdin)
#define    out_file    freopen("output.txt", "w", stdout)
#define    F           first
#define    S           second
#define    pb          push_back
#define    popb        pop_back
#define    pf          push_front
#define    popf        pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi          2*acos(0)
#define    elif        else if
#define    ll          long long
#define    sp          fixed<<setprecision

#define    left        'E'
#define    up          'C'
#define    down        'B'
#define    right       'D'

int Int(){int x;scanf("%d", &x);return x;}
#define    Int         Int()
#define    mx          100010

double dis (ll x1,ll y1,ll x2,ll y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

 int main()
{
    //in_file;
    //out_file;
    double k,x,y;
    ll n;
    cin >> n >> k >> x >> y;
    char a[n];
    map  <char , int > m;
    m.clear();

    for(int i=0; i<n ; i++) {
            char t;
            cin >> t;
            a[i] = t;
            m[t]++;
    }
    bool pos;
    int px=m[right]-m[left],py=m[up]-m[down];
    int p=0,q=0;

    if(dis(0,0,x,y) > k) cout <<"Trap 1"<<endl;
    elif(px==x && py ==y) cout << "Sucesso"<<endl;
    else {
        //(dis(px,py,x,y) > k ) ? pos = false:pos = true;
        for(int i=0; i < n-1 ; i++){
            if(a[i]==left) p--;
            elif(a[i]==right) p++;
            elif(a[i]==up) q++;
            else p--;
            if(dis(p,q,x,y) > k){
                cout <<"Trap "<<i+1<<endl;
                return 0;
            }
        }
        cout <<"Trap "<<n<<endl;

    }
    //cout<<m['B']<<" "<<m['C']<<' '<<m['E']<<' '<<m['D']<<endl;

   // cout << d <<endl;
    //cout << dis(3,3,x,y);
    return 0;
}
