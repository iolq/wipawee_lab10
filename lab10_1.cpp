#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    if(x==1) cout << "You will get " << grade[0] << " in this 261102.";
    else if(x==2) cout << "You will get " << grade[1] << " in this 261102.";
    else if(x==3) cout  << "You will get " << grade[2] << " in this 261102.";
    else if(x==4) cout  << "You will get " << grade[3] << " in this 261102.";
    else if(x==5) cout << "You will get " << grade[4] << " in this 261102.";
    else if(x==6) cout << "You will get " << grade[5] << " in this 261102.";
    else if(x==7) cout << "You will get " << grade[6] << " in this 261102.";
    else if(x==8) cout << "You will get " << grade[7] << " in this 261102.";
    else cout << "You will get " << grade[8] << " in this 261102.";
}