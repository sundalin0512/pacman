#include "Wall.h"



Wall::Wall()
{
}


Wall::~Wall()
{
	for (int i = 0; i < row; i++)
	{
		delete data[i];
	}
	delete data;

}
