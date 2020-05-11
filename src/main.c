#include <stdio.h>
#include <SDL.h>

int main(int argc, char **argv)
{
	SDL_version SDLver;
	SDL_VERSION(&SDLver);
	printf("Test SDL %d.%d.%d\n", SDLver.major, SDLver.minor, SDLver.patch);
	return 0;
}