#include "Card.h"
#include <assert.h>
#include<stdbool.h>

char const RANK_PIPS[RANK_COUNT]="23456789TJQKA"
char const SUIT_PIPS[SUIT_COUNT] ="cdhs";


bool Card_rankIsValid(int ran){
    return 0<= rank && rank<RANK_COUNT;
}

bool Card_suits_IsValid(int suit){
    return 0<= suit && suit < SUIT_COUNT;
}
Card Card_make(int rank, int suit){
    assert(Card_rankIsValid(rank));
    assert(Card_suits_IsValid(suit));
}

bool Card_isPaired(Card card1, Card card2){
    return card1.rank == card2.rank;
}
bool Card_isSuited(Card card1, Card card2){
    return card1.suit == card2.suit;
}
bool Card_equals(Card card1, Card card2){
    return Card_isPaired(card1,card2) && Card_isSuited(card1, card2);
}
int Card_rankFromPip(char rankPip){
    for(int rank =0; rank<sizeof(RANK_COUNT); rank++){
        if(int(rankPip)==RANK_COUNT[rank]){
            return rank;
        }
    return -1;
    }
}
int Card_suitFromPip(char suitPip){
    for(int suit; suit< sizeof(SUIT_COUNT); suit++){
        if(int(suitPip)==RANK_COUNT[suit]){
            return suit;
        }
    return -1;
    }
}
Card_makeFromPip(char const pip[]){
    int rank = Card_rankFromPip( pip[0]);
    int suit = Card_suitFromPip(pip[1]);
    assert(rank);
    assert(suit);
    return {.rank = rank, .suit= suit}
}
char Card_rankPip(Card card){
    for(int rank =0; rank<sizeof(RANK_COUNT); rank++){
        if(rank == card.rank{
            return RANK_COUNT[rank];
        }
     }
    return -1;
}
char Card_suitPip(Card card){
    for(int suit; suit< sizeof(SUIT_COUNT); suit++){
        if(suit == card.suit){
            return RANK_COUNT[suit];
        }
    return -1;
    }
}
bool Card_pipEquals(Card card, char const pip[]){
    int rank = Card_rankFromPip( pip[0]);
    int suit = Card_suitFromPip(pip[1]);

    return rank == Card_rankPip(card) && suit ==Card_suitPip(card);
}

void Card_printPip(Card card,FILE * file){
    print(char( Card_rankPip(card) + Card_suitPip(card)));

}
