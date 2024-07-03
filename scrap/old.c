// #include <stdio.h>
// #include <SDL2/SDL.h>
// #include "./constants.h"

// SDL_Window *window = NULL;
// SDL_Renderer *renderer = NULL;
// int game_is_running = FALSE;
// int last_frame_time = 0;


// struct ball {
//     float x;
//     float y;
//     float width;
//     float height;
//     float dx;
//     float dy;
// } ball;

// int initialize_window(void) {
//     if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
//         fprintf(stderr, "Error initializing SDL: %s\n", SDL_GetError());
//         return FALSE;
//     }
//     window = SDL_CreateWindow(
//         "Space Invaders",
//         SDL_WINDOWPOS_CENTERED,
//         SDL_WINDOWPOS_CENTERED,
//         SCREEN_WIDTH,
//         SCREEN_HEIGHT,
//         SDL_WINDOW_SHOWN
//     );
//     if (!window) {
//         fprintf(stderr, "Error creating SDL window: %s\n", SDL_GetError());
//         return FALSE;
//     }
//     renderer = SDL_CreateRenderer(window, -1, 0);
//     if (!renderer) {
//         fprintf(stderr, "Error creating SDL renderer: %s\n", SDL_GetError());
//         return FALSE;
//     }


//     return TRUE;

// }

// void process_input(void) {
//     SDL_Event event;
//     SDL_PollEvent(&event);
//     switch (event.type) {
//         case SDL_QUIT:
//             game_is_running = FALSE;
//             break;
//         case SDL_KEYDOWN:
//             if (event.key.keysym.sym == SDLK_ESCAPE)
//                 game_is_running = FALSE;
//             break;
//     }
// }

// void setup(void) {
//     // Add your setup code here
//     ball.x = 20;
//     ball.y = 20;
//     ball.width = 15;
//     ball.height = 15;
//     ball.dx = 50;
//     ball.dy = 50;
// }

// void update(void) {
//     // sleep the execution until we reach the target frame time in milliseconds (Optional)
//     int time_to_wait = FRAME_TARGET_TIME - (SDL_GetTicks() - last_frame_time);
//     if (time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME) {
//         SDL_Delay(time_to_wait);
//     }

//     float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f; // amount of time elapsed since the last frame

//     last_frame_time = SDL_GetTicks();

//     if (ball.x >= SCREEN_WIDTH - ball.width || ball.x <= 0) {
//         ball.dx *= -1;
//     }
//     if (ball.y >= SCREEN_HEIGHT - ball.height || ball.y <= 0) {
//         ball.dy *= -1;
//     }
//     ball.x += ball.dx * delta_time;
//     ball.y += ball.dy * delta_time;

// }

// void destroy_window(void) {
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();
// }

// void render(void) {
//     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
//     SDL_RenderClear(renderer);
//     // Add the drawing code here

//     SDL_Rect ball_rect = {
//         ball.x,
//         ball.y,
//         ball.width,
//         ball.height,
//     };

//     SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
//     SDL_RenderFillRect(renderer, &ball_rect);


//     SDL_RenderPresent(renderer);

// }

//int main(int argc, char *argv[]) {
    // game_is_running = initialize_window();

    // setup();

    // while (game_is_running) {
    //     process_input();
    //     update();
    //     render();
    // }

    // destroy_window();
    // }