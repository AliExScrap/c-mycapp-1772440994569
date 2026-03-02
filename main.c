#include "raylib.h"

int main(void) {
    // Initialisation de la fenêtre (Largeur, Hauteur, Titre)
    InitWindow(400, 300, "Mon Interface en C");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE); // Couleur de fond
            
            DrawText("Salut ! C'est une interface.", 50, 50, 20, DARKGRAY);
            
            // Un "bouton" simple
            if (CheckCollisionPointRec(GetMousePosition(), (Rectangle){ 100, 150, 200, 50 })) {
                DrawRectangle(100, 150, 200, 50, SKYBLUE);
                if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                    // Action au clic
                }
            } else {
                DrawRectangle(100, 150, 200, 50, LIGHTGRAY);
            }
            DrawText("CLIQUE ICI", 145, 165, 20, WHITE);
            
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
