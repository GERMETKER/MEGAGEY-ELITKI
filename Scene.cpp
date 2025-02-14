#include "Scene.hpp"

Scene::PlacedObj::PlacedObj(Game_obj* obj, Coord place)
	:obj_(obj), coord_(place)
{}

bool Scene::PlacedObj::Interract(const PlacedObj& other) const
{
	return coord_ == other.coord_;
}

Coord Scene::PlacedObj::Where() const
{
	return coord_;
}

Game_obj* Scene::PlacedObj::Who() const
{
	return obj_;
}

void Scene::PlacedObj::SetCoord(Coord newPlace)
{
	coord_ = newPlace;
}

int Scene::Size() const
{
	return placed_.size();
}

void Scene::Add(Game_obj* obj, Coord place)
{
	placed_.emplace_back(obj, place);
}

Scene::PlacedObj& Scene::operator[](int i)
{
	auto start = placed_.begin();
	for (int k = 0; k < i; i++)
	{
		++start;
	}
	return *start;
}


