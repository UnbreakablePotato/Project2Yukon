void deckSplit(){

for(int i = 1; i<26;i++){
  Node* newCard = createCard(values[i]);
  if (i==0) {
    newCard->prev = NULL;
    head = newCard;
    previous = newCard;
  }
  for(int j = 1;j<52;j++){
    if(j>=26){
      Node* newCard = createCard(values[i]);
      if (i==0) {
        newCard->prev = NULL;
        head = newCard;
        previous = newCard;
    }
  }
  }

  }
  }
