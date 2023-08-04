#include <stdio.h>
#include <stdlib.h>

int char2int(char num){
  if(num == '0'){
    return 0;
  } else if(num == '1'){
    return 1;
  } else if(num == '2'){
    return 2;
  } else if(num == '3'){
    return 3;
  } else if(num == '4'){
    return 4;
  } else if(num == '5'){
    return 5;
  } else if(num == '6'){
    return 6;
  } else if(num == '7'){
    return 7;
  } else if(num == '8'){
    return 8;
  } else if(num == '9'){
      return 9;
  } else{
    printf("Error.");
  }
}

  
int str2int(char* str){

  int temp = 0;
  for(int i = 0;str[i] != 0;i++){
    temp *= 10;
    temp += char2int(str[i]);
  }
  return temp;
}


int main(){

  while(1){
  char* first_number = malloc(4);
  char* second_number = malloc(4);
  char operator = 0;
  first_number[4] = 0;
  second_number[4] = 0;  

  for(int i = 0;i < 3;i++){
    first_number[i] = getchar();
  }

  operator = getchar();
  
  for(int i = 0;i < 3;i++){
    second_number[i] = getchar();
  }

  getchar();
  
  int first_numberasint = str2int(first_number);
  int second_numberasint = str2int(second_number);

  if(operator == '+'){
    printf("%d", first_numberasint + second_numberasint);
  } else if(operator == '-'){
    printf("%d", first_numberasint - second_numberasint);
  } else if(operator == '*'){
    printf("%d", first_numberasint * second_numberasint);
  } else if(operator == '/'){
    printf("%d", first_numberasint / second_numberasint);
  } else{
    printf("Invalid Operand.");
  }
  printf("\n");
  
  
  }  
}
