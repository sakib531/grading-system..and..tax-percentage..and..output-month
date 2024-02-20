int main (){
    float a;
    printf ("enter the student's result : ");
    scanf ("%f",&a);
    if (a>0 && a<30000){
        printf ("The tax of the person is : %f" , (a*4)/100);
    }
    else if (a>29999 && a<70001){
        printf ("The tax of the persone is : %f" , (a*10)/100);
    }
    else if (a>70000){
        printf ("The tax of the person is : %f" , (a*15)/100);
    }
    return 0;
}
