
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    
    bool alpha;
    bool beta;
    bool gamma;
//    float delta;
    
} io;

int main(int argc, const char * argv[]) {

    printf("00004a\n");
    
    bool result = false;
    
 //   io input = {};
    
    printf("%d\n", result);
    
    return 0;
}

io neuone(io input) {
    
    io out = {};
    
    if (input.alpha && input.beta && input.gamma) {
        
        out = (io) {false, true, false};
        
    } else {
        
        out = (io) {true, false, true};
        
    }
    
    return out;
}
