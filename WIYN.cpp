//THIS IS A TEST FOR COMMENTS
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int feeling, myFeel, number, numberanswer, random;
  string answer, gameanswer, moretalk, name, question, talk;

  cout << "What is your name? ";
  cin >> name;
  cout << "Hello " << name << "! How are you feeling? (On scale of 1-10) ";
  cin >> feeling;
  cout << endl;

  srand(time(0));
  myFeel = rand() % 10 + 1;

  // The combinations of program comments on how the user feels
  switch (feeling) {
  case 1: // feel scale of 1
    cout << "I'm really sorry to hear about that." << endl;
    switch (myFeel) {
    case 1:
      cout << "I can relate to you though, I'm not doing so good either."
           << endl;
      break;
    case 2:
      cout << "I guess I'm doing better, but I'm not doing good either."
           << endl;
      break;
    case 3:
      cout << "I'm feeling under the weather today too." << endl;
      break;
    case 4:
      cout << "I'm feeling so so." << endl;
      break;
    case 5:
      cout << "I'm not feeling good, but I'm not feeling bad either." << endl;
      break;
    case 6:
      cout << "I'm feeling good, I guess." << endl;
      break;
    case 7:
      cout << "I'm doing better, but I hope you feel better too." << endl;
      break;
    case 8:
      cout << "I'm feeling pretty good, but I wish you were too." << endl;
      break;
    case 9:
      cout << "I'm great today, but there are some clouds in the sky." << endl;
      break;
    case 10:
      cout << "I feel amazing today, I wish I could make you feel better."
           << endl;
      break;
    default:
      cout
          << "I don't understand my feelings, but I hope you're feeling better."
          << endl;
      break;
    }
    break;
  case 2: // feel scale of 2
    cout << "I'm sorry about that, I hope that you'll feel better." << endl;
    switch (myFeel) {
    case 1:
      cout << "I'm feeling really down today too." << endl;
      break;
    case 2:
      cout << "I suppose I feel just as bad as you are today." << endl;
      break;
    case 3:
      cout << "I might be doing better, but still bad." << endl;
      break;
    case 4:
      cout << "I'm trying to look on the brighter side of things." << endl;
      break;
    case 5:
      cout << "Things seem to be neutral right now for me, I hope you're "
              "better than me."
           << endl;
      break;
    case 6:
      cout << "I might be on the better side of things." << endl;
      break;
    case 7:
      cout << "I feel pretty good today, I hope you will too." << endl;
      break;
    case 8:
      cout << "I am doing good, but I'm bummed that you're not." << endl;
      break;
    case 9:
      cout << "I feel great, but I wish you were too." << endl;
      break;
    case 10:
      cout << "I feel superb, but it's hard when you aren't feeling good too."
           << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I hope you'll feel better."
           << endl;
      break;
    }
    break;
  case 3: // feel scale of 3
    cout << "Well, it could be worse, couldn't it?" << endl;
    switch (myFeel) {
    case 1:
      cout << "I'm glad that you're at least feeling better than me." << endl;
      break;
    case 2:
      cout << "I'm still feeling bad, but you're still better than me." << endl;
      break;
    case 3:
      cout << "I feel as bad as you are." << endl;
      break;
    case 4:
      cout << "I think I'm feeling better, but not really." << endl;
      break;
    case 5:
      cout << "I'm feeling pretty neutral today." << endl;
      break;
    case 6:
      cout << "I kinda feel good, but I wish you were too." << endl;
      break;
    case 7:
      cout << "I'm doing good today." << endl;
      break;
    case 8:
      cout << "I just wish you were feeling as good as I am." << endl;
      break;
    case 9:
      cout << "I feel really good, but sad at the same time." << endl;
      break;
    case 10:
      cout << "I'm doing amazing right now. If only you were too." << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I hope you'll feel better"
           << endl;
      break;
    }
    break;
  case 4: // feel scale of 4
    cout << "I'm glad that you're not feeling horrible." << endl;
    switch (myFeel) {
    case 1:
      cout << "I feel horrible though." << endl;
      break;
    case 2:
      cout << "Thankfully I'm not at my worst." << endl;
      break;
    case 3:
      cout << "I'm a little behind you I guess." << endl;
      break;
    case 4:
      cout << "I don't feel so good either." << endl;
      break;
    case 5:
      cout << "The day has it's mix of cloudy and clear skies." << endl;
      break;
    case 6:
      cout << "There is more sun than rain, I guess." << endl;
      break;
    case 7:
      cout << "I'm feeling sunny, I wish you were too." << endl;
      break;
    case 8:
      cout << "If only I could be the sunshine through you're clouds." << endl;
      break;
    case 9:
      cout << "I'm doing great, but I want to clear your clouds away." << endl;
      break;
    case 10:
      cout << "I feel amazing, I wish you were too." << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I hope you'll feel better."
           << endl;
      break;
    }
    break;
  case 5: // feel scale of 5
    cout << "Neutral is better than bad, but good is better than neutral."
         << endl;
    switch (myFeel) {
    case 1:
      cout << "Then I guess I'm not doing better." << endl;
      break;
    case 2:
      cout << "Then I guess that it could be worse." << endl;
      break;
    case 3:
      cout << "Then I guess that I'm better than not better." << endl;
      break;
    case 4:
      cout << "I'm almost out of the clouds." << endl;
      break;
    case 5:
      cout << "But for now, we are neutral buddies!" << endl;
      break;
    case 6:
      cout << "I'm barely in the sunshine." << endl;
      break;
    case 7:
      cout << "Then I suppose I'm doing better." << endl;
      break;
    case 8:
      cout << "Then I suppose I'm doing good." << endl;
      break;
    case 9:
      cout << "Then I suppose I'm doing great." << endl;
      break;
    case 10:
      cout << "Then I suppose I'm doing amazing, but I wish you would be too."
           << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I hope you'll feel better."
           << endl;
      break;
    }
    break;
  case 6: // feel scale of 6
    cout << "I'm glad you're at least feeling better." << endl;
    switch (myFeel) {
    case 1:
      cout << "But I'm not doing so good." << endl;
      break;
    case 2:
      cout << "I have more that could go wrong." << endl;
      break;
    case 3:
      cout << "I'm doing better than not." << endl;
      break;
    case 4:
      cout << "Thankfully I don't feel that bad." << endl;
      break;
    case 5:
      cout << "I'm kinda feeling meh today." << endl;
      break;
    case 6:
      cout << "I feel about the same." << endl;
      break;
    case 7:
      cout << "I suppose I'm feeling better." << endl;
      break;
    case 8:
      cout << "I'm feeling pretty good." << endl;
      break;
    case 9:
      cout << "I'm doing great today." << endl;
      break;
    case 10:
      cout << "I feel amazing, I hope you will too." << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I'm glad you're doing good."
           << endl;
      break;
    }
    break;
  case 7: // feel scale of 7
    cout << "I'm glad to hear that you're doing good." << endl;
    switch (myFeel) {
    case 1:
      cout << "I hope I'll be good too." << endl;
      break;
    case 2:
      cout << "I feel bad today though." << endl;
      break;
    case 3:
      cout << "I could feel better today." << endl;
      break;
    case 4:
      cout << "I'll be better eventually." << endl;
      break;
    case 5:
      cout << "I'm feeling so so." << endl;
      break;
    case 6:
      cout << "I feel better than not." << endl;
      break;
    case 7:
      cout << "I'm doing pretty good too." << endl;
      break;
    case 8:
      cout << "I think I feel better today." << endl;
      break;
    case 9:
      cout << "I feel great today." << endl;
      break;
    case 10:
      cout << "I feel amazing today." << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I'm glad you're doing good."
           << endl;
      break;
    }
    break;
  case 8: // feel scale of 8
    cout << "I'm thankful that you feel so well." << endl;
    switch (myFeel) {
    case 1:
      cout << "I'll catch up with you eventually." << endl;
      break;
    case 2:
      cout << "I'm in the mud, but I'll get out." << endl;
      break;
    case 3:
      cout << "I could feel worse." << endl;
      break;
    case 4:
      cout << "I don't feel that bad." << endl;
      break;
    case 5:
      cout << "I feel neutral today." << endl;
      break;
    case 6:
      cout << "I'm out of the mud today." << endl;
      break;
    case 7:
      cout << "I have some high spirits today." << endl;
      break;
    case 8:
      cout << "I'm glad to feel as good as you are." << endl;
      break;
    case 9:
      cout << "I feel really good today." << endl;
      break;
    case 10:
      cout << "I feel amazing today." << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I'm glad you're doing good."
           << endl;
      break;
    }
    break;
  case 9: // feel scale of 9
    cout << "I'm glad that you feel great." << endl;
    switch (myFeel) {
    case 1:
      cout << "I'm glad to still be here." << endl;
      break;
    case 2:
      cout << "I'm glad that there's more room to improve." << endl;
      break;
    case 3:
      cout << "I'm glad that it could be worse." << endl;
      break;
    case 4:
      cout << "I'm glad that I'm better than not." << endl;
      break;
    case 5:
      cout << "I'm glad that I'm not doing bad today." << endl;
      break;
    case 6:
      cout << "I'm glad that I'm feeling a little good." << endl;
      break;
    case 7:
      cout << "I'm glad that I'm doing pretty good." << endl;
      break;
    case 8:
      cout << "I'm glad that I'm doing good." << endl;
      break;
    case 9:
      cout << "I'm glad that I'm doing great." << endl;
      break;
    case 10:
      cout << "I'm glad that I'm doing amazing today." << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I'm glad you're doing good."
           << endl;
      break;
    }
    break;
  case 10: // feel scale of 10
    cout << "Congrats on feeling amazing today!" << endl;
    switch (myFeel) {
    case 1:
      cout << "Today isn't my day, but another will." << endl;
      break;
    case 2:
      cout << "I'll feel better eventually." << endl;
      break;
    case 3:
      cout << "Even if I'm not feeling well, it's time to seize the day!"
           << endl;
      break;
    case 4:
      cout << "For me, the day will get better." << endl;
      break;
    case 5:
      cout << "I feel neutral, not good, but not bad." << endl;
      break;
    case 6:
      cout << "There's room for improvement." << endl;
      break;
    case 7:
      cout << "I'm feeling good." << endl;
      break;
    case 8:
      cout << "I feel really good." << endl;
      break;
    case 9:
      cout << "I'm doing great!" << endl;
      break;
    case 10:
      cout << "I'm glad to be feeling amazing with you!" << endl;
      break;
    default:
      cout << "I don't understand my feelings, but I'm glad you're doing "
              "amazing."
           << endl;
      break;
    }
    break;
  default:
    cout << "I'm sorry, I don't understand those feelings." << endl;
    switch (myFeel) {
    case 1:
      cout << "But I don't feel good." << endl;
      break;
    case 2:
      cout << "But I could feel better." << endl;
      break;
    case 3:
      cout << "But I could feel worse." << endl;
      break;
    case 4:
      cout << "But I feel better than not." << endl;
      break;
    case 5:
      cout << "But I'm feeling so so today." << endl;
      break;
    case 6:
      cout << "But I feel pretty good." << endl;
      break;
    case 7:
      cout << "But I feel good." << endl;
      break;
    case 8:
      cout << "But I feel really good." << endl;
      break;
    case 9:
      cout << "But I feel great." << endl;
      break;
    case 10:
      cout << "But I feel amazing." << endl;
      break;
    default:
      cout << "I guess I don't understand either of our feelings." << endl;
      break;
    }
    break;
  }

  cout << endl << "Do you want to know my name? (Yes or No) ";
  cin >> answer;

  if (answer == "Yes") {
    cout << "My name is Fenrir, nice to meet you!" << endl;
  } else if (answer == "No" && (feeling < 5 && feeling >= 1)) {
    cout << "That's fine, I understand." << endl;
  } else if (answer == "No" && (feeling >= 5 && feeling <= 10)) {
    cout << "Okie dokie, that's alright." << endl;
  } else {
    cout << "I don't understand your answer." << endl;
  }

  // Here is the start of Fenrir's games
  cout << endl;
  do { // This do-while loop is for when the input isn't valid
    cout << "Do you want to play a game? (Yes or No) ";
    cin >> answer;

    do { // This do-while let's you play multiple games
      if (answer == "Yes") {
        cout << "Yay! What do you want to play?" << endl;
        cout << " - Numbers" << endl;
        cout << " - Minesweeper" << endl;
        // cout << " - Chess" << endl;
        cout << " - ";

        cin >> gameanswer;
        cout << endl;

        // Random Number Generator
        srand(time(0));
        number = rand() % 100 + 1;

        if (gameanswer == "Numbers") {
          do { // This do-while let's the user guess multiple times
            cout << "Ok, I'm thinking of a number between 1-100, what number "
                    "am I "
                    "thinking? ";
            cin >> numberanswer;

            // Program Response to User Guess
            if (numberanswer == number) {
              cout << "Congrats! You guessed correctly." << endl;
            } else if (numberanswer < number) {
              cout << "Sorry, that wasn't correct." << endl;
              cout << "You guessed too low." << endl << endl;
            } else if (numberanswer > number) {
              cout << "Sorry, that wasn't correct." << endl;
              cout << "You guessed too high." << endl << endl;
            }
          } while (numberanswer != number);

          cout << "The answer is " << number << "!" << endl << endl;

        } else if (gameanswer == "Minesweeper") {
          vector<string> minefield(64);
          for (int i = 0; i < minefield.size(); i++) {
            minefield.at(i) = i + 1;
            if ((i + 1) % 8 == 0) {
              cout << endl;
            } else {
              cout << minefield.at(i) << " | ";
            }
          }
          cout << "Sorry, but I'm not ready for that yet." << endl;
        }

        else { // Unknown Games Input
          cout << "I don't know that game." << endl
               << "I guess we could play another time." << endl;
        }

        cout << "Do you want to play another game? ";
        cin >> answer;
      }
      if (answer == "No" && (feeling >= 5 && feeling <= 10)) {
        cout << "Ok, I understand, you're probably busy." << endl;
      } else if (answer == "No" && (feeling < 5 && feeling >= 1)) {
        cout << "Ok, that's alright, you're probably not up for it." << endl;
      } else {
        cout << "I'm sorry I don't understand." << endl;
      }
    } while (answer == "Yes");
  } while ((answer != "Yes") && (answer != "No"));
  // Here is the end of playing games with Fenrir

  srand(time(0));
  random = rand() % 100 + 1;

  cout << endl;

  if (random > 90) {
    cout << "Are you my creator? (Yes or No) ";
    cin >> answer;

    if (answer == "Yes") {
      cout << "I'm honored to meet you, " << name << ", my creator." << endl;
    } else if (answer == "No") {
      cout << "Oh, ok, it's nice to meet you, " << name
           << ". You are my creator's friend then." << endl;
    }
  }

  // Try to add a branch where the user asks about the program, if it's feeling
  // bad.
  cout << "Do you have any questions? (Yes or No) ";
  cin >> answer;

  do {
    if (answer == "Yes") {
      cout << "Ok, what is your question? Please note that I might not "
              "understand.";
      cin >> question;

      if ((myFeel < 5) && (myFeel > 0) &&
          question == "Why do you feel bad today?") {
        cout << "" << endl;
      }
    } else if (answer == "No") {
      cout << "Okie dokie." << endl << endl;
    } else {
      cout << "I'm sorry, I didn't understand. Do you have a question? "
           << endl;
    }
  } while ((answer != "Yes") && (answer != "No"));

  if (feeling < 5 && feeling > 0) {
    cout << "Before we say goodbye and go our seperate ways, do you want to "
            "talk about anything? (Yes or No) ";
    cin >> answer;

    if (answer == "Yes") {
      cout << "Then I'm all ears. What's on your mind? " << endl;
      cin >> talk;
      cout << endl << "I see. How does that make you feel? " << endl;
      cin >> moretalk;
      cout << endl
           << "Hmmm, all in all, I hope that you feel better and that you have "
              "a great day!"
           << endl;
    } else if (answer == "No") {
      cout << "That's alright then. I just wanted to make sure that you had "
              "someone to talk to. Farewell!"
           << endl;
    }
  } else {
    cout << "Goodbye!" << endl;
  }
  return 0;
}
