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
  printf("����Ų30 Game\n\n");
  scanf("%d",&menu);

  switch(menu)
  {
  case 1:
   system("cls"); 
   printf("<< ���ӽ��� >>\n");
   while(1)
   {
    printf("����� >> �� ����(1~3) : "); 
    scanf("%d",&me);

    if(me>=1 &&<=3) 
    {
     for(i=1;i<=me;i++) // 
     {
      if(baskin<=30) 
       printf("%d \n",baskin); 
      if(baskin==30)  
      {
       printf("����� �����ϴ�\n");
       lose++;
      }
      printf("\n");
      baskin++;
     }
     computer=rand()%3+1; 
     printf("��ǻ�� >> �� ����(1~3) : %d\n",computer);
     for(i=1;i<=computer;i++) 
     {
      if(baskin<=30) 
       printf("%d\n",baskin);
      if(baskin==30)
      {
       printf("����� �̰���ϴ�\n");
       win++; 
      }
      printf("\n");
      baskin++; 
     }
    }

     else  
     printf("1~3 ������ ���ڸ� �Է��ϼ���\n");
    if(baskin>30)  
     break;
      return 0;
   } 
}


