#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    float a, b, c;
float D, root1, root2;

cout << "enter coeffecient of a, b & c :";
cin >> a >> b>> c ;

D = b*b - 4*a*c;
if(D>0){
    root1 = (-b + sqrt(D)) / (2*a);
    root2 = (-b - sqrt(D)) / (2*a);
    cout << "roots are real and differ"<<endl;
    cout << "root 1 :" << root1 << endl;
    cout << "root 2 :" << root2 << endl;
}
else if(D == 0){
    root1 = -b / (2*a);
    cout << "roots are real and equal"<<endl;
    cout << "root :" << root1 << endl;
}
else{
    cout << "roots are imaginery (no real roots)"<<endl;
}


}