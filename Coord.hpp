#ifndef COORD_HPP
#define COORD_HPP


#include <iostream>
#include <type_traits>

class Coord
{
public:
	Coord();
	Coord(int x, int y, int z);
	
	int GetX()const;
	void SetX(int x);

	int GetY()const;
	void SetY(int y);

	int GetZ()const;
	void SetZ(int z);

	friend bool operator==(const Coord& lsv, const Coord& rsv);
	friend bool operator!=(const Coord& lsv, const Coord& rsv);

	size_t hash()const;

	friend std::ostream& operator<<(
		std::ostream& out,
		const Coord& rsv);
	friend std::istream& operator<<(
		std::istream& in,
		const Coord& rsv);

private:
	int x_;
	int y_;
	int z_;

};


#endif

