#include "../headers/Bullet.class.hpp"

Bullet::Bullet(void):GameEntity(){
    this->_display = "*";
    return ;
}

Bullet::Bullet(std::string display): GameEntity(){
    this->_display = display;
    return ;
}

Bullet::Bullet(Bullet const &_new) {
    *this = _new;
}

Bullet::~Bullet(void){
    return ;
}

Bullet &Bullet::operator=(Bullet const &_rhs){
    this->_display = _rhs._display;
    return (*this);
}