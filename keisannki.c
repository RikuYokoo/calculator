#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PL 3.1415926

int main(){
  double rst, x, y, i, ang, n;
  char sw , ka;/*swは演算子kaは関数*/
  printf("関数モードに切り替えるときは'f'を四則演算に戻すときは'a'を終了するときは'e'を入力してください。\n");
  printf("関数モード時sinなら's'をcosなら'c'をtanなら't'を角度の前に入力してください。\n");
  printf("start\n");

  scanf("%lf", &x);

  while(1){
    while(1){
    scanf("%c", &sw);
    if(sw == '\n')
      scanf("%c", &sw);
    if(sw == 'f'){
      printf("関数モードです\n");
      break;
    }
    if(sw == 'e'){
      printf("end\n");
      exit(0);
    }

    scanf("%lf", &y);
  switch (sw){
    case '+':
    x = x + y;
    printf("%.3lf\n", x);
    break;
  case '-':
    x = x - y;
    printf("%.3lf\n", x);
    break;
  case '*':
    x = x * y;
    printf("%.3lf\n", x);
    break;
  case '/':
    x = x / y;
    printf("%.3lf\n", x);
    break;
  default:
    printf("計算できません\n");
    break;
  }
  printf("%lf", x);
    }
    printf("%lf", x);
      while(1){
        scanf("%c", &sw);
        if(sw == '\n'){
          scanf("%c", &sw);
    }
        if(sw == 'a'){
          printf("四則演算\n");
          break;
        }
        if(sw == 'e'){
          printf("end\n");
          exit(0);
        }
        scanf("%c", &ka);
        scanf("%lf", &ang);
        if(ka == 's'){
          rst = sin(ang);
          y = sin(ang * PL/180.0);
          printf("sin%.1lf(deg) = %.3lf\n", ang, y);
    }
        else if(ka == 'c'){
          rst = cos(ang);
          y = cos(ang * PL/180.0);
          printf("cos%.1lf(deg) = %.3lf\n", ang, y);
    }
      else if (ka == 't'){
      while (1){
        if (ang == 90 || ang == 270){
          i = ang;
          ang = 0;
          printf("tan%.lfは存在しません。\nもう一度角度を入力してください。\ntan", i);
          scanf("%lf", &ang);
    }
      else break;
    }
      rst = tan(ang);
      y = tan(ang * PL/180.0);
      printf("tan%.1lf(deg) = %.3lf\n", ang, y);
  }
  else {
      printf("s, c, t以外入力しないでください。\nもう一度演算子から入力してください。\n");
      continue;
  }
  switch (sw){
    case '+':
    printf("%.3lf + %.3lf =", x, y);
    x = x + y;
    printf("%lf\n", x);
    break;
  case '-':
    printf("%.3lf - %.3lf =", x, y);
    x = x - y;
    printf("%lf\n", x);
    break;
  case '*':
    printf("%.3lf * %.3lf =", x, y);
    x = x * y;
    printf("%lf\n", x);
    break;
  case '/':
    printf("%.3lf / %.3lf =", x, y);
    x = x / y;
    printf("%lf\n", x);
    break;
  default:
    printf("計算できません。\n");
  }
  printf("%lf", x);
 }
  printf("%f", x);


}
}
