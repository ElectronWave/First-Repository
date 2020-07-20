// Card Class
class Card {
    char suit;
    int value;
  public:
    Card(char, int);
    char getSuit() {
      return suit;
    }
    int getValue() {
      return value;
    }
};

Card::Card(char s, int v) {
  suit = s;
  value = v;
}

class Deck {
    Card* cards[52];
    int topCard = 0;

  public:
    Deck();
    Card getTopCard();
    void reset();
    void shuffle();
};

Deck::Deck() {
  char suits[4] = {'H', 'S', 'C', 'D'};
  for (char s : suits) {
    for (int i = 1; i <= 13; i++) {
      cards[i] = new Card(s, i);
    }
  }

}

Card Deck::getTopCard() {
  Card c = cards[topCard];
  topcCard++;
  return c;
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // put your setup code here, to run once:
  Deck d;
  Serial.println(d.getTopCard().getSuit());


}

void loop() {
  // put your main code here, to run repeatedly:

}
