#include "Canvas.h"
Canvas::Canvas(int width, int height)
{
	this->height = height;
	this->width = width;
	matrix = new char* [height];
	for (int i = 0; i < height; i++)
	{
		matrix[i] = new char[width];
		for (int j = 0; j < width; j++)
		{
			matrix[i][j] = ' ';
		}
	}
}
void Canvas::test()
{
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			matrix[i][j] = '.';

}
void Canvas::Print()
{
	for (int i = 0; i < this->height; i++)
	{
		for (int j = 0; j < this->width; j++)
			std::cout << matrix[i][j];
		std::cout << std::endl;
	}
}
void Canvas::Clear()
{
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			matrix[i][j] = ' ';
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
		{
			if (((i - x) ^ 2 + (j - y) ^ 2) ==( ray ^ 2))
				matrix[i][j] = ch;
		}
}
