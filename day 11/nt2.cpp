#include <iostream> 
using namespace std; 
  
const int MAX = 10000; 
int pr[MAX + 1]; 
  
void build() 
{ 
    bool prime[MAX + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p = 2; p * p <= MAX; p++) { 
        if (prime[p] == true) { 
   
            for (int i = p * 2; i <= MAX; i += p) 
                prime[i] = false; 
        } 
    } 
  
    pr[0]=p[1]=0; 
    for (int p = 2; p <= MAX; p++) { 
        pr[p] = pr[p - 1]; 
        if(prime[p]) 
            pr[p]++; 
    } 
}  
int query(int l, int r) 
{ 
    return pr[r] - pr[l - 1]; 
} 
int main() 
{ 
    build(); 
  int n1=1,n2=10;
  //cout<<"\nEnter the range:";
  //cin>>n1>>n2;
  cout<<"Prime nos bw"<<n1<<"and"<<n2<<"are"<<query(n1,n2);
    return 0; 
} 
