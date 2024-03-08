#include<stdio.h>
int i =0;


void welcome(char name[])
{
    printf(" welcome %s in momentum ", name+0 );
}


void motivation_quote()
{
    printf("\n \nkeep going");
}

void information_team(int number)
{
  if(number == 0)
  {
      printf("\n\n name: oamr helmy \n level: 100 \n joined: 2/2/2024 \n department: CCE");
  }
  else if(number == 1)
  {
      printf("\n\n name: ahmed  \n level: 100 \n joined: 2/2/2024 \n department: BME");
  }
  else if(number == 2)
  {
      printf("\n\n name: sadek  \n level: 100 \n joined: 2/2/2024 \n department: AIE");
  }
   else if(number == 3)
  {
      printf("\n\n name: mohamed  \n level: 100 \n joined: 2/2/2024 \n department: MTE");
  }
}


void id(int userId ,char name[])
{
   int data_id[] = {11,22,33,44};

   for(i=0; i<4 ;i++)
    {
       if(data_id[i] == userId)
         {
            welcome(name);
            information_team(i);
            motivation_quote();
            return ;
        }
   }

    printf("“wrong data”");

}

int main()
{
   int user_id ;
   char name[15] ;

   printf("\n enter your name: ");
   gets(name);

   printf(" enter your id: ");
   scanf("%d",&user_id);

   id(user_id , name);


}
