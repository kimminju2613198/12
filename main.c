
#include <stdio.h>
#include <math.h>

// Define a point structure
struct point {
    int x;
    int y;
};

int main(void) {
    struct point p1, p2;

    int xdiff, ydiff;
    double dist;

    // Get the coordinates of the first point
    printf("input p1 coordinate (x y) : ");
    scanf("%d %d", &p1.x, &p1.y);

    // Get the coordinates of the second point
    printf("input p2 coordinate (x y) : ");
    scanf("%d %d", &p2.x, &p2.y);

    // Calculate the difference between two points
    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    // Calculate the distance between two points
    dist = sqrt(xdiff * xdiff + ydiff * ydiff);

    // Print the distance
    printf("distance : %lf\n", dist);

    return 0;
}
