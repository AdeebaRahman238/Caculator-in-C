#include <stdio.h>
#include <math.h>

double division(double,double);
double modulus(int,int);
void print_menu();

int main() {
    int choice;
    double first, second, result;

    while(1) {
        print_menu();
        scanf("%d", &choice);
             if (choice == 7){
                 printf("\n  Exit ʕ⁠´⁠•⁠ᴥ⁠•⁠`⁠ʔ\n");
             break;
             }

        if (choice < 1 || choice > 7){
            fprintf(stderr,"\n ~ (⁠╥⁠﹏⁠╥⁠) Invalid Menu Choice. ⚠️\n");
            continue;
        }

      printf("\n ๑ Please Enter The First Number:~");
      scanf("%lf", &first);
      printf("\n ๑ Now Enter The Second Number:~");
      scanf("%lf", &second);

      switch (choice)
      {
      case 1: // Add
         result = first + second; 
         break;
      case 2: // Sub 
         result = first - second; 
         break;
      case 3: // Mul
         result = first * second; 
         break;
      case 4: // Div
         result = division(first, second);
         break;
      case 5: // Mob
         result = modulus(first, second); 
         break;
      case 6: // Pow
         result = pow(first,second); 
         break;    
      }
      if (!isnan(result)) {
   printf("\n ~ Result Of Operation Is: %.2f ⁠✧", result);
    }
    };
    return 0;
}

    double division(double a, double b){
        if (b == 0){
            fprintf(stderr, "\n ~ Invalid Input for Division! ⚠️");
            return NAN;
        }else{
            return a / b;
        }
     }
double modulus(int a, int b){
        if (b == 0){
            fprintf(stderr, "\n ~ Invalid Input for Modulus! ⚠️");
            return NAN;
        }else{
            return a % b;
        }
     }

void print_menu(){
    printf("\n\n-------------------------------------------------");
    printf("\n\n WELCOME TO CALCU-MASTER (⁠◍⁠•⁠ᴗ⁠•⁠◍⁠)★");
    printf("\n------------------------------------");
    printf("\n\n  ~ Please Enter Your Choice Below: ✨  ~");
    printf("\n--------------------------------------------");
    printf("\n\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit ʕ⁠´⁠•⁠ᴥ⁠•⁠`⁠ʔ\n");
    printf("\n ~ (⁠◕⁠‿⁠⁠◕) Please Enter Your Choice :~");

}