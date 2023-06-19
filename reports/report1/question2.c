#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

enum judge {draw, win, lose};

char HANDS[3][10] = {"rock", "scissors", "paper"};
int RULE[3][3] = {{0, 1, 2}, {2, 0, 1}, {1, 2, 0}};

void scan_within(char q_msg[], char e_msg[], int min, int max, int *n){
  do{
    printf("%s", q_msg);
    scanf("%d", n);
    if((*n < min) || (*n > max)){
      printf("%s\n\n", e_msg);
    }
  }while((*n < min) || (*n > max));
}

void init(int *player_hand, int *pc_hand){
  srand(time(NULL));
  char q_msg[] = "What your hand? Rock..0, Scissors..1, Paper..2 : ";
  char e_msg[] = "Input correct number!";
  scan_within(q_msg, e_msg, 0, 2, player_hand);
  *pc_hand = rand() % 3;
}

void game_log(char player_hand[], char pc_hand[]){
  sleep(1);
  puts("Rock, paper, scissors, one two three!\n");
  sleep(1);
  printf("Me...%s vs Pc...%s\n", player_hand, pc_hand);
  sleep(2);
}

void game(){
  int player_hand;
  int pc_hand;
  init(&player_hand, &pc_hand);

  game_log(HANDS[player_hand], HANDS[pc_hand]);

  enum judge result = RULE[player_hand][pc_hand];

  switch(result){
    case win:
      printf("You win!!!\n");
      break;
    case lose:
      printf("You lose...\n");
      break;
    case draw:
      printf("One Twe Three!\n");
      game();
  }
}

int main(void){
  game();
  return 0;
}