#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter the string ";
    cin >> s;

    int hashSize = 256; // Adjust the size of the hash array to a larger value if needed
    int *hash = new int[hashSize]{0}; // Initialize all elements to zero

    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        char c;
        cin >> c;
        cout<<hash[c]<<endl;
    }
    return 0;
}
