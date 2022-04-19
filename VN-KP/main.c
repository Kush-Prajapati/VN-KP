
#include <stdio.h>

int main(int argc, const char * argv[]) {

    printf("00001a\n");
    
    float primary = 0.0;
    float secondary = 0.0;
    float out = 0.0;
    
    int i;
    for (i = 0; i < 10; i++) {
        
        if (out == 0){
            out = ++primary * ++secondary;
        } else {
            out *= 3.14;
        }
       
        
    }
    printf("%f\n", out);
    
    return 0;
}
