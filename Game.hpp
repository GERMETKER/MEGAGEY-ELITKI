#ifndef GAME_HPP
#define GAME_HPP

#include "Scene.hpp"

class Game
{
public:
	Game();

	//загрузка начального состояния игры
	void Init();
	//основной игровой цикл
	void Play();

	//сохранение игровой сессии
	void Shutdown();
private:
	Scene scene;
};



#endif