
#include <stdio.h>
#include <stdbool.h>

bool neuone(bool signal);

typedef struct {
    
    bool alpha;
    bool beta;
    bool gamma;
//    float delta;
    
} io;

int main(int argc, const char * argv[]) {

    printf("00005a\n");
    
    bool result = false;
    
 //   io input = {};
    
    printf("%d\n", result);
    
    return 0;
}

void wire(bool signal, int destinations) {
    
    switch (destinations) {
        
        case '1':
        neuone(signal);
        break;
    }
    

}

bool neuone(bool signal) {
    
    return signal;
}
