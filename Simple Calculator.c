#include <stdio.h>
#include <math.h>
void print_menu();
double division(double,double);
double modulus(int,int);
int main(){
    int choice;
    double first,second,result;
    while(1){
        print_menu();
        scanf("%d",&choice);
        if(choice==7){
        break;
        }
        if(choice<1 || choice>7){
            fprintf(stderr,"Invalid Choice");
            continue;
        }
        printf("Enter First Number:");
        scanf("%lf",&first);
        printf("Enter Second Number:");
        scanf("%lf",&second);
        switch(choice){
            case 1://add
                result=first+second;
                break;
            case 2://subtract
                result=first-second;
                break;
            case 3://multiply
                result=first*second;
                break;
            case 4://divide
                result=division(first,second);
                break;
            case 5://modulus
                result=modulus(first,second);
                break;
            case 6://power
                result=pow(first,second);
                break;
            }
        if(!isnan(result)){
            printf("Result of operation is : %.2lf",result);
        }
    };
    return 0;
}
void print_menu(){
    printf("\n----------------------------------------------------------------------------");
    printf("\nWelcome To The Simple But Intelligent Calculator\n");
    printf("\nChoose any one option from the following options :");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Divide");
    printf("\n5.Modulus");
    printf("\n6.Power");
    printf("\n7.Exit");
    printf("\nEnter Your Choice(1-7):");
}
double division(double a,double b){
    if(b==0){
        fprintf(stderr,"Invalid argument for division");
        return NAN;
    }
    else{
        return a/b;
    }
}
double modulus(int a,int b){
    if(b==0){
        fprintf(stderr,"Invalid argument for modulus");
        return NAN;
    }
    else{
        return a%b;
    }
}