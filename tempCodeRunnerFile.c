#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct payement
{
  int month;
  int day;
  int year;
} p;
typedef struct costumdata
{
    int customerid;
  char customername[10];
  char street[10];
  char city[10];
  int contact;
  char accountnum[10];
  float oldbalance;
  float currentpayement;
  int newbal;
  struct payement pd;
} cd;
int
main ()
{
  int n=1;
  
  
  cd c[n];
  for (int i = 0; i < n; i++)
    {
      scanf("%d",&c[i].customerid);
      scanf ("%s", c[i].customername);
      scanf ("%s", c[i].street);
      scanf ("%s", c[i].city);
      scanf ("%d", &c[i].contact);
      scanf ("%s", c[i].accountnum);
      scanf ("%f", &c[i].oldbalance);
      scanf ("%f", &c[i].currentpayement);

      scanf ("%d%d%d", &c[i].pd.month, &c[i].pd.day, &c[i].pd.year);
      
    }
  for (int i = 0; i < n; i++)
    {
      
printf("%d",c[i].customerid);
      sprintf("%s", c[i].customername);
      printf ("%s", c[i].street);
      printf ("%s", c[i].city);
      printf ("%d", c[i].contact);
      printf ("%s", c[i].accountnum);
      printf ("%.2f", c[i].oldbalance);
      printf ("%.2f", c[i].currentpayement);
      
      printf("%d\n%d\n%d", c[i].pd.month, c[i].pd.day, c[i].pd.year);

    }


}
