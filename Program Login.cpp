#include <iostream>
using namespace std;

int main() {
    string username, pass;
    cout << "=============\n";
    cout << "   Program   \n";
    cout << "    Login    \n";
    cout  << "============\n";
    
    cout << "Username > ";
    cin >> username;
    cout << "Password > ";
    cin >> pass;
    
    if(username == "Adi" && pass == "Adi123") {
        cout << "\nAnda berhasil login";
    }else {
        cout << "\nPassowrd or username invalid!!!";
    }
    return 0;
}