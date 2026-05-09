#include<iostream>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

int main(){
    string str, cleaned = "";
    cout << "Enter a string: ";
    getline(cin, str);

    // Remove extra spaces
    bool space = false;
    for(char ch : str)
    {
        if(isspace(ch))
        {
            if(!space)
            {
                cleaned += ' ';
                space = true;
            }
        }
        else
        {
            cleaned += ch;
            space = false;
        }
    }
// Remove leading space
    if(cleaned[0] == ' ')
        cleaned.erase(0,1);

    // Remove trailing space
    if(cleaned[cleaned.length()-1] == ' ')
        cleaned.erase(cleaned.length()-1,1);

    // Convert to lowercase
    for(int i=0;i<cleaned.length();i++)
        cleaned[i] = tolower(cleaned[i]);

    // Sentence case
    cleaned[0] = toupper(cleaned[0]);

    int words = 0, digits = 0, special = 0;
    bool valid = true;

    for(int i=0;i<cleaned.length();i++)
    {if(isdigit(cleaned[i]))
            digits++;

        else if(!isalpha(cleaned[i]) && !isdigit(cleaned[i]) && !isspace(cleaned[i]))
        {
            special++;
            valid = false;
        }
    }

    // Count words
    words = 1;
    for(int i=0;i<cleaned.length();i++)
    {
        if(cleaned[i] == ' ')
            words++;}

    cout << "\nNormalized String: " << cleaned << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;

    if(valid)
        cout << "String is VALID (contains only alphabets, digits and spaces)" << endl;
    else
        cout << "String is INVALID (contains special characters)" << endl;




/*

getline() = read full line input
isspace() = check spaces
isdigit() = check digits
isalpha() = check letters
tolower() = convert to lowercase
toupper() = convert to uppercase

*/





}  