module PlayingCard = {

    // variant (aka DU)
    type suit = Spade | Club | Heart | Dimond;

    type face = 
        | Ace | Two | Three | Four | Five 
        | Six | Seven | Eight | Nine  
        | Ten | Jack | Queen | King;

    module Face = {
        let point = (face) => {
            switch face {
            | Ace => 11;
            | Two => 2;
            | _ => 10;
            };
        }
    }

     // Tuple
    type card = (suit, face); 

    module Card = {
        let point = (card) => {
            switch card {
            | (Spade , face) => 2 * Face.point(face);
            | (_, face) => Face.point(face);
            };
        }
    };

    // Single Case Variainet (aka Single Case DU)
    type cardCount = CardCount(int); // Looks like this has to be public ctor, so... unboxed single field records maybe better.

    // Sub-modules 
    // Sub-modules are really useful for defining common static methods
    module CardCount = {
        let value = (count) => {
            switch count {
            | CardCount(ct) => ct // int
            };
        }   

        /// Safely create card counts
        let create = (count) => {
            if(count >= 0) {
                Ok(CardCount(count));
            } else {
                Error("Invalid Count");
            }       
        }
    };

    type deck = array(card);
    type cards = list(card);
    
    // Simple record
    type hand = {
        cards: cards,
        deck: deck
    };

    module BlackJack = {
        let newGame = () => {
            let count = CardCount.create(5);
        }
    };
}