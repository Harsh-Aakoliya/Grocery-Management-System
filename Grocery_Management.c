#include <stdio.h>
#include <time.h>
#include<string.h>

int del(void);
int main()
{
  int n;
  printf("******welcome to discount grocery store******\n");

  printf("how may type of products you want to purchase out of given 6 \n");
  printf("and you dont want to anythings buy press 0\n");

  printf("type 1 for food products\n");
  printf("type 2 for washing products\n");
  printf("type 3 for spices\n");
  printf("type 4 for soft drinks\n");
  printf("type 5 for bakery products\n");
  printf("type 6 for oil bottle\n");

  scanf("%d", &n);
  while (n != 1 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 0)
  {
    printf("press only form 1 to 6\n");
    scanf("%d", &n);
  }
  int b[n], b1[4]={0,0,0,0}, b2[4]={0,0,0,0}, b3[4]={0,0,0,0}, b4[4]={0,0,0,0}, b5[4]={0,0,0,0}, b6[4]={0,0,0,0};
  int add1=0,add2=0,add3=0,add4=0,add5=0,add6=0;
  char com[20];
  if (n == 0)
  {
    printf("why you not want to by anything ?\n");
    scanf("%s",com);
    printf("***your have to pay %d rupees*** \n", 0);
    goto end;
  }

  printf("enter %d type no for which you want to perchase \n", n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &b[i]);
  }
 
  printf("here is your all entered type\n");

  for (int i = 0; i < n; i++)
  {
    if (b[i] == 1)
    {
      printf("1) wheat :- 60 ruppes per kg \n");
      printf("2) rice :- 100 ruppes per kg\n");
      printf("3) corn flour:- 50 ruppes per kg\n");
      printf("4) sugar :- 60 ruppes per kg\n");
      printf("\n");
      printf("now enter how many kg wheat,rice,corn,sugar in sequence you want ?\n");
      for (int j = 0; j < 4; j++)
      {
        scanf("%d\n", &b1[j]);
      }
       
for(int i=0;i<4;i++)
{
 
 add1=60*b1[0]+100*b1[1]+50*b1[2]+60*b1[3];
}
printf("total bill for food produst  is :%d\n",add1);
    }
    else
    {
      if (b[i] == 2)
      {
        printf("1)patanjali soap :- 20 ruppes per piece\n");
        printf("2) surf excel detergent :- 100 ruppes per kg\n");
        printf("3)surf excel matic liquid :- 190 ruppes per litre\n");
        printf("4) lifebuoy handwash :- 50 ruppes per litre\n");
        printf("\n");
        for (int j = 0; j < 4; j++)
      {
        scanf("%d\n", &b2[j]);
      }
       
for(int i=0;i<4;i++)
{
 
 add2=20*b2[0]+100*b2[1]+190*b2[2]+50*b2[3];
}
printf("total bill for washing product  is %d\n",add2);
      }
      else
      {
        if (b[i] == 3)
        {
          printf("1)patanjali iodized namak:- 100 ruppes per kg\n");
          printf("2)mirchi power :- 100 ruppes per kg\n");
          printf("3)dry cloves/laung:- 580 ruppes per kg\n");
          printf("4)taj mahal tea :- 750 ruppes per kg\n");
          printf("\n");
          for (int j = 0; j < 4; j++)
      {
        scanf("%d\n", &b3[j]);
      }
       
for(int i=0;i<4;i++)
{
 
 add3=100*b3[0]+100*b3[1]+580*b3[2]+750*b3[3];
}
printf("total bill for spices is %d\n",add3);
        }
        else
        {
          if (b[i] == 4)
          {
            printf("1)sprite:-65 ruppes per 1.25 litre\n");
            printf("2)coca cola :-65 ruppes per 1.25 litre\n");
            printf("3)mango frooti :- 90 ruppes per litre\n");
            printf("4)pepsi :-50 ruppes per 1.25 litre\n");
            printf("\n");
            for (int j = 0; j < 4; j++)
      {
        scanf("%d\n", &b4[j]);
      }
       
for(int i=0;i<4;i++)
{
 
 add4=65*b4[0]+65*b4[1]+90*b4[2]+50*b4[3];
}
printf("total bill for soft drinks  is %d\n",add4);
          }
          else
          {
            if (b[i] == 5)
            {
              printf("1)sandwich bread:-30 ruppes per small packet\n");
              printf("2)pav bhaji bread :-20 ruppes per dozen\n");
              printf("3)pani puri puri :- 35 ruppes per packet\n");
              printf("4)almond cookies :-250 ruppes per 1.25 dozen\n");
              printf("\n");
              for (int j = 0; j < 4; j++)
      {
        scanf("%d\n", &b5[j]);
      }
       
for(int i=0;i<4;i++)
{
 
 add5=30*b5[0]+20*b5[1]+35*b5[2]+250*b5[3];
}
printf("total bill for backery product is %d\n",add5);
            }
            else
            {
              if (b[i] == 6)
              {
                printf("1) patanjali sunflower :- 60 ruppes per litre\n");
                printf("2) hair oil :- 100 ruppes 500 ml kg\n");
                printf("3) sarsuv oil:- 50 ruppes per 100 ml\n");
                printf("4) ganis pure oil :- 60 ruppes per litre\n");
                printf("\n");
                for (int j = 0; j < 4; j++)
      {
        scanf("%d\n", &b6[j]);
      }
       
for(int i=0;i<4;i++)
{
 
 add6=60*b6[0]+100*b6[1]+50*b6[2]+60*b6[3];
}
printf("total bill for oil is %d\n",add6);
              }
            }
          }
        }
      }
    }
  }
  printf("\n");
int add=add1+add2+add3+add4+add5+add6;
printf("total bill with out discount is %d\n",add);
  printf("\n");
printf("discount is 10 persent \n");
float c=0.9*add;
printf("final bill is %f\n",c);
  printf("\n");
int del1;
del();
del1=del();
printf("final bill is %f \n",c+del1);

  time_t t;
end:


  printf("bill is generated on :");
  time(&t);
  printf("%s", ctime(&t));


}
int del(void)
{
  printf("you want any dellivery if yes then enter 1 else 0\n");
  
float z;
scanf("%f",&z);


if(z==1)
{
 return 50;
}
else
{
return 0;
}
}