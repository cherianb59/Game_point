#include "Arduino.h"
#include "string.h"
class player
{
	private:
	uint8_t _game_score;
	uint8_t _set_score;
	uint8_t _player_id;
	char    _name[8]; //displayed vertically on both sides
	bool    _side; //side=FALSE means they are on hte left side
	bool    _serve; //serve=TRUE means they have the serve
	
	public:
	void game_increment(); //WORKS
	void set_increment();//WORKS
	void game_decrement();//WORKS
	void swap_side();//WORKS
	void set_side(bool);//WORKS
	void swap_serve();//WORKS
	void set_serve(bool);//WORKS
	void set_name(char [8]);//WORKS
	void reset_game_score();
	void reset_set_score();

	
	uint8_t read_game_score(); //WORKS
	uint8_t read_set_score();//WORKS
	uint8_t read_player_id();//WORKS
	char	read_name(int i); // TODO Mostly works
//	char*	read_first_name();
//	char*	read_last_name();
	bool	read_side();//WORKS
	bool	read_serve();//WORKS
//	char	first_name();
//	char	last_name();

	player();
	player(uint8_t,uint8_t,uint8_t,bool,bool);
//$	player(uint8_t,uint8_t,uint8_t,char [8],bool,bool);
	
};

void player::reset_game_score()
{
	_game_score=0;
}

void player::reset_set_score()
{
	_set_score=0;
}

uint8_t player::read_game_score()
{
	return _game_score;
}

uint8_t player::read_set_score()
{
	return _set_score;
}

uint8_t player::read_player_id()
{
	return _player_id;
}


char  player::read_name(int i)
{
	return _name[i];
}

bool player::read_serve()
{
	return _serve;
}

bool player::read_side()
{
	return _side;
}

//initialize to zero set later when created;
player::player(uint8_t game_score,uint8_t set_score,uint8_t player_id ,bool side ,bool serve)
{
	_player_id	=player_id;
	_game_score	=game_score;
	_set_score 	=set_score;
	_serve		=serve;
	_side		=side;
}

player::player()
{
	_player_id	=0;
	_game_score	=0;
	_set_score 	=0;
	_serve		=0;
	_side		=0;
}


void player::game_increment()
{
	_game_score++;
}

void player::set_increment()
{
	_set_score++;
}

void player::game_decrement()
{
	_game_score--;
}

void player::swap_side()
{
	_side= !_side;
}

void player::swap_serve()
{
	_serve= !_serve;
}

void player::set_serve(bool init)
{
	_serve= init;
}

void player::set_side(bool init)
{
	_side= init;
}

void player::set_name(char init[8])
{
	//	_name=init; //this needs to be tested god i hope it works
    for(int k=0; k<8; k++)
    {
	_name[k]=init[k];
    }
}

/*void main() 
{	
	rand_1=random() & 1; //who serves first
	rand_2=random() & 1;// what side they are on
	
	if (rand1)
	{
		print(player_a to serve);
	}
	else
	{
		print(player_b to serve);
	}
	
	ef (rand2)
	{
	print(player a to left side);
	}
	else
	{
		print(player b to left side);
	}
	
	player	player_a(id_1,rand1,rand2);
	player	player_b(id_2,!rand1,!rand2);

	if game_score(player_a,player_b)
		
	if game_score(player_b,player_a)
	
}*/


