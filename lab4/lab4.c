#include <stdio.h>

int main() {
    char employees_id[10] ;
    int hour ;
    float amount ;
    float baht ;
    printf( "Input the Employees ID (Max. 10 chars) : " ) ;
    scanf( "%s", &employees_id ) ;
    printf( "Input the working hrs : " ) ;
    scanf( "%d", &hour ) ;
    printf( "Salary amount/hr (baht) : " ) ;
    scanf( "%f", &amount ) ;

    baht = hour * amount ;

    printf( "Expected Output : \n" ) ;
    printf( "Employees ID : %s \n", employees_id ) ;
    printf( "Expected Output : %.2f Baht(s) \n", baht ) ;
    return 0 ;
}