#include <iostream>
#include <string>

using namespace std;

void sendMessage(string recipient, string message) {
    cout << "Sending message to " << recipient << ": " << message << endl;
}

void sendMessage(string recipient, string message, string messageType) {
    cout << "Sending " << messageType << " message to " << recipient << ": " << message << endl;
}

void makePhoneCall(string recipient) {
    cout << "Calling " << recipient << "..." << endl;
    bool callAnswered = false;
    while (!callAnswered) {
        string response;
        cout << "Receiver, pick up the call? (yes/no): ";
        cin >> response;

        if (response == "yes") {
            callAnswered = true;
            cout << "Call connected!" << endl;
        }
        else {
            cout << "Ringing..." << endl;
        }
    }
}

void makePhoneCall(string recipient, string callType) {
    cout << "Calling " << recipient << " (" << callType << ")..." << endl;
    bool callAnswered = false;
    while (!callAnswered) {
        string response;
        cout << "Receiver, pick up the call? (yes/no): ";
        cin >> response;

        if (response == "yes") {
            callAnswered = true;
            cout << "Call connected!" << endl;
        }
        else {
            cout << "Ringing..." << endl;
        }
    }
}

int main() {
    string recipient, sender, message;

    cout << "Enter recipient's name: ";
    cin >> recipient;

    cin.ignore();

    cout << "Enter sender's name: ";
    getline(cin, sender);

    cout << "Enter message: ";
    getline(cin, message);

    sendMessage(recipient, message);
    sendMessage(recipient, message, "Audio");

    makePhoneCall(recipient);
    makePhoneCall(recipient, "Video");

    return 0;
}
