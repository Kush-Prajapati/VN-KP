
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    
    float i1;
    float i2;
    float i3;
    float i4;
    
} input;

typedef struct {
    
    float o1;
    float o2;
    float o3;
    float o4;
    
} output;


int main(int argc, const char * argv[]) {

    printf("00002a\n");
    
    bool result = false;
    
    input input1 = {};
   // output output1 = {};
    
    if (input1.i1 > 1 && input1.i2 > 1) {
        
        result = true;
        
        output output1 = {1, 1, 0.5, 0.5};
        
    } else if (input1.i2 > 1 && input1.i4 > 1) {
        
        output output1 = {0.5, 0.5, 1, 1};
        
    }
    
    printf("%d\n", result);
    
    return 0;
}
