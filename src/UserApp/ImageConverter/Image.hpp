#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <cstdlib>
#include <cstring>

typedef unsigned char pixel_t;
typedef unsigned int size_t;

class RawImage {
    private:
        
        /* matrix but use it with the optimized addressing */
        pixel_t *pixels;
        
        size_t x; size_t y;
        
        /* bool copy; */
        bool deallocate;

    public:
        /* TODO: costructor from files */
        
        /* Basic Constructor */
        RawImage(pixel_t *image, size_t x, size_t y, bool copy, bool deallocate /* , */);
        
        /* Default optional paramenters */
        RawImage(pixel_t *image, size_t x, size_t y);

        ~RawImage();
};

class KernelReadableImage {

    private:
        /* TODO: */

    public:
        KernelReadableImage(RawImage *image);
        ~KernelReadableImage();
};


#endif // !IMAGE_HPP