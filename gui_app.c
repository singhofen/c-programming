#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"

static void DrawButton(Rectangle button, const char *text, Color color, Vector2 mousePos)
{
    Color buttonColor = CheckCollisionPointRec(mousePos, button) ? LIGHTGRAY : color;
    int textWidth = MeasureText(text, 20);

    DrawRectangleRec(button, buttonColor);
    DrawRectangleLinesEx(button, 2, DARKGRAY);
    DrawText(text, (int)(button.x + button.width / 2 - textWidth / 2), (int)(button.y + 15), 20, BLACK);
}

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    float balance = 1000.00f;
    char amountText[32] = "";
    char message[128] = "Welcome to the ATM";
    int amountLength = 0;
    bool amountBoxActive = true;

    InitWindow(screenWidth, screenHeight, "C Programming - ATM GUI");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        Vector2 mousePos = GetMousePosition();

        Rectangle amountBox = { 210, 180, 250, 45 };
        Rectangle depositButton = { 100, 300, 140, 50 };
        Rectangle withdrawButton = { 260, 300, 140, 50 };
        Rectangle balanceButton = { 420, 300, 160, 50 };
        Rectangle clearButton = { 600, 300, 100, 50 };

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            amountBoxActive = CheckCollisionPointRec(mousePos, amountBox);
        }

        if (amountBoxActive) {
            int key = GetCharPressed();
            while (key > 0) {
                if (((key >= '0' && key <= '9') || key == '.') && amountLength < 31) {
                    amountText[amountLength] = (char)key;
                    amountLength++;
                    amountText[amountLength] = '\0';
                }

                key = GetCharPressed();
            }

            if (IsKeyPressed(KEY_BACKSPACE) && amountLength > 0) {
                amountLength--;
                amountText[amountLength] = '\0';
            }
        }

        if (CheckCollisionPointRec(mousePos, depositButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            float amount = atof(amountText);

            if (amount > 0) {
                balance += amount;
                snprintf(message, sizeof(message), "Deposited $%.2f", amount);
                amountText[0] = '\0';
                amountLength = 0;
            } else {
                snprintf(message, sizeof(message), "Enter an amount greater than zero");
            }
        }

        if (CheckCollisionPointRec(mousePos, withdrawButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            float amount = atof(amountText);

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                snprintf(message, sizeof(message), "Withdrew $%.2f", amount);
                amountText[0] = '\0';
                amountLength = 0;
            } else if (amount > balance) {
                snprintf(message, sizeof(message), "Insufficient funds");
            } else {
                snprintf(message, sizeof(message), "Enter an amount greater than zero");
            }
        }

        if (CheckCollisionPointRec(mousePos, balanceButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            snprintf(message, sizeof(message), "Current balance: $%.2f", balance);
        }

        if (CheckCollisionPointRec(mousePos, clearButton) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            amountText[0] = '\0';
            amountLength = 0;
            snprintf(message, sizeof(message), "Amount cleared");
        }

        BeginDrawing();
            ClearBackground(RAYWHITE);

            DrawText("ATM App", 330, 45, 32, DARKBLUE);
            DrawText(TextFormat("Balance: $%.2f", balance), 100, 120, 24, DARKGRAY);

            DrawText("Amount:", 100, 190, 22, DARKGRAY);
            DrawRectangleRec(amountBox, LIGHTGRAY);
            DrawRectangleLinesEx(amountBox, 2, amountBoxActive ? DARKBLUE : DARKGRAY);
            DrawText(amountText, 225, 192, 22, BLACK);
            if (amountBoxActive && ((GetTime() * 2) - (int)(GetTime() * 2) < 0.5)) {
                DrawRectangle(225 + MeasureText(amountText, 22), 190, 2, 25, DARKBLUE);
            }

            DrawButton(depositButton, "Deposit", GREEN, mousePos);
            DrawButton(withdrawButton, "Withdraw", MAROON, mousePos);
            DrawButton(balanceButton, "Balance", SKYBLUE, mousePos);
            DrawButton(clearButton, "Clear", GRAY, mousePos);

            DrawText(message, 100, 390, 22, MAROON);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
