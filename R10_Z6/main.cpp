#include <iostream>
#include <array>
#include <algorithm>
#include <random>
#include <ctime>

// ������������ ��� ������ ����
enum class Rank {
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace,
    max_ranks
};

// ������������ ��� ������ ����
enum class Suit {
    clubs,
    diamonds,
    hearts,
    spades,
    max_suits
};

// ��������� Card
struct Card {
    Rank rank;
    Suit suit;
};

// ������� ��� ������ �����
void printCard(const Card& card) {
    const char* rank_codes[]{"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    const char* suit_codes[]{"C", "D", "H", "S"};

    std::cout << rank_codes[static_cast<int>(card.rank)] << suit_codes[static_cast<int>(card.suit)] << ' ';
}

using Deck = std::array<Card, 52>;

// ������� ��� �������� ������
Deck createDeck() {
    Deck deck{};
    int card_index = 0;

    for (int suit = 0; suit < static_cast<int>(Suit::max_suits); ++suit) {
        for (int rank = 0; rank < static_cast<int>(Rank::max_ranks); ++rank) {
            deck[card_index] = {static_cast<Rank>(rank), static_cast<Suit>(suit)};
            ++card_index;
        }
    }

    return deck;
}

// ������� ��� ������ ������
void printDeck(const Deck& deck) {
    for (const auto& card : deck) {
        printCard(card);
    }
    std::cout << '\n';
}

// ������� ��� ����������� ������
void shuffleDeck(Deck& deck) {
    static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(deck.begin(), deck.end(), mt);
}

// ������� ��� ��������� �������� �����
int getCardValue(const Card& card) {
    switch (card.rank) {
        case Rank::two: return 2;
        case Rank::three: return 3;
        case Rank::four: return 4;
        case Rank::five: return 5;
        case Rank::six: return 6;
        case Rank::seven: return 7;
        case Rank::eight: return 8;
        case Rank::nine: return 9;
        case Rank::ten: case Rank::jack: case Rank::queen: case Rank::king: return 10;
        case Rank::ace: return 11;
        default: return 0;
    }
}

int main() {
    // ������� ������ ����
    Deck deck = createDeck();

    // �������� ������ ����
    std::cout << "Initial deck:\n";
    printDeck(deck);

    // ������������ ������ ����
    shuffleDeck(deck);

    // �������� ������������ ������ ����
    std::cout << "Shuffled deck:\n";
    printDeck(deck);

    // ������ ������������� getCardValue()
    std::cout << "Value of first card: " << getCardValue(deck[0]) << '\n';

    return 0;
}
