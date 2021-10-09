polindrome.cpp
#include <stdio.h>
#include <string.h>

typedef char String[100];

int cek(String input, int i, int j){

  int k=j/2;
  if (j==k){
    printf("Kata Tersebut Polindrome \n");
    return 1;
  } else if(input[i] != input[j]){
    printf("Kata Tersebut Tidak polindrome \n");
    return 0;
  } else{
    return cek(input, i+1, j-1);
  }

}

void main(){

  printf("Masukkan Sebuah Kata:");
  String input;
  scanf("%s", &input);
  printf("", cek(input, 0, strlen(input)-1));

}