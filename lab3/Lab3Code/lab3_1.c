#include <stdio.h>
int main() {
    int Input1 ;
    float Input2 ;
    char Input3 ;

    printf ( "Please enter value : " ) ;
    scanf ( "%d %f %c", &Input1, &Input2, &Input3 ) ;
    printf ( "%d %.2f %c", Input1, Input2, Input3 ) ;
    
    return 0 ;
}