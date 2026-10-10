#include <stdio.h>
#include "raylib.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "C Programming - Raylib GUI");
    SetTargetFPS(60);

    int clickCount = 0;

    while (!WindowShouldClose()) {
        Vector2 mousePos = GetMousePosition();
        Rectangle buttonRect = { (float)screenWidth/2 - 100, (float)screenHeight/2 - 25, 200, 50 };
        
        bool mouseOver = CheckCollisionPointRec(mousePos, buttonRect);
        
        if (mouseOver && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            clickCount++;
        }

        BeginDrawing();
            ClearBackground(RAYWHITE);

            DrawText("Welcome to Raylib in C!", 220, 80, 20, DARKGRAY);

            DrawRectangleRec(buttonRect, mouseOver ? LIGHTGRAY : DARKGRAY);
            DrawText("Click Me!", screenWidth/2 - 45, screenHeight/2 - 10, 20, WHITE);

            char counterText[50];
            snprintf(counterText, sizeof(counterText), "Button Clicks: %d", clickCount);
            DrawText(counterText, screenWidth/2 - 80, screenHeight/2 + 60, 20, MAROON);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}