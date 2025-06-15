#include <iostream>
#include <string>
using namespace std;

struct Card {
    string suit;
    string rank;
    string color;
};
 
int main() { 
    Card deck[52];
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    string colors[] = {"Red", "Red", "Black", "Black"};
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck[index].suit = suits[i];
            deck[index].rank = ranks[j];
            deck[index].color = colors[i];
            index++;
        }
    }
    // Example of accessing the deck
    for (int i = 0; i < 52; i++) {
        cout << deck[i].rank << " of " << deck[i].suit << " (" << deck[i].color << ")" << endl;
    }
    return 0;
}

