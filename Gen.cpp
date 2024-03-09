#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    string pswrd = "";
    string wait;
    int val;
    char comp[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                   'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                   'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                   'u', 'v', 'w', 'x', 'y', 'z', '|', '/', '\\', '+',
                   ')', '(', '-', '*', '&', '^', '%', '$', '#', '@',
                   '!', '~', '`', '=', '<', '>', ';', ':', '.', ',',
                   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                   'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                   'U', 'V', 'W', 'X', 'Y', 'Z'};

    srand(time(0));
    for(int i = 0; i < 72; i++) {
        val = rand() % 87;
        pswrd += comp[val];
    }

    cout << pswrd << endl;
    cin >> wait;
    return 0;
}
