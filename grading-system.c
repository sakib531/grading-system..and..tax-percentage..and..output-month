int main (){
    float a;
    printf ("enter the student's result : ");
    scanf ("%f",&a);
    if (a>89 && a<101){
        printf ("The grade of the student is : 'A+'");
    }
    else if (a>79 && a<90){
        printf ("The grade of the student is : 'A'");
    }
    else if (a>74 && a<80){
        printf ("The grade of the student is : 'A-'");
    }
    else if (a>60 && a<75){
        printf ("The grade of the student is : 'B+'");
    }
    else if (a>64 && a<70){
        printf ("The grade of the student is : 'B'");
    }
    else if (a>59 && a<65){
        printf ("The grade of the student is : 'C'");
    }
    else if (a<60){
        printf ("The grade of the student is : 'F'");
    }
    return 0;
}

