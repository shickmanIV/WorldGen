
#include <math.h>

typedef struct vector2
{
    float x;
    float y;
} Vector2;

typedef struct tile
{

} Tile;

float dotProduct(Vector2 v1, Vector2 v2);

float getMagnitude(Vector2 vector);

Vector2 unitVector(Vector2 vector);