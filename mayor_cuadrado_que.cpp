#include <iostream>
using namespace std;
int main()
{ int n, m; cin>>n; m = 2;
while( (m+1)*(m+1) < n)
m++;
cout<<m<<endl;
}
