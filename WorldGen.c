
#include "WorldGen.h"

float dotProduct(Vector2 v1, Vector2 v2)
{   
    return v1.x * v2.x, v1.y * v2.y;
}

float getMagnitude(Vector2 vector)
{
    return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
}

Vector2 unitVector(Vector2 vector)
{
    float magnitude = getMagnitude(vector);
    Vector2 result = { vector.x / magnitude, vector.y / magnitude};
    return result;
}