#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int num = 13; // Example integer
    bitset<sizeof(int) * 8> bits(num); // Create a bitset with the binary representation of num
    cout << "Binary representation of " << num << ": " << bits << endl; // Print the binary representation
    return 0;
}