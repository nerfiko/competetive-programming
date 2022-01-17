//PROBLEM: https://codeforces.com/problemset/problem/1097/A
//TIME TO SOLVE: 06:42 min

#include <iostream>
#include <string>

using namespace std;

int main(){
    char cardOnTable[2];
    char cardsOnHand[10];

    cin >> cardOnTable[0] >> cardOnTable[1];

    for(int i = 0; i < 10; i++){
        cin >> cardsOnHand[i];
    }

    bool ended = false;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 10; j++){
            if(cardOnTable[i] == cardsOnHand[j]){
                cout << "YES";
                ended = true;
                return 0;
            }
        }
    }
    if(!ended){
        cout << "NO";
    }
    return 0;
}