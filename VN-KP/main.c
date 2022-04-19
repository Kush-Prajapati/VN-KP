
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    
    float alpha;
    float beta;
    float gamma;
    float delta;
    
} io;

int main(int argc, const char * argv[]) {

    printf("00003a\n");
    
    bool result = false;
    
    io input = {};
    
    if (input.alpha > 1 && input.beta > 1) {
        
        result = true;
        
        io output = {1, 1, 0.5, 0.5};
        
    } else if (input.gamma > 1 && input.delta > 1) {
        
        io output = {0.5, 0.5, 1, 1};
        
    }
    
    printf("%d\n", result);
    
    return 0;
}

io neu1(io input) {
    
    
    return input;
}
