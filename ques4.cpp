#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;
int main() {
     int itemNo;
    int quantity;
    double unitprice;
    double finalbill;

    //input
    cout<<"enter item no:";
    cin>>itemNo;
    cout<<"enter quantity:";
    cin>>quantity;
    cout<<"enter unit price:";
    cin>>unitprice;

    //calculate total before discount
    double totalamount = quantity*unitprice;

    //calculate discount (20%)
    double discount = totalamount*0.20;

    //output
    cout<<"item no:"<<itemNo<<endl;
    cout<<"total bill before discount:"<<totalamount<<endl;
    cout<<"discount(20%):"<<discount<<endl;
    cout<<"total bill after discount:"<<finalbill<<endl;
}