#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastio cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0)
#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
using namespace std;

int32_t main(){
          fastio;
          int testcases;
          cin>>testcases;
              while(testcases--){
              	  
                int n ;
                cin >> n ;
                int a[n] ;
                for (int i=0; i<n; i++){
                	cin>> a[i] ;
			    }
			     
			    sort(a , a+n) ;

			    if(a[0]==a[1]){
			    	cout << "yes" <<endl ;
			    }
			    else {
			    	cout << "no" <<endl ;
			    }
			   
			    
















                }
			  return 0;

		  }
