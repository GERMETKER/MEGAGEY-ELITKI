#ifndef SCENE_HPP
#define SCENE_HPP

#include <List>
#include "Game_obj.hpp"
#include "Coord.hpp"

class Scene
{
	class PlacedObj;
public:
	
	int Size()const;
	void Add(Game_obj* obj, Coord place);

	int Find(Coord place_obj)const;
	void Remove(int index);

	PlacedObj& operator[](int i);

private:

	class PlacedObj
	{
	public:
		PlacedObj(Game_obj* obj, Coord place);
		/*~PlacedObj();
		PlacedObj(const PlacedObj& other);
		PlacedObj& operator=(const PlacedObj& other);*/
		//Правило трёх обеспечивает корректное хранение и перенос данных в поле obj_

		bool Interract(const PlacedObj& other)const;

		Coord Where()const;
		Game_obj* Who()const;

		void SetCoord(Coord newPlace);
	private:
		Game_obj* obj_;
		Coord coord_;
	};

	std::list<PlacedObj> placed_;
};



#endif
