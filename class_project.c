#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



char final_order;
int f;



int main(){
  printf("THIS IS THE MENU FOR TODAY SIR/MA\n");
  printf("Press  P  for Poundo yam with Edinkaikon Soup which goes for : N3,250\n");
  printf("Press F for Fried Rice  and juicy Chicken which goes for : N2,000\n");
  printf("Press A for Amala and Ewedu which goes for : N3,500\n");
  printf("press E for Eba and Egusi Soup which goes for : N2,000\n");                       
  printf("Press W for White Rice and Meat Stew which goes for : N1,500\n");
 
do{
  printf("Please place your order\n");
  scanf("%s", &order);
  switch(order){
    case 'P':
       printf("How many portions do you want please :\n");
       scanf("%d",&q);
       printf("your order: Poundo Yam/Edinkaiko Soup\n");
       printf("quantity: %d\n",q);
       printf("Your total is %d\n",q*3250);
       printf("Gracias Amigos, please do come back\n");
       break;
    case 'F':
        printf("How many portions do you want please: \n");
        scanf("%d",&q);
        printf("your order: Fried Rice and Juicy Chicken\n");
        printf("quantity: %d\n",q);
        printf("Your total is %d\n",q*2000);
        printf("Gracias Amigos, please do come back\n");
        break;
    case 'A':
           printf("How many portions do you want please: \n");
           scanf("%d",&q);
           printf("your order: Amala and Ewedu \n");
           printf("quantity: %d\n",q);
           printf("Your total is %d\n",q*3500);
           printf("Gracias Amigos, please do come back\n");
           break;
    case 'E':
           printf("How many portions do you want please: \n");
           scanf("%d",&q);
           printf("your order: Eba and Egusi Soup\n");
           printf("quantity: %d\n",q);
           printf("Your total is %d\n",q*2000);
           printf("Gracias Amigos, please do come back\n");
           break;
    case 'W':
           printf("How many portions do you want please: \n");
           scanf("%d",&q);
           printf("your order: White Rice and Meat Stew\n");
           printf("quantity: %d\n",q);
           printf("Your total is %d\n",q*1500);
           printf("Gracias Amigos, please do come back\n");
           break;
    case 'C':
           exit(1);
    default:
          printf("It is currently not available right now\n");
          exit(1);

  }
}while(order!='C');



  return 0;
  }