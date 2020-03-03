#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() 
{
    char first_name[20] {}; // initialize array of 20 characters
    char second_name[20] {};
    char full_name[20] {};
    char second_full_name[20] {};
    
    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Please enter your second name: ";
    cin >> second_name;
    
    // strlen()
    cout << "Your first name has " << strlen(first_name) << " letters" << endl;
    cout << "Your second name has " << strlen(second_name) << " letters" << endl;
    
    // strcpy(), strcat()
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, second_name);
    cout << "Your full name is " << full_name << endl;
    
    //cin.getline() - does not work?
    //cout << "Please enter your full name: ";
    //cin.getline(second_full_name, 20);
    //cout << "Your full name this time: " << second_full_name << endl;
    
    //convert name to all uppercase
    for (size_t i {0}; i < strlen(full_name); i++) {
        full_name[i] = toupper(full_name[i]);
    }
    cout << "Full name converted to uppercase: " << full_name << endl;
    
    return 0;
}
