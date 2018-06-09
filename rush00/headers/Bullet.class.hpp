#ifndef BULLET_HPP
#define BULLET_HPP

#include "GameEntity.class.hpp"

class Bullet: public GameEntity {
public:
    Bullet(void);
    Bullet(Bullet const &_new);
    Bullet(std::string display);
    ~Bullet(void);
    Bullet &operator=(Bullet const &_rhs);
    // Bullet(void);
	// Bullet(int x, int y);
	// Bullet(Bullet const & src);
	// ~Bullet();
	// using GameEntity::operator=;
	// bool	move( int );
	//bool colision(GameEntity const & elem);
};

#endif
