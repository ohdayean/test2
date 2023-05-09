#include <stdio.h>

main(){
  
  int a;
  printf("1: 100에서90 2: 90에서80 3: 80에서70 4: 70에서60 5: 60에서50 6: 50점 이하\n");
  
  printf("자신의 점수를 숫자로 입력해주세요.");
  scanf("%d" , &a);

  if(a==1)
    printf("당신의 학점은 A입니다!!!!!!!!! 축하합니다^^");
 else if(a==2)
   printf("당신의 학점은 B입니다!!!!!!!");
  else if(a==3)
    printf("당신의 학점은 C입니다!!!!");
  else if(a==4)
    printf("당신의 학점은 D입니다!!!");
  else if(a==5)
    printf("당신의 학점은 F입니다!");
  else if(a==6)
      printf("공부를 좀 해보시는 게 어떨까용?");
}