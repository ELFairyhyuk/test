#include<iostream>
#include<algorithm>
using std::cout;
using std::endl;

int main(){
    int *p=(int *)malloc(5);
    p[0]=0;
    p[1]=1;
    p[2]=2;
    p[3]=8;
    p[4]=9;
//test
    int *ret=std::find(p,p+5,8);
    cout<<"find "<<p[ret-p]<<"p address "<<ret-p<<"ret address "<<ret<<endl;
    cout<<"find "<<*ret<<endl;
    cout<<"test "<<*ret<<endl;
    return 0;
}
