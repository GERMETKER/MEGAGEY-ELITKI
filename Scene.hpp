#ifndef SCENE_HPP
#define SCENE_HPP

#include <List>
#include "Game_obj.hpp"
#include "Coord.hpp"

class Scene
{
public:
	
private:
	class PlacedObj
	{
	public:
		PlacedObj(Game_obj* obj, Coord place);


		Coord Where()const;
		Game_obj* Who()const;
	private:
		Game_obj *obj_;
		Coord coord_;
	};

	std::list<PlacedObj> placed_;
};



#endif
