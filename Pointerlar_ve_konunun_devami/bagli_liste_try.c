#include <stdio.h>
#include <stdlib.h>
struct Node{
  int value;
  struct Node * next;
  };
struct LL{
  struct Node * root;
};
int add_LL(struct LL * p,int val1){
  struct Node * new_p = (struct Node * )malloc(sizeof(struct Node));
  if(!new_p){return 1;}
  new_p->value = val1;
  new_p->next = p->root;
  p->root = new_p;
  return 0;
}
void print_all(struct LL * p){
  struct Node * searcher = p->root;
  while(searcher){
    printf("%d\n",searcher->value);
    searcher = searcher->next;
  }
}
int delete(struct LL * p,int val1){
    struct Node * searcher = p->root;
    if(searcher == NULL){return 1;}
    if(searcher->value == val1){
      p->root = searcher->next;
      searcher->next = NULL;
      free(searcher);
      return 0;
    }
    if(searcher->next == NULL){return 1;}
    while(searcher->next->value != val1){
      searcher = searcher->next;
      if(searcher->next == NULL){return 1;}
    }
    struct Node * wanted = searcher->next;
    struct Node * back = searcher;
    back->next = wanted->next;
    wanted->next = NULL;
    free(wanted);
    return 0;


}
int main(int argc, char *argv[]){
  struct LL L1 = {NULL};
  /*for (int i = 0; i < 10; i++) {
    add_LL(&L1,i);
  }*/
  add_LL(&L1,8);
  add_LL(&L1,7);
  add_LL(&L1,6);
  delete(&L1,7);
  print_all(&L1);
  return 0;
}
