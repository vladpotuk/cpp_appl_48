#include <iostream>


struct Rectangle {
    int width;
    int height;
    int x;
    int y;
};


void moveRectangle(Rectangle& rect, int dx, int dy) {
    rect.x += dx;
    rect.y += dy;
}


void resizeRectangle(Rectangle& rect, int newWidth, int newHeight) {
    rect.width = newWidth;
    rect.height = newHeight;
}


void printRectangle(const Rectangle& rect) {
    std::cout << "Rectangle: Width=" << rect.width << ", Height=" << rect.height
        << ", Position=(" << rect.x << ", " << rect.y << ")\n";
}

int main() {
   
    Rectangle myRectangle = { 10, 5, 0, 0 };

    
    printRectangle(myRectangle);

  
    moveRectangle(myRectangle, 2, 3);
    printRectangle(myRectangle);

    
    resizeRectangle(myRectangle, 15, 7);
    printRectangle(myRectangle);

    return 0;
}

