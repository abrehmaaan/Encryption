#include <iostream>
#include <string>
using namespace std;
int main() {
    // Get the roll number from the user
    string roll_number;
    cout << "Enter your roll number: ";
    cin >> roll_number;

    // Continuously prompt the user for input until a valid input is entered
    string text;
    while (true) {
        // Get the input from the user
        cout << "Enter a sentence or word with 6 or fewer characters: ";
        cin >> text;

        // Check if the input is valid (i.e. has 6 or fewer characters)
        if (text.length() <= 6) {
            break;
        }
        else {
            cout << "Error: Input must have 6 or fewer characters" << endl;
        }
    }

    // Calculate the size of the array needed to store the encrypted ASCII values
    int array_size = 2 * text.length();

    // Declare the array to store the encrypted ASCII values
    int encrypted[array_size];

    // Initialize a counter variable
    int counter = 0;

    // Iterate through each character in the text
    for (int i = 0; i < text.length(); i++) {
        // Convert the character to its ASCII value
        int ascii_val = (int)text[i];

        // Append the ASCII value to the encrypted array, followed by the roll number
        encrypted[counter] = ascii_val;
        counter++;
        encrypted[counter] = stoi(roll_number);
        counter++;
    }

    // Print the encrypted array
    cout << "Encrypted: [";
    for (int i = 0; i < array_size; i++) {
        cout << encrypted[i];
        if (i < array_size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
