#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    float score1, score2, score3;

    cout << "enter scores of players :";
    cin >> score1 >> score2 >> score3;

    if(score1 > score2 && score1 > score3){
        cout << "player 1 is winner";
    }

    else if (score2 > score1 && score2 > score3){
        cout << "player 2 is winner";
    }

    else{
        cout << "player 3 is winner";
    }

}