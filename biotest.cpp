#include <iostream>
using namespace std;
#include <cstring>  
#include <string>


int main() {

    string bio;
    
    cout << "Tell us about yourself: ";
    
    getline(cin, bio);
    
    cout << "Your bio says: " << bio;
}