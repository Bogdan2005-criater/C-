#include <stdio.h>
int task1(){
  printf("Hello World\n");
  return 0;
}
int task2(){
  printf("Let's\n");
  printf("go\n");
  printf("to walk\n");
  return 0;
}
int task3(){
  printf(" *\n");
  printf("***\n");
  printf("*****\n");
  return 0;
}
int task4(){
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if ((i + j) % 2 == 0) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}


int main() {
  printf("Задание Первое:\n");
  task1();
  printf("Задание Второе:\n");
  task2();
  printf("Задание Третье:\n");
  task3();
  printf("Задание Четвёртое:\n");
  task4();
  return 0;
}

