#pragma once
#include <SDL.h>

class Collision
{
public:
	//Check X & y of each pos and check if they is a collision
	static bool AABB(const SDL_Rect& recA, const SDL_Rect& recB);
};