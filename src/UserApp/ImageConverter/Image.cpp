#include "Image.hpp"

RawImage::RawImage(pixel_t *image, size_t x, size_t y, bool copy, bool deallocate) {
    if (copy) {
        memcpy(this->pixels, image, x * y * sizeof(pixel_t));
    }
    else {
        this->pixels = image;
    }
    
    this->x = x;
    this->y = y;
    this->deallocate = deallocate;

}

RawImage::RawImage(pixel_t *image, size_t x, size_t y)
{
    RawImage(image, x, y, false, false);
}

RawImage::~RawImage() {
    if (this->deallocate) {
        free(this->pixels);
    } 
}