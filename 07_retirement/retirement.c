#include <stdlib.h>
#include <stdio.h>

struct _retire_info{
  int months;//number of the months
  double contribution;//how many dollars are contributed from the account per month
double rate_of_return;// rate of return which is for after inflation
};
typedef struct _retire_info retire_info;

void retirement(int startAge,// in months
                double initial,// initial savings in dollars,
                retire_info working,//info about working
                retire_info retired //info about being retired
                ){
  double balance = initial;
  int i=1;
  printf("Age %3d month %2d you have $%.2f\n", (startAge/12) , (startAge%12) ,balance);

  for( i  = startAge + i  ; i  <= (startAge + working.months) ;  i++){
    balance  += ((balance * working.rate_of_return) + working.contribution) ;
    printf("Age %3d month %2d you have $%.2f\n", i/12, i%12 , balance);
  }

  for( i  = (startAge + working.months+1) ;  i < (startAge + working.months + retired.months) ; i++){
  
    balance  += ((balance * retired.rate_of_return) + retired.contribution);
    printf("Age %3d month %2d you have $%.2f\n", i/12, i%12,  balance);
  }

}
int main(void){
  retire_info working ;
   
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = (0.045/12);
 
  retire_info retired ;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return= (0.01/12);
  retirement(327, 21345 , working, retired);
  return 0;
}
