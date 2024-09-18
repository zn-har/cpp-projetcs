#include <iostream>
#include <string>
using namespace std;

bool checkPassword() {
    string correctPassword = "hahahe"; 
    string inputPassword;

    cout << "Enter password to vote: ";
    cin >> inputPassword;

    if (inputPassword == correctPassword) {
        return true;
    } else {
        cout << "Incorrect password. Try again." << endl;
        return false;
    }
}

int main() {
    int candidate1 = 0, candidate2 = 0, candidate3 = 0;  //program is designed only for 3 candidtes change if you needa
    int voters, vote;
    
    cout << "Welcome!\n";

    cout << "Enter the number of voters: ";
    cin >> voters;
    
    for (int i = 1; i <= voters; i++) {
        cout << "\nVoter #" << i << ":\n";
        
        while (!checkPassword()) {
        }
    
        cout << "Candidates:\n";
        cout << "1. Candidate A\n";
        cout << "2. Candidate B\n";
        cout << "3. Candidate C\n";
        
        cout << "Enter your vote (1, 2, or 3): ";
        cin >> vote;
        
        switch (vote) {
            case 1:
                candidate1++;
                cout << "You voted for Candidate A.\n";
                break;
            case 2:
                candidate2++;
                cout << "You voted for Candidate B.\n";
                break;
            case 3:
                candidate3++;
                cout << "You voted for Candidate C.\n";
                break;
            default:
                cout << "Invalid vote, please enter 1, 2, or 3.\n";
                i--;  // Redo this voter's turn if the vote was invalid
        }
    }
    
    // Display the election results
    cout << "\nElection Results:\n";
    cout << "Candidate A: " << candidate1 << " votes\n";
    cout << "Candidate B: " << candidate2 << " votes\n";
    cout << "Candidate C: " << candidate3 << " votes\n";
    
    // Determine the winner
    if (candidate1 > candidate2 && candidate1 > candidate3) {
        cout << "+++++++++++Candidate A wins the election!+++++++++++\n";
    } else if (candidate2 > candidate1 && candidate2 > candidate3) {
        cout << "+++++++++++Candidate B wins the election!+++++++++++\n";
    } else if (candidate3 > candidate1 && candidate3 > candidate2) {
        cout << "\n +++++++++++Candidate C wins the election!+++++++++++\n";
    } else {
        cout << "It's a tie!\n";
    }

    return 0;
}
