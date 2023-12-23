#include <gb/gb.h>
#include <stdio.h>
#include "hiromu.c"

void main(){
    set_sprite_data(0 ,2 , hiromusprite);
    set_sprite_tile(0 , 0);
    move_sprite(0, 88, 20);
    SHOW_SPRITES;
}