#include "global_header.h"

void primitives_generate_cube(VECTOR *vertices, VECTOR *colours, VECTOR *coordinates, int *points, int (*vector_count), int (*points_count), float height, float width, float depth, int x, int y, int z) {
    
    points[(*points_count)++] = *vector_count + 0;
    points[(*points_count)++] = *vector_count + 1;
    points[(*points_count)++] = *vector_count + 2;
    points[(*points_count)++] = *vector_count + 1;
    points[(*points_count)++] = *vector_count + 2;
    points[(*points_count)++] = *vector_count + 3;
    points[(*points_count)++] = *vector_count + 4;
    points[(*points_count)++] = *vector_count + 5;
    points[(*points_count)++] = *vector_count + 6;
    points[(*points_count)++] = *vector_count + 5;
    points[(*points_count)++] = *vector_count + 6;
    points[(*points_count)++] = *vector_count + 7;
    points[(*points_count)++] = *vector_count + 8;
    points[(*points_count)++] = *vector_count + 9;
    points[(*points_count)++] = *vector_count + 10;
    points[(*points_count)++] = *vector_count + 9;
    points[(*points_count)++] = *vector_count + 10;
    points[(*points_count)++] = *vector_count + 11;
    points[(*points_count)++] = *vector_count + 12;
    points[(*points_count)++] = *vector_count + 13;
    points[(*points_count)++] = *vector_count + 14;
    points[(*points_count)++] = *vector_count + 13;
    points[(*points_count)++] = *vector_count + 14;
    points[(*points_count)++] = *vector_count + 15;
    points[(*points_count)++] = *vector_count + 16;
    points[(*points_count)++] = *vector_count + 17;
    points[(*points_count)++] = *vector_count + 18;
    points[(*points_count)++] = *vector_count + 17;
    points[(*points_count)++] = *vector_count + 18;
    points[(*points_count)++] = *vector_count + 19;
    points[(*points_count)++] = *vector_count + 20;
    points[(*points_count)++] = *vector_count + 21;
    points[(*points_count)++] = *vector_count + 22;
    points[(*points_count)++] = *vector_count + 21;
    points[(*points_count)++] = *vector_count + 22;
    points[(*points_count)++] = *vector_count + 23;

    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x,  height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x,  height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],     (VECTOR){  1.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x, -height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],     (VECTOR){  0.00f,   1.00f,  0.00f, 0.00f });

    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x, -height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x,  height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x,  height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   0.00f,  0.00f, 0.00f });

    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x, -height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x, -height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x,  height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   0.00f,  0.00f, 0.00f });

    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x,  height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x,  height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x,  height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   1.00f,  0.00f, 0.00f });

    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x, -height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x, -height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x, -height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   1.00f,  0.00f, 0.00f });

    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x, -height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x,  height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x,  height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   0.00f,  0.00f, 0.00f });
    
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x, -height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x, -height + y,  depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x,  height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   0.00f,  0.00f, 0.00f });
    
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x,  height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   0.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){ -width + x, -height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  0.00f,   1.00f,  0.00f, 0.00f });
    vector_copy(vertices[(*vector_count)],        (VECTOR){  width + x, -height + y, -depth + z, 1.00f });
    vector_copy(colours[(*vector_count)],         (VECTOR){  1.00f,   1.00f,  1.00f, 1.00f });
    vector_copy(coordinates[(*vector_count)++],   (VECTOR){  1.00f,   1.00f,  0.00f, 0.00f });
    
  
  }
