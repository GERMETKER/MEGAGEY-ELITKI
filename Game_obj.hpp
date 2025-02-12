#ifndef GAME_OBJ_HPP
#define GAME_OBJ_HPP

#include <iostream>
#include "Coord.hpp"
#include "Status.hpp"
#include "Controller.hpp"

class Game_obj
{
public:
	virtual ~Game_obj() = default;

	virtual bool Isharmable()const = 0;
	virtual void Action(int tick) = 0;
	virtual Coord Move() = 0;
	virtual void Modify(Game_obj& obj) = 0;
	virtual void TakeHarm(int amount) = 0;
	virtual Status *GetStatus() = 0;

private:
	Controller* controller_;
};

#endif