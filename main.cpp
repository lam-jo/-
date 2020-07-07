#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
string qus[100];
bool out[1000];
int n;
int main() {
    int outn=0;
    cout<<"请输入生成题目数量:(不得超出题库中题目数量)";
    //cout<<1;
    cin>>outn;
    //cout<<2;
    freopen("questions.txt","r",stdin);
    //cout<<3;
    cin>>n;
    //cout<<4;
    for(int i=0;i<n;i++){
        cin>>qus[i];
    }
    //cout<<5;
    freopen("sheet.txt","w",stdout);
    //cout<<"outn:"<<outn<<endl;
    int i=0;
    srand(time(NULL));
    while(i<outn){
        int rd=rand()%n;
        if(out[rd/2]){
            continue;
        }
        else{
            out[rd/2]=1;
            cout<<qus[rd]<<endl;
            i++;
        }
    }
    return 0;
}
