#include <bits/stdc++.h>

using namespace std;

int main(){
    char aux;
    queue<char> p;
    int open = 0;

    while(1){
        if(cin.eof()){
            
        }
        cin >> aux;

        if(aux == '(' || aux == ')'){
            p.push(aux);
        }
        else{
            continue;
        }


            if(p.front() == ')' && open == 0){
                cout << "incorrect" << endl;
                break;
            }
            else{
                if(p.front() == '('){
                    open++;
                    p.pop();
                }
                else if(p.front() == ')'){
                    open--;
                    p.pop();
                }
            }
        
        if(p.empty() && open == 0){
            cout << "correct" << endl;
        }       
    }


    return 0;
}