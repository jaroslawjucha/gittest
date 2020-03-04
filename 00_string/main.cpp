#include <iostream>

using namespace std;

int main()
{
    string phrase = "Hello there sweetie";
    int phrase_length = phrase.length(); // .length()
    char phrase_char = phrase[0];
    int position_sweetie = phrase.find("sweetie", 0); // .find("", position)
    string extract_sweetie = phrase.substr(position_sweetie, 7); // .substr(position, length)

    cout << phrase << endl;
    cout << "length of the string is: " << phrase_length << endl;
    cout << "first character of the string is: " << phrase_char << endl;
    cout << "sweetie found at: " << position_sweetie << endl;
    cout << "sweetie from a string: " << extract_sweetie << endl;

    return 0;
}
