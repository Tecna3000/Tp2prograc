#include "Deck.h"
#include <assert.h>
#include <string.h>

bool Deck_isEmpty(Deck const * deck)
{
    return deck -> length ==0;
}

bool Deck_isFull (Deck const * deck)
{
    return deck -> length == DECK_CAPACITY;
}

void Deck_appendCard(Deck *dec, Card card)
{
    assert (!Deck_isFull);
    deck-> card[deck -> length] = card;
    deck-> length++;
}

Card Deck_popCard(Deck *deck)
{
    assert(!Deck_isFull);
    deck-> length--;
    return deck-> card[deck -> length+]; 
}

void Deck_initEmpty(Deck * deck)
{
     deck->length = 0;
}

void Deck_initComplete(Deck * deck)
{
    Deck-Deck_initEmpty(deck);
    for(char rank : RANK_PIPS)
    {
        for (char suit : RANK_PIPS)
        {
            Deck_appendCard(deck,(Card){.rank= rank,.suit
            = suit
        }
    }

}

bool Deck_pipsEqual(Deck const * deck, char const pips[])
{

}