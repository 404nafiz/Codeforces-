
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 int test_case;
 cin>>test_case;
 for(int i=1;i<=test_case;i++)
 {
  int a,b,c;
  cin>>a>>b>>c;
  if(a<b&&b<c)
  {
    cout<<"STAIR"<<endl;
  }
  else if(a<b&&b>c)
  {
    cout<<"PEAK"<<endl;
  }
  else
  {
    cout<<"NONE"<<endl;
  }
 }


 
 return 0;
}
 
 
 
 
