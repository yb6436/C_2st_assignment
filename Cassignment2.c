#include <stdio.h>
#include <stdlib.h>
int main()
{
 int menu,i;
 int computer;
 int me;
 int baskin=1;

 int win=0,lose=0;

 srand(time(NULL));
 rand();

 while(1)
 {
  printf("베스킨30 Game\n\n");
  scanf("%d",&menu);

  switch(menu)
  {
  case 1:
   system("cls"); 
   printf("<< 게임시작 >>\n");
   while(1)
   {
    printf("사용자 >> 수 선택(1~3) : "); 
    scanf("%d",&me);

    if(me>=1 &&<=3) 
    {
     for(i=1;i<=me;i++) // 
     {
      if(baskin<=30) 
       printf("%d \n",baskin); 
      if(baskin==30)  
      {
       printf("당신이 졌습니다\n");
       lose++;
      }
      printf("\n");
      baskin++;
     }
     computer=rand()%3+1; 
     printf("컴퓨터 >> 수 선택(1~3) : %d\n",computer);
     for(i=1;i<=computer;i++) 
     {
      if(baskin<=30) 
       printf("%d\n",baskin);
      if(baskin==30)
      {
       printf("당신이 이겼습니다\n");
       win++; 
      }
      printf("\n");
      baskin++; 
     }
    }

     else  
     printf("1~3 사이의 숫자를 입력하세요\n");
    if(baskin>30)  
     break;
      return 0;
   } 
}


