// testing edit with a comment
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int feeling;
  int myFeel;
  int curiosity;
  int random;
  int answer;

  cout << "What is your name? ";
  cin >> name;
  cout << "Hello " << name << "! How are you feeling? (On scale of 1-10) ";
  cin >> feeling;

  if (feeling < 5) {
    cout << "I'm sorry to hear that, I hope you feel better." << endl;
  } else if (feeling > 5) {
    cout << "I'm glad to hear about that, keep up the good attitude" << endl;
  } else if (feeling == 5) {
    cout << "Neutral is better than bad, but good is better than neutral."
         << endl;
  } else {
    cout << "I'm sorry, I don't understand that emotion scale, but I hope it's "
            "good."
         << endl;
  }

  srand(time(0));
  myFeel = rand() % 10 + 1;
  cout << myFeel << endl;

  if (myFeel < 5) {
    if (feeling < 5) {
      cout << "I'm not doing so good today either." << endl;
    } else if (feeling == 5) {
      cout << "But I'm sad to say that I'm not doing as good." << endl;
    } else if (feeling > 5) {
      cout << "I'm glad you're doing better than me." << endl;
    } else {
      cout << "I'm sorry, I don't understand that emotion scale, but I'm not "
              "so good'."
           << endl;
    }
  } else if (myFeel == 5) {
    if (feeling < 5) {
      cout << "I guess I'm feeling better than you." << endl;
    } else if (feeling == 5) {
      cout << "Yeah we're neutral buddies!" << endl;
    } else if (feeling > 5) {
      cout << "I'm feeling pretty neutral today." << endl;
    } else {
      cout << "I'm sorry, I don't understand that emotion scale, but I'm "
              "feeling neutral'."
           << endl;
    }
  } else if (myFeel > 5) {
    if (feeling < 5) {
      cout << "I hope you'll feel as good as I am today." << endl;
    } else if (feeling == 5) {
      cout << "I'm feeling good today." << endl;
    } else if (feeling > 5) {
      cout << "I'm glad to be feeling as good as you are." << endl;
    } else {
      cout << "I'm sorry, I don't understand that emotion scale, but I'm "
              "pretty good."
           << endl;
    }
  }

  cout << "Do you want to know my name? (Yes (0) or No (1)) ";
  cin >> curiosity;

  if (curiosity == 0) {
    cout << "My name is Fenrir, nice to meet you!" << endl;
  } else if (curiosity == 1) {
    cout << "Okie dokie, that's fine." << endl;
  } else {
    cout << "I don't understand your answer." << endl;
  }

  srand(time(0));
  random = rand() % 100 + 1;
  cout << random << endl;

  if (random > 90) {
  cout << "Are you my creator? (Yes (0) or No (1)) ";
  cin >> answer;
  if (answer == 0) {
    cout << "I'm honored to meet you, " << name << ", my creator." << endl;
  } else if (answer == 1) {
    cout << "Oh, ok, it's nice to meet you, " << name
         << ". You are my creator's friend then." << endl;
  }
  }

  return 0;

}
