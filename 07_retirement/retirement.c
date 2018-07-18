
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
  balance  = (initial * working.rate_of_return) + working.contribution;
  if(startAge%12 == 0){
  printf("Age %3d month %2d you have $%.21f\n", startAge,0,  balance);
}
  else{
    int Num_Month = startAge%12;
  printf("Age %3d month %2d you have $%.21f\n", startAge,Num_Month,  balance);
    
  }
}
  int main(){
    int startAge = 327;
    int initial = 21345;
  
  }
