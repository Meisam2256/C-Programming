
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
  double balance;
  int i;
  printf("Age %3d month %2d you have $%.21f\n", startAge/12 , startAge%12 ,initial);
  
  balance  = (initial * working.rate_of_return) + working.contribution;
  for( i  = startAge ; i  <= (startAge + working.months) ;  i++){
    printf("Age %3d month %2d you have $%.21f\n", startAge/12,startAge%12 , balance);
  }
  
  balance  = (balance * retired.rate_of_return) + retired.contribution;
  for( i  = (startAge+working.months) ; startAge< (startAge + working.months + retired.months) ; i++){
    printf("Age %3d month %2d you have $%.21f\n", startAge/12, startAge%12,  balance);
  }


  //return ;
  }
  int main(void){
       
    //retirement (initial = 21345);
    //retirement(startAge, initial, working, retired);
    retire_info working ;
    //retire_info startAge;
    //working.initial = 21345;
    working.months = 489;
    working.contribution = 1000;
    working.rate_of_return = 0.045/12;
    //retirement(working, retired);
    //for(working.startAge =0; working.startAge<489;  working.startAge){    
    retire_info retired ;
    retired.months = 384;
    retired.contribution = -4000;
    retired.rate_of_return= 0.01/12;
    retirement(327, 21345 , working, retired);
    return 0;
  }


