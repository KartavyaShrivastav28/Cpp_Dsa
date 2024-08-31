#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> v1 ={1,2,3,4,5};
   // for(int i: v1){
   //  cout<<i<<" ";
   // }


   v1.at(1)=10;
   cout<<v1.at(1);
   
   return 0;
}