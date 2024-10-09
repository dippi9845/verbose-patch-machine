#include "ImageConverter/Image.hpp"
/* import fake kernel */

int main() {
    size_t x = 100; size_t y = 100;

    pixel_t * fancy_image = (pixel_t *) malloc(sizeof(size_t) * 100 * 100);

    
    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            
            /* */
        }
        /* */
    }
    
    
    
    RawImage to_sew = RawImage(fancy_image, x, y);

    KernelReadableImage converted = KernelReadableImage(&to_sew);

    /* use a fake class to see how it goes */

    return 0;
}