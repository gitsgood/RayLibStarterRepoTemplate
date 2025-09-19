#include <raylib.h>
#include <iostream>

using namespace std;

void main()
{
	InitWindow(500, 500, "My first window?");
	Vector2 point1 = { 100, 300 };
	Vector2 point2 = { 300,300 };
	Vector2 point3 = { 200,100 };

	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(RED);

		DrawTriangle(point1, point2, point3, BLACK);


		EndDrawing();
	}

	CloseWindow();
}